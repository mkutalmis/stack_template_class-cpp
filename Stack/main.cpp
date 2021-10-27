#include <iostream>
#include "Stack.h"

/* Driver Function */
int main()
{
	Stack<int> stack_int;
	Stack<double> stack_double;
	Stack<char> stack_char;

	std::cout << "----------------- Integer Stack  ---------------- - " << std::endl;
	std::cout << "Stack Size : " << stack_int.size() << std::endl;
	std::cout << "Stack poping : " << stack_int.pop() << std::endl;
	std::cout << "Stack pushing 10,20,30" << std::endl;
	stack_int.push(10);
	stack_int.push(20);
	stack_int.push(30);
	std::cout << "Stack Size : " << stack_int.size() << std::endl;
	std::cout << "Stack Peek : " << stack_int.peek() << std::endl;
	std::cout << "Stack Size : " << stack_int.size() << std::endl;
	std::cout << "Stack poping : " << stack_int.pop() << std::endl;
	std::cout << "Stack Size : " << stack_int.size() << std::endl;
	std::cout << "Stack Peek : " << stack_int.peek() << std::endl;
	std::cout << "Stack Size : " << stack_int.size() << std::endl;
	std::cout << "Deleting Stack : " << std::endl;
	stack_int.clear_stack();
	std::cout << "Stack Size : " << stack_int.size() << std::endl;

	std::cout << "----------------- Double Stack  ---------------- - " << std::endl;
	std::cout << "Stack Size : " << stack_double.size() << std::endl;
	std::cout << "Stack pushing 10.2,20.5,30.0" << std::endl;
	stack_double.push(10.2);
	stack_double.push(20.5);
	stack_double.push(30.0);
	std::cout << "Stack Size : " << stack_double.size() << std::endl;
	std::cout << "Stack Peek : " << stack_double.peek() << std::endl;
	std::cout << "Stack Size : " << stack_double.size() << std::endl;
	std::cout << "Stack poping : " << stack_double.pop() << std::endl;
	std::cout << "Stack Size : " << stack_double.size() << std::endl;
	std::cout << "Stack Peek : " << stack_double.peek() << std::endl;
	std::cout << "Stack Size : " << stack_double.size() << std::endl;
	std::cout << "Deleting Stack : " << std::endl;
	stack_double.clear_stack();
	std::cout << "Stack Size : " << stack_double.size() << std::endl;

	std::cout << "----------------- Char Stack  ---------------- - " << std::endl;
	std::cout << "Stack Size : " << stack_char.size() << std::endl;
	std::cout << "Stack pushing a,b,c" << std::endl;
	stack_char.push('a');
	stack_char.push('b');
	stack_char.push('c');
	std::cout << "Stack Size : " << stack_char.size() << std::endl;
	std::cout << "Stack Peek : " << stack_char.peek() << std::endl;
	std::cout << "Stack Size : " << stack_char.size() << std::endl;
	std::cout << "Stack poping : " << stack_char.pop() << std::endl;
	std::cout << "Stack Size : " << stack_char.size() << std::endl;
	std::cout << "Stack Peek : " << stack_char.peek() << std::endl;
	std::cout << "Stack Size : " << stack_char.size() << std::endl;
	std::cout << "Deleting Stack : " << std::endl;
	stack_char.clear_stack();
	std::cout << "Stack Size : " << stack_char.size() << std::endl;

	return EXIT_SUCCESS;
}