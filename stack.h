/*
 * stack.h
 *
 *  Created on: 14 mar. 2018
 *      Author: Miguel Bautista Pérez
 */

#ifndef NODESTACK_H_
#define NODESTACK_H_

class NodeStack {
public:
	int data;
	NodeStack *next;

	NodeStack(int d, NodeStack *n);
};

#endif // NODESTACK_H_

/////////////////////////////

#ifndef STACK_H_
#define STACK_H_

#define ERR_NUM -999;
typedef NodeStack *pNode;

class Stack {
private:
	pNode init;

public:
	Stack();
	~Stack();

	bool empty();
	void push(int d);
	int top();
	void pop();
	int pull();
	int size();
	void print();
};

#endif // STACK_H_
