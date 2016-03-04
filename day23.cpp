    void levelOrder(Node * root){
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* tmp = q.front();
            q.pop();
            
            cout << tmp->data << " ";
            
            if(tmp->left != NULL)
                q.push(tmp->left);
            if(tmp->right != NULL)
                q.push(tmp->right);
        }
	}
