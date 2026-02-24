#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=tail->next;
}
void print_single_linked_list(Node* head)
{
    Node* tmp=head;
    int Max=INT_MIN;
    int Min=INT_MAX;
    if(head==NULL)
    {
        cout<<0;
        return;
    }
    while (tmp!=NULL)
    {
        Max=max(Max,tmp->val);
        Min=min(Min,tmp->val);
        tmp=tmp->next;
    }
    cout<<Max-Min;
    
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
   print_single_linked_list(head);
    return 0;
}