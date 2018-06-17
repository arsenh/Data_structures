#include "../src/list.h"
#include "../src/queue.h"
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
#include <stdio.h>

void test_empty()
{
    std::cout << "---------testing empty()---------" << std::endl;
    Queue queue;
    bool resault = queue.empty();
    assert(resault == true);
    std::cout << "testing empty() function for empty queue pass" << std::endl;
}


void test_size()
{
    std::cout << "---------testing size()---------" << std::endl;
    Queue queue;
    queue.push(500);
    queue.push(600);
    queue.push(700);
    int resault = queue.size();
    assert(resault == 3);
    std::cout << "testing size() function for three elements pass" << std::endl;
}


void test_front()
{
    std::cout << "---------testing front()---------" << std::endl;
    Queue queue;
    queue.push(500);
    queue.push(600);
    queue.push(700);
    int resault = queue.front();
    assert(resault == 500);
    std::cout << "testing front() function for three elements pass" << std::endl;
}


void test_back()
{
    std::cout << "---------testing back()---------" << std::endl;
    Queue queue;
    queue.push(500);
    queue.push(600);
    queue.push(700);
    int resault = queue.back();
    assert(resault == 700);
    std::cout << "testing back() function for three elements pass" << std::endl;
}

int main()
{
    test_empty();
    test_size();
    test_front();
    test_back();
    return 0;
}

