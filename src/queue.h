#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

class Queue
{
    private:
        List list;
    public:
        
        /**
         * @breif Default constructor.
         */
        Queue();
        
        /**
         * @breif Constructor with parapetres.
         * @param value is a input value.
         */
        Queue(int value);

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
         * @breif Function return oldest element in the queue.
         */
        int front();

        /**
         * @breif Function return last element in the queue.
         */
        int back();

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
