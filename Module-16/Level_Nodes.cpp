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
        Node* myLeft,*myRight;
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

void print_Level(Node* root, int currentLevel, int X, bool &found)
{
    if(root == NULL) 
    {
        return;
    }
    if(currentLevel == X)
    {
        cout << root->val <<" ";
        found = true;
        return;
    }

    print_Level(root->left, currentLevel + 1, X, found);
    print_Level(root->right, currentLevel + 1, X, found);
}

int main()
{
    Node* root = input_tree();
    int X;
    cin >> X;
    bool found = false;
    print_Level(root, 0, X, found);
    if(!found)
    {
      cout << "Invalid";  
    }
    return 0;
}
