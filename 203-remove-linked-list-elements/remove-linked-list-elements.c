/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy-> val=0;
    dummy-> next = head;
    struct ListNode* temp = dummy;
    while(temp!= NULL && temp->next != NULL )
    if(temp->next->val == val){
        temp->next = temp->next->next;
        
    } else {
        temp = temp-> next;
    }
    return dummy->next;
    
}