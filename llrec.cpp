#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node*& head, Node*& smaller, Node*& larger, int pivot) {
    if (!head) {
        smaller = nullptr;
        larger = nullptr;
        return;
    }

    llpivot(head->next, smaller, larger, pivot);
    
    //Node* nextNode = head->next; // Store the next node before modifying pointers
    if (head->val <= pivot) {
        head->next = smaller;
        smaller = head;
    } else {
        head->next = larger;
        larger = head;
    }

    head = nullptr; // Disconnect the original head
}