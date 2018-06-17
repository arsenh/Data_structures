#include <iostream>
#include <list.h>

List::List()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

List::List(int value)
{
    Node* node = new Node(value);
    head = tail = node;
    length = 1;
}

List::List(List& list)
{
    head = list.head;
    tail = list.tail;
    length = list.length;
}

void List::add(int value)
{
    if (head == NULL) {
        Node* node = new Node(value);
        head = tail = node;
        length = 1;
    } else if (length == 1) {
        Node* node = new Node(value);
        tail = node;
        tail->prev = head;
        tail->next = NULL;
        head->next = tail;
        length++;
    } else {
        Node* node = new Node(value);
        Node* last = head;
        for (int i = 0; i < length - 1; ++i) {
            last = last->next;
        }
        tail->next = node;
        node->prev = tail;
        node->next = NULL;
        tail = node;
        length++;
    }
}

void List::remove(unsigned int index)
{
    if(0 == index) {
        Node* current_head = head->next;
        current_head->prev = NULL;
        delete head;
        head = current_head;
        --length;
    } else if (length - 1 == index) {
        Node* current_tail = tail->prev;
        current_tail->next = NULL;
        delete tail;
        tail = current_tail;
        --length;
    } else {
        Node* del_elm = head;
        for (int i = 0; i < index; ++i) {
            del_elm = del_elm->next;
        }
        Node* prev_elm = del_elm->prev;
        Node* next_elm = del_elm->next;
        delete del_elm;
        prev_elm->next = next_elm;
        next_elm->prev = prev_elm;
        --length;
    }
}

int List::search_by_index(unsigned int index)
{
    Node* node = head;
    for (int i = 0; i < index; ++i) {
        node = node->next;
    }
    return node->value;
}

unsigned int List::search_by_value(int value)
{
    Node* node = head;
    for (int i = 0; i < length; ++i) {
        if(node->value == value) {
            return i;
        }
        node = node->next;
    }
}

void List::set(unsigned int index, int value)
{
    Node* node = head;
    for (int i = 0; i < index; ++i) {
        node = node->next;
    }
    node->value = value;
}

void List::swap(unsigned int f, unsigned int s)
{
    Node* first_element = head;
    Node* second_element = head;
    for (int i = 0; i < f; ++i) {
        first_element = first_element->next;
    }
    for (int j = 0; j < s; ++j) {
        second_element = second_element->next;
    }

    int temp = first_element->value;
    first_element->value = second_element->value;
    second_element->value = temp;
}

List& List::operator = (const List& list)
{
    head = list.head;
    tail = list.tail;
    length = list.length;
    return *this;
}

void List::print()
{
    Node* node = head;
    for(int i = 0; i < length; ++i) {
        std::cout << "index: " << i << " value: " << node->value << std::endl;
        node = node->next;
    }
}

void List::push(int value) {
    add(value);
}

void List::pop()
{
    if (1 == length) {
        delete head;
        head = NULL;
        tail = NULL;
        length = 0;
    } else {
        Node* tl = tail;
        tail = tail->prev;
        tail->next = NULL;
        tl->prev = NULL;
        delete tl;
    } 
    --length;
}

int List::get_head_value()
{
    return head->value;
}

int List::get_tail_value()
{
    return tail->value;
}

int List::get_length()
{
    return length;
}

bool List::empty()
{
    if (0 == length) {
        return true;
    } else {
        return false;
    }
}

List::~List()
{

}










