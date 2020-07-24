#include<iostream>
using namespace std;

class Node{
public: 
        int data;
        Node* next;

        Node(int val){
                data = val;
                next = NULL;
        }
};

void insertAtHead(Node *&head, int data){
        Node *n = new Node(data);
        n->next = head;
        head = n;
}

void printList(Node *head){
        while(head){
                cout<<head->data<<" ";
                head = head->next;
        }
        cout<<endl;
}

void reverseList(Node *&head){
        Node *cur = NULL;
        Node *nxt = head;
        while(nxt != NULL){
                Node *temp = nxt->next;
                nxt->next = cur;
                cur = nxt;
                nxt = temp;
        }
        head = cur;
}

int main(){
        Node *head = NULL;
        insertAtHead(head,3);
        insertAtHead(head,2);
        insertAtHead(head,1);
        printList(head);
        reverseList(head);
        printList(head);

}