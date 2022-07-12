#include <bits/stdc++.h>...

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {

    while(head!=NULL){
        cout << head->data <<"\n";
        head=head->next;
    }
}

int main()