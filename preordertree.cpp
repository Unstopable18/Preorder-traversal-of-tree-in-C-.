#include <iostream>
using namespace std;
struct Node 
{
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};
void printPreorder(struct Node* node)
{
	if (node == NULL)
	return;
    cout<<": "<<node->data << " :";
	printPreorder(node->left);
	printPreorder(node->right);
}
int main()
{
	int rt,l,r,ll,lr,rl,rr;
    cout<<"\n*************************************\n";
    cout<<"Enter Root =  ";
    cin>>rt;
    cout<<"Enter Left =  ";
    cin>>l;
    cout<<"Enter Right =  ";
    cin>>r;
    cout<<"Enter Left Left =  ";
    cin>>ll;
    cout<<"Enter Left Right =  ";
    cin>>lr;
    cout<<"Enter Right Left =  ";
    cin>>rl;
    cout<<"Enter Right Right =  ";
    cin>>rr;
    struct Node* root = new Node(rt);
	root->left = new Node(l);
	root->right = new Node(r);
	root->left->left = new Node(ll);
	root->left->right = new Node(lr);
    root->right->left = new Node(rl);
    root->right->right = new Node(rr);
    cout<<"*************************************\n";
	cout << "    *****Preorder Traversal*****\n{";
	printPreorder(root);
    cout<<"}\n*************************************\n";
	return 0;
}
