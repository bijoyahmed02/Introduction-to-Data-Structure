#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void forward(Node* head)
{
    cout<<"L -> ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout <<endl;
}

void backward(Node* tail)
{
    cout <<"R -> ";
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->prev;
    }
    cout <<endl;
}

bool insert_at_index(Node* &head, Node* &tail, int idx, int val, int &sz)
{
    if(idx <0|| idx>sz) 
    {
        return false; 
    }
    Node* newnode = new Node(val);
    if(sz==0) 
    {
        head = newnode;
        tail = newnode;
    }
    else if(idx == 0) 
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else if(idx==sz) 
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    else
    {
        Node* tmp = head;
        for(int i = 0; i<idx; i++) 
        {
            tmp = tmp->next;
        }
        newnode->prev = tmp->prev;
        newnode->next = tmp;
        tmp->prev->next = newnode;
        tmp->prev = newnode;
    }
    sz++;
    return true;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    int Q;
    cin>>Q;

    for(int i = 0; i < Q; i++)
    {
        int X, V;
        cin >>X>>V;
        if(!insert_at_index(head, tail, X, V, size))
        {
            cout <<"Invalid"<< endl;
        }
        else
        {
            forward(head);
            backward(tail);
        }
    }

    return 0;
}
