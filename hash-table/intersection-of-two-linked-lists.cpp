/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a= headA;
        ListNode* b= headB;
        while(a!=b){
            if(a==NULL){
                return headA;
            }
            else{
                a=a->next;
            }
            if(b==NULL){
                return headB;
            }
            else{
                b=b->next;
            }
        }
        return a;

        
    }
};