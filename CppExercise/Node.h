#pragma once
class Node {
	Node *left, *right;
	int val;
	bool visited = false;
public:
	Node() : val(0), left(nullptr), right(nullptr) {}
	Node(int newVal) : val(newVal), left(nullptr), right(nullptr) {}
	Node(int newVal, Node *newLeft, Node *newRight) : val(newVal), left(newLeft), right(newRight) {}
	Node *L() const {
		return left;
	}
	Node *R() const {
		return right;
	}
	int V() const {
		return val;
	}
	bool visited() const {
		return visited;
	}
	void sL(Node *newLeft) {
		left = newLeft;
	}
	void sR(Node *newRight) {
		right = newRight;
	}
	void setV(int newVal) {
		val = newVal;
	}
	void visit() {
		visited = true;
	}
	Node *deepCopy() {
		Node *newL, *newR, *res;
		visit();
		if(left != nullptr) {
			if(left->visited) {
				newL = 
			}
		}
        //return new Node(val, left != nullptr ? left->deepCopy() : nullptr, right != nullptr ? right->deepCopy() : nullptr);

	}
};
