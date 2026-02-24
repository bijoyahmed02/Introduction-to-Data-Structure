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
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void delete_at_index(Node* &head, int idx)
{
    if (head == NULL) 
    {
        return;
    }       

    if (idx == 0)
    {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* tmp = head;
    for(int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL) 
        {
            return;
        }
        tmp = tmp->next;
    }

    if (tmp->next == NULL) 
    {
        return; 
    }

    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, V);
        }

        print_linked_list(head);
    }

    return 0;
}
