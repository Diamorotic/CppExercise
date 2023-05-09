#include "Node.h"

Node::Node(int newVal) : val(newVal) {}
Node::Node(int newVal, Node *newLeft, Node *newRight) : val(newVal), left(newLeft), right(newRight) {}

Node* Node::L() const {
	return left;
}
Node* Node::R() const {
	return right;
}
int Node::V() const {
	return val;
}
bool Node::wasVisited() const {
	return visited;
}

void Node::sL(Node *newLeft) {
	left = newLeft;
}
void Node::sR(Node *newRight) {
	right = newRight;
}
void Node::setV(int newVal) {
	val = newVal;
}
void Node::visit() {
	visited = true;
}
void Node::visit(std::unordered_set<Node*> &visitedNodes) {
	visit();
	visitedNodes.insert(this);
}
void Node::unvisit() {
	visited = false;
}
void Node::unvisit(std::unordered_set<Node*> &visitedNodes) {
	for(auto x : visitedNodes) {
		x->unvisit();
	}
}
void Node::unvisit(std::unordered_map<Node*, Node*> &visitedNodes) {
	for(auto x : visitedNodes) {
		x.first->unvisit();
	}
}

Node* Node::deepCopy() {
	std::unordered_map<Node*, Node*> orgAndNew;

	Node *res = deepCopyHelper(orgAndNew, this);
	unvisit(orgAndNew);
	return res;
}
Node* Node::deepCopyHelper(std::unordered_map<Node*, Node*> &orgAndNew, Node *org) {
	if(org == nullptr)
		return nullptr;
	
	if(orgAndNew.count(org) != 0) 
		return orgAndNew[org];
	
	org->visit();
	Node *res = new Node(org->V());
	orgAndNew[org] = res;
	Node *newL = deepCopyHelper(orgAndNew, org->L());
	Node *newR = deepCopyHelper(orgAndNew, org->R());
	res->sL(newL);
	res->sR(newR);
	return res;
}
