/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int stack1[10000], stack2[10000];
    int top1 = 0, top2 = 0;

    // Push l1 digits to stack1
    while (l1) {
        stack1[top1++] = l1->val;
        l1 = l1->next;
    }

    // Push l2 digits to stack2
    while (l2) {
        stack2[top2++] = l2->val;
        l2 = l2->next;
    }

    struct ListNode* head = NULL;
    int carry = 0;

    // Add digits
    while (top1 > 0 || top2 > 0 || carry) {
        int sum = carry;
        if (top1 > 0) sum += stack1[--top1];
        if (top2 > 0) sum += stack2[--top2];

        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = head;
        head = node;

        carry = sum / 10;
    }

    return head;
}