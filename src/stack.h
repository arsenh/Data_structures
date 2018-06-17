#ifndef STACK_H
#define STACK_H

#include "list.h"

class Stack
{
    private:
        List list;
    public:
        
        /**
         * @breif Default constructor.
         */
        Stack();
        
        /**
         * @breif Constructor with parapetres.
         * @param value is a input value.
         */
        Stack(int value);

        /**
         * @breif Function checks for an empty Stack.
         *  return true if Stack empty.
         */
        bool empty();

        /**
         * @breif Function return size of Stack.
         */
        int size();

        /**
         * @breif Function return last input element.
         */
        int top();

        /**
         * @breif Fucntion adds element in Stack.
         * @param value parameter is a input value.
         */
        void push(int value);

        /**
         * @breif Function delete top element in the Stack.
         */
        void pop();

        /**
         * @breif Function prints all elements in Stack.
         */
        void print();
};

#endif
