          Node* removeDuplicates(Node* head)
          {
              if(head->next != NULL){
                  Node* one, *two;
                  one = head;
                  two = one->next;
                  while(true){
                      
                      if(one->data == two->data){
                          if(two->next != NULL){
                              one->next = two->next;
                              Node* old  = two;
                              two = one->next;
                              delete old;
                          }else{
                              delete two;
                              one->next = NULL;
                              return head;
                          }

                      }else{
                          if(two->next != NULL){
                              two = two->next;
                              one = one->next;
                          }else
                              return head;
                      }
                      
                  }
              }else
                  return head;
          }