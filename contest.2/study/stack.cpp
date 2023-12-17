#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *curr = nullptr;
bool push(int a)
{
    node *temp = curr;
    curr = new node;
    curr->next = temp;
    curr->data = a;
    return true;
}

bool pop()
{
    if (curr != nullptr)
    {
        node *temp = curr;
        curr = curr->next;
        delete temp;
        return true;
    }
    return false;
}

int top()
{
    return curr->data;
}

bool isEmpty()
{
    return curr==nullptr;
}
