#include "../src/list.h"
#include "../src/stack.h"
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
#include <stdio.h>

void test_empty()
{
    std::cout << "---------testing empty()---------" << std::endl;
    Stack stack;
    bool resault = stack.empty();
    assert(resault == true);
    std::cout << "testing empty() function for empty stack pass" << std::endl;
}

void test_size()
{
    std::cout << "---------testing size()---------" << std::endl;
    Stack stack;
    stack.push(100);
    stack.push(200);
    stack.push(300);
    int resault = stack.size();
    assert(resault == 3);
    std::cout << "testing size() function for three elements pass" << std::endl;
}

void test_top()
{
    std::cout << "---------testing top()---------" << std::endl;
    Stack stack;
    stack.push(100);
    stack.push(200);
    stack.push(300);
    int resault = stack.top();
    assert(resault == 300);
    std::cout << "testing top() function for three elements pass" << std::endl; 
}



int main()
{
    test_empty();
    test_size();
    test_top();
    return 0;
}

