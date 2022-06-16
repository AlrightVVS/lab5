#include <iostream>
using namespace std;
class Node {
public:
	char info;
	Node* left;
	Node* right;
	Node* parent;
	Node()
	{
		info = '\0'; left = nullptr; right =
			nullptr; parent = nullptr;
	}
}; struct Tree {
	Node* root;
	void Add(Node* r, char i, bool t)
	{
		if (r->info == '\0')
		{
			r->info = i;
		}
		else
		{
			if (t == 0)
			{
				r->left = new Node; r->left->info
					= i; r->left->parent = r;
			}
			else
			{
				r->right = new Node; r->right -
> info = i; r->right->parent = r;
			}
		}
	}
	char LeftMost(Node* r)
	{
		return r->left->info;
	}
	char RightSibling(Node* r)
	{
	}

	return r->parent->right->info;
}
char Parent(Node* r)
{
	return r->parent->info;
}
char ROOT(Node* r)
{
	if (r->parent != nullptr)
	{
		r = r->parent;
		ROOT(r);
	}
	else
	{
		return r->info;
	}
}
char LABEL(Node* r)
{
	return r->info;
}
void PREORDER(Node* r)
{
	if (r == NULL) return;
	cout << r->info;
	PREORDER(r->left);
	PREORDER(r->right);
}
void POSTORDER(Node* r)
{
	if (r == NULL)
		return;
	POSTORDER(r->left); POSTORDER(r->right);
	cout << r->info;
}
void INORDER(Node* r)
{
	if (r == NULL) return;
	INORDER(r->left); cout << r->info;
	INORDER(r->right);
}
};
int main() {
	Tree exp{};
	exp.root = new Node();
	exp.Add(exp.root, '-', 0);
	exp.Add(exp.root, '-', 0);
	exp.Add(exp.root, '-', 0);
	exp.Add(exp.root, '-', 1);
	exp.Add(exp.root->left, 'a', 0);
	exp.Add(exp.root->left, '/', 1);
	exp.Add(exp.root->right, 'b', 0);


exp.Add(exp.root->right, '*', 1);
exp.Add(exp.root->left->right, 'c', 0);
exp.Add(exp.root->left->right, '2', 1);
exp.Add(exp.root->right->right, 'c', 0);
exp.Add(exp.root->right->right, 'a', 1); cout << "Preorder:\t";
exp.PREORDER(exp.root); cout << endl; cout << "Postorder:\t";
exp.POSTORDER(exp.root); cout << endl; cout <<
"Inorder:\t"; exp.INORDER(exp.root); cout << endl;
cout << "Root of tree is: '" << exp.ROOT(exp.root->right ->
	left) << "'" << endl;
cout << "Example of using RIGHT_SIBLING for exp.root-
> right > left: " << exp.RightSibling(exp.root->right->left) << endl;
cout << "Example of using LEFTMOST for exp.root->left: " <<
exp.LeftMost(exp.root->left) << endl;
cout << "Example of using LABEL for exp.root->left->right: "
<< exp.LABEL(exp.root->left->right) << endl;
}