SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode*temp=head;
    SinglyLinkedListNode *newNode=new SinglyLinkedListNode(data);
    if(head==NULL){
    head=newNode;
    return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
    
}