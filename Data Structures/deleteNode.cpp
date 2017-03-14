/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node  *n;
    Node *next;
    
    if(position == 0){
        if(head->next == NULL){
            free(head);
            return NULL;
        }
        else{
            n = head->next;
            free(head);
            return n;
        }
    }else{
        
        n = head;
        for(int i = 1; i < position; i++){
            n = n->next;
        }
        if(n->next->next == NULL){
            free(n->next);
            n->next = NULL;
            return head;
        }
        else{
            next = n->next->next;
            free(n->next);
            n->next = next;
            return head;
        }
    }
    
    
}

