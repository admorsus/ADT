/*
 * stack.cpp
 *
 *  Created on: 14 mar. 2018
 *      Author: Miguel Bautista Pérez
 */

#include "stack.h"
#include <iostream>

using namespace std;

NodeStack::NodeStack(int d, NodeStack *n) {
	data = d;
	next = n;
}

Stack::Stack() {
	init = NULL;
}

Stack::~Stack() {
	pNode aux;

	while (init != NULL) {
		aux = init;
		init = init->next;
		delete aux;
	}

}

bool Stack::empty() {
	return init == NULL;
}

void Stack::push(int d) {
	pNode n = new NodeStack(d, init);
	init = n;
}

int Stack::top() {
	int val = ERR_NUM
	;
	if (init == NULL)
		cout << "error: empty stack" << endl;
	else
		val = init->data;
	return val;
}

void Stack::pop() {
	if (init == NULL) {
		cout << "error: empty stack" << endl;
	} else {
		pNode aux = init;
		init = aux->next;
		delete aux;
	}
}

int Stack::pull() {
	int val = ERR_NUM
	;
	if (init == NULL) {
		cout << "error: empty stack" << endl;
	} else {
		pNode aux = init;
		init = aux->next;
		val = aux->data;
		delete aux;
	}
	return val;
}

int Stack::size() {
	int size = 0;
	pNode aux = init;
	while (aux != NULL) {
		aux = aux->next;
		size++;
	}
	return size;
}

void Stack::print() {
	pNode aux = init;
	while (aux != NULL) {
		cout << aux->data << ' ';
		aux = aux->next;
	}
}
