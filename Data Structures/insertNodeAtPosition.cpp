/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *n;    //incrementor
    Node *next;   //saves place of node after newNode 
    Node *newNode = (Node *)malloc(sizeof(Node));    //node to be added in
    newNode->data = data;
    
    //add node before head
    if(position == 0){
        newNode->next = head;
        return newNode;
    }
    
    n = head;
    for(int i = 1; i < position; i++){
        n = n->next;
    }
    //Insert new node in correct spot and link to correct next node
    next = n->next;
    n->next = newNode;
    newNode->next = next;
    
    return head;
    
}

