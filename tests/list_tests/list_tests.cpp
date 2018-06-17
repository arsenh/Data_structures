#include "../src/list.h"
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
#include <stdio.h>

void test_add()
{
    std::cout << "---------testing add()---------" << std::endl;
    List list;
    int element = 100;
    list.add(100);
    int resault = list.search_by_index(0);
    assert(element == resault);
    std::cout << "testing add() function for element argument pass" << std::endl;

}

void test_search_by_index()
{
    std::cout << "---------testing search_by_index()---------" << std::endl;
    int element1 = 25;
    int element2 = 45;
    List list;
    list.add(element1);
    list.add(element2);

    int resault1 = list.search_by_index(0);
    int resault2 = list.search_by_index(1);
    
    assert(element1 == resault1);
    std::cout << "testing search_by_index() function for element1 argument pass" << std::endl; 
    assert(element2 == resault2);
    std::cout << "testing search_by_index() function for element2 argument pass" << std::endl;  
}

void test_search_by_value()
{
    std::cout << "---------testing search_by_value()---------" << std::endl;
    int element1 = 0;
    int element2 = 1;
    List list;
    list.add(25);
    list.add(45);

    int resault1 = list.search_by_value(25);
    int resault2 = list.search_by_value(45);

    assert(element1 == resault1);
    std::cout << "testing search_by_value() function for element1 argument pass" << std::endl;
    assert(element2 == resault2);
    std::cout << "testing search_by_value() function for element2 argument pass" << std::endl;
    
}

void test_swap()
{
    std::cout << "---------testing swap()---------" << std::endl;
    List list;
    list.add(25);
    list.add(50);
    int element1 = list.search_by_index(0);
    int element2 = list.search_by_index(1);
    list.swap(0,1);
    int resault1 = list.search_by_index(0);
    int resault2 = list.search_by_index(1);
    assert(element1 == resault2);
    std::cout << "testing swap() function for element1 and resault2 pass" << std::endl;
    assert(element2 == resault1);
    std::cout << "testing swap() function for element2 and resault1 pass" << std::endl;
}

int main()
{
    test_add();
    test_search_by_index();
    test_search_by_value();
    test_swap();
    return 0;
}

