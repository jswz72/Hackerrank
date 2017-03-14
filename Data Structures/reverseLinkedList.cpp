/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    else{
        Node *prevNode = NULL;    
        Node *temp = head;
        Node *nextNode = NULL;
        while(temp != NULL){
            nextNode = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = nextNode;
        }
        return prevNode;
    }
}

