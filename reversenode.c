/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    if (!head || k == 1) return head;


    struct ListNode* node = head;
    for (int i = 0; i < k; i++) {
        if (!node) return head;   
        node = node->next;
    }


    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    for (int i = 0; i < k; i++) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }


    head->next = reverseKGroup(curr, k);

    return prev;  
    
}