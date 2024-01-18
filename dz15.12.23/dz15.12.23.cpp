#include <iostream>
#include "Stack.h"

int main()
{
    setlocale(LC_ALL, "");
    Stack* stack = new Stack();
    stack->push(4);
    stack->push(6);
    stack->push(2);
    stack->push(8);
    stack->push(20);
    stack->push(23);

    std::cout << "Размер стека: " << stack->size() << std::endl;

    std::cout << "Первый узел стека: " << stack->top() << std::endl << std::endl;

    std::cout << "Все значения стека: \n";
    stack->traverse();

    std::cout << "Вывод стека: \n";
    while (!stack->isEmpty()) {
        std::cout << stack->pop() << " ";
    }
    std::cout << std::endl;

    stack->push(8);
    stack->push(20);
    stack->push(23);

    std::cout << "Размер нового стека: " << stack->size() << std::endl;

    stack->clear();

    std::cout << "Подтверждение того, что стек очистился: " << stack->pop();

    delete stack;
}