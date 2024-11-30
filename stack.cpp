#include <iostream>
using namespace std;
class stack
{
private:
    int size;
    int *arr;
    int top;

public:
    stack(int size)
    {
        this->size = size;
        this->arr = new int(size);
        this->top = -1;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        arr[top--];
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return this->arr[this->top];
    }
};
int main()
{
    stack *st = new stack(5);
    st->push(1);
    st->push(1);
    st->push(1);
    st->push(1);
    st->push(1);
    cout<< st->peek();
}
