#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root != NULL) q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }

    return root;
}

int max_height(Node* root)
{
    if(root == NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int count_Nodes(Node* root)
{
    if(root == NULL) return 0;
    int l=count_Nodes(root->left);
    int r=count_Nodes(root->right);
    return l+r+1;
}

int main()
{
    Node* root = input_tree();
    int height = max_height(root); 
    int totalNodes = count_Nodes(root);
    if(totalNodes == pow(2, height) - 1)
    {
       cout <<"YES"; 
    }
    else
    {
       cout <<"NO"; 
    }
    return 0;
}
