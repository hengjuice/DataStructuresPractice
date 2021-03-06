#include <bits/stdc++.h>
using namespace std;
class StackNode{
    public:
        int data;
        StackNode* next;
};

StackNode* newNode(int new_data){
    StackNode* stackNode = new StackNode();
    stackNode -> data = new_data;
    stackNode -> next = NULL;
    return stackNode;
}

//To check if queue is empty or not
int isEmpty(StackNode* root){
    return !root;
}

void push(StackNode** root, int data)
{
    StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout << data << " pushed to stack\n";
}

int pop(StackNode** root){
    if(isEmpty(*root))
        return 0;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    delete temp;
    //free temp;
}

int peek(StackNode* root){
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main(){
    StackNode* root = NULL;
    
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    
    cout << pop(&root) << " popped from stack\n";
    
    cout << "Top element is " << peek(root) << endl;
    
    return 0;
}