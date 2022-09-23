#include "structure.cpp"


class T_binary
{
    treeNode* root;

    protected:
        treeNode* node(int info)
        {
            treeNode* temp=new treeNode;
            temp->data=info;
            temp->left=temp->right=NULL;
            return temp;
        }    
    public:
        void init()
        {
            root=NULL;
        }
        void insert(vector<int> &input,int n)
        {
            root=new treeNode;
            queue<treeNode*>q;
            root->data=input[0];
            int i=1;
            while(!q.empty() && i<n)
            {
                treeNode* temp=q.front();
                q.pop();
                temp->left=node(input[i]);
                temp->right=node(input[i+1]);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                i+=2;
            }
            if(i-1<n && !q.empty())
            {
                treeNode* temp=q.front();
                q.pop();
                temp->left=node(input[i-1]);
                temp->right=NULL;
            }
        }
        void preOrder()
        {
            
        }
        void inOrder()
        {

        }
        void postOrder()
        {

        }
        void levelOrder()
        {

        }
        void bfs()
        {

        }
        void dfs()
        {

        }
        void delNode()
        {

        }
};
