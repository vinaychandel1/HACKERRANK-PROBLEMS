

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
struct SinglyLinkedListNode *a, *b, *c;
    
    a = NULL;
    b = head;
    while (b) {
        c = b->next;
        b->next = a;
        a = b;
        b = c;
    }
    return a;
    free(a);
    free(b);
    free(c);

}

