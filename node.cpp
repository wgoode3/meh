#include <iostream>

class Node
{
  public:
    int val;
    Node *next;
    Node(int value);
    void printMe();
};

Node::Node(int value)
{
    val = value;
    next = NULL;
}

void Node::printMe()
{
    std::cout << this << std::endl;
    std::cout << this->val << std::endl;
}

class SLL
{
  public:
    Node *head;
    SLL();
    void add(int value);
    void printVals();
};

SLL::SLL()
{
    head = NULL;
}

void SLL::add(int value)
{ 
    Node *temp = new Node(value);
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
