SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	
SinglyLinkedListNode *newNode=new SinglyLinkedListNode(data);
SinglyLinkedListNode *next;
if(llist==NULL){
    return newNode;
}
if(llist!=NULL)
    next=llist->next;
newNode->next   = llist;
llist->next=next;
return newNode;
}