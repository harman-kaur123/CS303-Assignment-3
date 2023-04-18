#include <iostream>
#include "ExpressionManager.h"
#include "queue.h"

int main() {

	//different checks of the two parts of the assignment 

	ExpressionManager em;
	em.readInfix();
	cout << em.checkIfValid() << endl;
	em.convertToPostfix(); 
	cout << endl;

	Queue numbers;
	numbers.pushBack(2);

	numbers.pushBack(4);

	numbers.pushBack(6);

	numbers.getSize();

	numbers.getTop();

	cout << numbers.getTop() << endl;

	numbers.pop();

	cout << numbers.getTop() << endl;

	cout << numbers.getSize();

}