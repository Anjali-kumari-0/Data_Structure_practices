  /*
   DS
  / \
LDS NLDS

i) Linked list 
ii)  create linked list using class 
class Node {
public:
    int data;
    Node* next;
};

*/
#include<bits/stdc++.h>
using namespace std;

// declier node
class Node{
    public:
    int data;
    Node* next;
};
void list(Node* n){
    while(n != NULL) {
        cout<< n->data <<" ";
        n = n->next;
    }
}
int main(){

    /* reate ,allocate, assigned */

    //create simple linked list
    // 3 nodes

    // In strating implement null at all nodes
    Node* head = NULL;
    Node* second =NULL;
    Node* third =NULL;

    //allocate 3 node
    head  = new Node();
    second = new Node();
    third  = new Node(); // data is randon bez we havent assigned anything yet

    //assigned data
    head->data =1;
    head->next= second;


    second->data=2;
    second->next= third;

    third->data=3;
    third->next= NULL;

    // we have to travers the list to print it
    cout<<" list is "<<list(head);

    return 0;



}

