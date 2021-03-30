    vector<int> rightView(Node *root)
    {
    
    vector<int>v;
    if(root==NULL)
    return v;

    queue<Node*> q;
    q.push(root);
    
    while(q.size())
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            Node* temp=q.front();
            q.pop();
            
            if(i==0)
            v.push_back(temp->data);

            if(temp->right!=NULL)                           //just reverse left and right condition which is the inly difference from left view
            q.push(temp->right);
            
            if(temp->left!=NULL)
            q.push(temp->left);
            
        }
    }
return v;
    }
