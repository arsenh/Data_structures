#ifndef LIST_H
#define LIST_H

#include <cstddef>

class List
{
    private:
        class Node
            {
               public:
                    int value;
                    Node* next;
                    Node* prev;
                    /**
                     * @brief Default constructor.
                     */
                    Node()
                    {
                    }    
                    
                    /**
                     * @brief Constructor with parameters.
                     */
                    Node(int v) : value(v), next(NULL), prev(NULL)
                    {
                    }
            };
        Node* head;
        Node* tail;
        int length;
    public:
        /**
         * @brief Default constructor.
         */
        List();

        /**
         * @brief Constructor with parameters.
         */
        List(int value);

        /**
         * @brief Copy constructor.
         */
        List(List& list);

        /**
         * @brief Function add adds an element in List.
         * @param value is an value of element.
         */
        void add(int value);

        /**
         * @brief Function removes an element in list by index.
         * @param index is an index of List.
         */
        void remove(unsigned int index);

        /**
         * @brief Function search an element by index.
         * @param index is an index of element.
         * @return Function returns value of element.
         */
        int search_by_index(unsigned int index);

        /**
         * @brief Function search element by value.
         * @param valie is a value of element.
         */
        unsigned int search_by_value(int value);

        /**
         * @brief Function sets the value by index.
         * @param index is an index of List.
         * @param value is an value of element.
         */
        void set(unsigned int index, int value);

        /**
         * @brief Function changes the values of f and s
         * @param f is a first index of List.
         * @param s is a second index of List.
         */
        void swap(unsigned int f, unsigned int s);

        /**
         * @brief Overloading = operator.
         * @param list is a List class exemplar.
         * @return List by reference.
         */
        List& operator = (const List& list);

        /**
         * @brief Function prints elements of List.
         */
        void print();

        /**
         * @brief Function add element at the end of the List.
         * @param value this is an added element.
         */
        void push(int value);

        /**
         * @brief Function deeletes last element in List.
         */
        void pop();

        /**
         * @brief Fucntion return head value.
         */
        int get_head_value();

        /**
         * @brief Function return tail value.
         */
        int get_tail_value();

        /**
         * @breif Function checks for an empty List.
         */
        bool empty();
        
        /**
         * @brief Function return length member.
         */
        int get_length();
        ~List();

};

#endif
