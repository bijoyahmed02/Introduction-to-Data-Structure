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

void collect_leaf_nodes(Node* root, vector<int> &leafnodes)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        leafnodes.push_back(root->val);
        return;
    }
    collect_leaf_nodes(root->left, leafnodes);
    collect_leaf_nodes(root->right, leafnodes);
}

int main()
{
    Node* root = input_tree();
    vector<int> leafnodes;
    collect_leaf_nodes(root, leafnodes);
    sort(leafnodes.begin(), leafnodes.end(), greater<int>());
    for(int i=0; i<leafnodes.size(); i++)
    {
        cout << leafnodes[i];
        if(i != leafnodes.size() - 1)
        {
            cout << " ";
        } 
    }

    return 0;
}
