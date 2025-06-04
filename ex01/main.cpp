#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main() 
{
    try 
    {
        std::cout << "Basic test from subject:" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        
        std::cout << "\nTesting capacity limit:" << std::endl;
        try 
        {
            sp.addNumber(42);
            std::cout << "Error: Should have thrown exception" << std::endl;
        } 
        catch (const std::exception& e) 
        {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
        std::cout << "\nTesting with large number of elements:" << std::endl;
        Span large = Span(10000);
        std::vector<int> numbers;
        
        srand(time(NULL));
        for (int i = 0; i < 10000; i++) 
        {
            numbers.push_back(rand() % 100000);
        }
        
        large.addRange(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << large.shortestSpan() << std::endl;
        std::cout << "Longest span: " << large.longestSpan() << std::endl;
        
        std::cout << "\nTesting with empty span:" << std::endl;
        Span empty = Span(5);
        try 
        {
            empty.shortestSpan();
            std::cout << "Error: Should have thrown exception" << std::endl;
        } 
        catch (const std::exception& e) 
        {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
    
    return 0;
}
