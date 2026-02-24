#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node* head = NULL; 

    void push(int val)
    {
        Node* newnode = new Node(val);
        newnode->next = head; 
        head = newnode;
    }
    void pop()
    {
        if(head == NULL) return;
        Node* del = head;
        head = head->next;
        delete del;
    }
    int top()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class myQueue
{
public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val)
    {
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop()
    {
        if(head == NULL) return;
        Node* del = head;
        head = head->next;
        delete del;
        if(head == NULL)
        {
           tail = NULL; 
        }
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack A;
    myQueue B;

    int N, M;
    cin >> N >> M;

    if(N != M)
    {
        cout <<"NO"<<endl;
        return 0;
    }

    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }

    for(int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }

    while(!A.empty())
    {
        if(A.top() != B.front())
        {
            cout << "NO"<<endl;
            return 0;
        }
        A.pop();
        B.pop();
    }

    cout <<"YES"<<endl;
    return 0;
}
