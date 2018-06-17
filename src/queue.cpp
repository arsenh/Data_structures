#include "list.h"
#include "queue.h"

Queue::Queue()
{

}

Queue::Queue(int value)
{
    list.add(value);
}

bool Queue::empty()
{
    if (list.empty()) {
        return true;
    } else {
        return false;
    }
}

int Queue::size()
{
    return list.get_length();
}

int Queue::front()
{
    int size = list.get_length();
    if (size > 0) {
    int value = list.search_by_index(size - 1);
    return value; 
    } else {
        return -2;
    }
}

int Queue::back()
{
    int size = list.get_length();    
    if (size > 0) {
        int value = list.search_by_index(0);
        return value;
    } else {
        return -2;
    }
}

void Queue::push(int value)
{
    list.add(value);
}

void Queue::pop()
{
    list.pop();
}

void Queue::print()
{
    list.print();
}
