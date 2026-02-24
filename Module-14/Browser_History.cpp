#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string address;
    Node* next;
    Node* prev;
    Node(string adr) 
    {
        this->address = adr; 
        next = NULL;
        prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string address)
{
    Node* newNode = new Node(address);
    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

Node* find(Node* head, string address)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->address == address) 
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    string address;
    while(cin >> address && address != "end")
    {
        insert_at_tail(head, tail, address);
    }
    Node* current = head; 
    int Q;
    cin >> Q;
    cin.ignore();

    for(int i=0; i<Q; i++)
    {
        string cmd;
        getline(cin, cmd);

        if(cmd.substr(0,5) == "visit")
        {
            string address = cmd.substr(6);
            Node* node = find(head, address);
            if(node != NULL)
            {
                current = node;
                cout << current->address << endl;
            }
            else
            {
                cout <<"Not Available" << endl;
            }
        }
        else if(cmd =="next")
        {
            if(current != NULL && current->next != NULL)
            {
                current = current->next;
                cout <<current->address<<endl;
            }
            else
            {
                cout <<"Not Available"<<endl;
            }
        }
        else if(cmd =="prev")
        {
            if(current != NULL && current->prev != NULL)
            {
                current = current->prev;
                cout <<current->address<<endl;
            }
            else
            {
                cout <<"Not Available"<<endl;
            }
        }
    }

    return 0;
}
