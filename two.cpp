void abc(Node * root,vector<int> &v,int &level,int maxlevel)
{
    if(root==NULL)
    return ;
    else
    {  
        if(maxlevel>level)
        {
              v.push_back(root->data);
              level=maxlevel;
        }
          abc(root->right,v,level,maxlevel+1);      
         abc(root->left,v,level,maxlevel+1);

    }
}
vector<int> rightView(Node *root)
{
   vector<int> v;
   int level=0;
   int maxlevel=1;
   abc(root,v,level,maxlevel);
   return v;
}