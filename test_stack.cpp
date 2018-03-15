/*
 * test.cpp
 *
 *  Created on: 15 mar. 2018
 *      Author: Miguel Bautista Pérez
 */

#include <iostream>
#include "stack.h"

using namespace std;

int main() {
	Stack pila;

	pila.push(5);
	pila.push(2);
	pila.push(9);
	pila.push(1);

	pila.print();
	cout << '\n' << pila.pull() << endl;
	pila.print();
	cout << '\n' << pila.size() << endl;

	pila.~Stack();
	return 0;
}

