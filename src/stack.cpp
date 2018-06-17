#include "list.h"
#include "stack.h"

Stack::Stack()
{

}

Stack::Stack(int value)
{
    list.add(value);
}

bool Stack::empty()
{
    if (list.empty()) {
        return true;
    } else {
        return false;
    }
}

int Stack::size()
{
    return list.get_length();
}

int Stack::top()
{
    int size = list.get_length();
    return list.search_by_index(size - 1);
}

void Stack::push(int value)
{
    list.add(value);
}

void Stack::pop()
{
    int size = list.get_length();
    if (size > 0) {
        list.remove(size - 1);
    } else {
        return;
    }
}

void Stack::print()
{
    list.print();
}
