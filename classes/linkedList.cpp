#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
    void insertAtbegin(int d, node* &head, node* &tail)
    {
        if (head == NULL)
        {
            node* node1=new node(d);
            head=tail=node1;
        }else{
             node* node1=new node(d);
             node1->next=head;
             head=node1;
        }
    }

    void insertAtend(int d,  node * &head, node * &tail){
        if(tail==NULL){
            node * node1=new node(d);
            head=tail=node1;
        }else{
            node * node1 =new node(d);
            tail->next=node1;
            tail=node1;
        }
    }

    void deleteFrombegin(node* &head, node* &tail){
        if(head==NULL){
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            node *node1=head;
            head=head->next;
            delete node1;
        }

    }

    void deleteFromend(node* &head, node* &tail){
        if(head==NULL){
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            node *node1=tail;
            head=head->next;
            delete node1;
        }
    }

    void findMid(node* &head, node* &tail){
        // int count=0;
        // node* node1=head;
        // while(node1->next!=NULL){
        //     count++;
        // }
        // count/=2;
        // node1=head;
        // while(count--){
        //     node1=node1->next;
        // }
        // cout<<node1->data<<endl;

        node* fast=head;
        node* slow=head;
        while(fast->next==NULL && fast->next->next==NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
    }


};

int main()
{
    insertAtend(15, head, tail);
    return 0;
}