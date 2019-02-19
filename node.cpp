#include <iostream>

class Node
{
  public:
    int val;
    Node *next;
    Node()
    {
        next = NULL;
    }
    void printMe();
};

void Node::printMe()
{
    std::cout << this << std::endl;
    std::cout << this->val << std::endl;
}

class SLL
{
  public:
    Node *head;
    SLL()
    {
        head = NULL;
    }
    void add(int value);
    void printVals();
};

void SLL::add(int value)
{ 
    Node *temp = new Node;
    temp->val = value;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    Node *runner = head;
    while(runner->next != NULL)
    {
        runner = runner->next;
    }
    runner->next = temp;
}

void SLL::printVals()
{
    Node *runner = head;
    while(runner != NULL)
    {
        runner->printMe();
        runner = runner->next;
    }   
}

int main ()
{
    SLL *listy = new SLL;
    listy->add(3);
    listy->add(4);
    listy->add(5);
    listy->add(6);
    listy->printVals();
    return 0;
}
