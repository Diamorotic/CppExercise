#pragma once
#include <unordered_map>
#include <unordered_set>

class Node {
	Node *left = nullptr;
	Node *right = nullptr;
	int val = 0;
	bool visited = false;

public:
	Node(int newVal);
	Node(int newVal, Node *newLeft, Node *newRight);

	Node* L() const;
	Node* R() const;
	int V() const;
	bool wasVisited() const;

	void sL(Node *newLeft);
	void sR(Node *newRight);
	void setV(int newVal);
	void visit();
	void visit(std::unordered_set<Node*> &visitedNodes);
	void unvisit();
	void unvisit(std::unordered_set<Node*> &visitedNodes);
	void unvisit(std::unordered_map<Node*, Node*> &visitedNodes);

	Node* deepCopy();
	static Node* deepCopyHelper(std::unordered_map<Node*, Node*> &orgAndNew, Node *org);
};
