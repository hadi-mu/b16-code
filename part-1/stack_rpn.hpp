#ifndef __stack_rpn__
#define __stack_rpn__

#include "stack.hpp"
#include <cassert>
#include <functional>

void plus(Stack<int> &operands){
    int operand1=operands.top();
    operands.pop();
    int operand2=operands.top();
    operands.pop();
    int result=operand1 + operand2;
    operands.push(result);
}

void minus(Stack<int> &operands){
    int operand1=operands.top();
    operands.pop();
    int operand2=operands.top();
    operands.pop();
    int result=operand1 - operand2;
    operands.push(result);
}

void multiplies(Stack<int> &operands){
    int operand1=operands.top();
    operands.pop();
    int operand2=operands.top();
    operands.pop();
    int result=operand1 * operand2;
    operands.push(result);
}

void divide(Stack<int> &operands){
    int operand1=operands.top();
    operands.pop();
    int operand2=operands.top();
    operands.pop();
    int result=operand1 / operand2;
    operands.push(result);
}




#endif // __stack_rpn__