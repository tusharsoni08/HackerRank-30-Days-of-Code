      Node* insert(Node *head,int data)
      {
          Node *newOne = new Node(data);
          if(head == NULL){
              head = newOne;
              return head;
          }
          Node *curr = head;
          while(true){
              if(curr->next != NULL){
                  curr = curr->next;
              }else {
                  curr->next = newOne;
                  return head;
              }
          }
      }