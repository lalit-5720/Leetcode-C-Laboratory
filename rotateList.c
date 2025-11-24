/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0)
        return head;

    // Step 1: Compute the length and get the tail
    int length = 1;
    struct ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    // Step 2: Make it a circular list
    tail->next = head;

    // Step 3: Find the new tail (length - k % length - 1)
    k = k % length;
    int stepsToNewTail = length - k - 1;

    struct ListNode* newTail = head;
    for (int i = 0; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // Step 4: New head is next of newTail, break the ring
    struct ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
    
}