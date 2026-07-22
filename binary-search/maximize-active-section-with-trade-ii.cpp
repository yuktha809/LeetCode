class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
         int n = s.size();

        // Prefix ones
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + (s[i] == '1');

        struct Run {
            char c;
            int l, r, len;
        };

        vector<Run> runs;

        // Build runs
        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            runs.push_back({s[i], i, j - 1, j - i});
            i = j;
        }

        int m = runs.size();

        vector<int> gain(m, 0);

        // gain for every surrounded 1-run
        for (int i = 1; i + 1 < m; i++) {
            if (runs[i].c == '1' &&
                runs[i - 1].c == '0' &&
                runs[i + 1].c == '0') {

                gain[i] = runs[i - 1].len + runs[i + 1].len;
            }
        }

        // segment tree over gains
        int sz = 1;
        while (sz < m) sz <<= 1;

        vector<int> seg(2 * sz);

        for (int i = 0; i < m; i++)
            seg[sz + i] = gain[i];

        for (int i = sz - 1; i; i--)
            seg[i] = max(seg[i << 1], seg[i << 1 | 1]);

        auto queryMax = [&](int l, int r) {
            if (l > r) return 0;
            l += sz;
            r += sz;
            int ans = 0;
            while (l <= r) {
                if (l & 1) ans = max(ans, seg[l++]);
                if (!(r & 1)) ans = max(ans, seg[r--]);
                l >>= 1;
                r >>= 1;
            }
            return ans;
        };

        vector<int> runId(n);

        for (int i = 0; i < m; i++)
            for (int j = runs[i].l; j <= runs[i].r; j++)
                runId[j] = i;

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            int ones = pref[r + 1] - pref[l];

            int L = runId[l];
            int R = runId[r];

            while (L < m && runs[L].l < l) L++;
            while (R >= 0 && runs[R].r > r) R--;

            int best = 0;
            if (L <= R)
                best = queryMax(L, R);

            ans.push_back(ones + best);
        }

        return ans;
    }
};