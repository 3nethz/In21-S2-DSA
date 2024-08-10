#include <bits/stdc++.h>
struct node
{
    int data;
    struct node *link;
};
using namespace std;

void display (struct node *node){
    if (node != NULL)
    {
        display(node->link);
        cout << node->data << endl; 
    }

}

int main(){
    using namespace std;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head ->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;

    head->link->link = current;

    bool wh = (head->link);


    //cout << head->link <<  endl << wh;
   display(head);


}

