#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = NULL;
    int arr[] = {2,4,6,8,10};
    //insert node at begning 
    //linked list dosent exits
    for(int i=0;i<4;i++){
        if (Head==NULL)
       {
        Head = new Node(arr[i]);
       }
       else{
        Node * temp;
        temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
       }
    }
    //prin the value 
    Node *temp = Head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
       
}