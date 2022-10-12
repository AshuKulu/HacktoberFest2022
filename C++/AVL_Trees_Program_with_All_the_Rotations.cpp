#include <bits/stdc++.h>
using namespace std;
int maximumHeight(int, int); // function prototype is used for giving the definition of the function.
struct node
{
    node *left; // for the left Sub tree
    int data;
    node *right; // for the right Sub tree.
    int height;  // for finding the balance Factor of the given tree and tell that the tree is AVL or not.
};

int getHeight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height; // for finding the height of the tree.
}

// For creating the node Function. To avoid the repeatation of the code.
node *createNode(int key)
{
    node *ptr = new node;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->data = key;
    ptr->height = 1;
    return ptr;
}

// Important Function NO 1
int getBalanceFactor(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right); // for returning the Balance Factor of the given tree. and checking the whether the given tree is the AVL Tree or not.
}
// Important Function NO 2 How to do the right rotation.
node *rightRotation(node *y)
{

    cout << "    y       " << endl;
    cout << "  // \\       " << endl;
    cout << "  x   T3   We have to Rotate this Tree to the right in right Rotation." << endl;
    cout << "// \\         " << endl;
    cout << "T1  T2         " << endl;
    node *x = y->left;   // Intializing the X Variable to the left Side of the Y as in the given structure.
    node *T2 = x->right; // Intializiing the T2 Variable to the right side of the X Node as in the given Structure.

    // Doing the right Rotation With Respect to the Y Node we get:-

    x->right = y; // As in the given Diagram
    y->left = T2; // As in the Given Diagram.

    // As the rotation is done we have to update the height Also.
    // As the Height of the Y will change then we have
    y->height = maximumHeight(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = maximumHeight(getHeight(x->left), getHeight(x->right)) + 1;

    return x; // the root node is x in case of the right rotation that is done.
}

// Important Function NO 3 How to do the left Rotation
node *LeftRotation(node *x)
{

    cout << "    x       " << endl;
    cout << "  // \\       " << endl;
    cout << "  T1  y   We have to Rotate this Tree to the left in Left Rotation." << endl;
    cout << "    // \\   " << endl;
    cout << "    T2  T3  " << endl;
    node *y = x->right; // Intializing the y variable to the right Side of the X variable.
    node *T2 = y->left; // Intializing the T2 Variable to the left Side of the Y variable as given in the Structure Above.
    // Doing the right Rotation With Respect to the X Node we get:-

    y->left = x;   // As in the given Diagram
    x->right = T2; // As in the Given Diagram.

    // As the rotation is done we have to update the height Also.
    // As the Height of the x will change then we have
    y->height = maximumHeight(getHeight(y->right), getHeight(y->left)) + 1; // for finding the height of the tree
    x->height = maximumHeight(getHeight(x->left), getHeight(x->right)) + 1;

    return y; // because the root node is y in case of the left rotation.
}

// Important function No 4 :- To do the insertion in the AVL Tree as same doing the insertion in the binary Search Tree.

int maximumHeight(int a, int b)
{
    return a > b ? a : b; // ternary Operator is used for finding the value of the a or b.
}
node *InsertNode(node *root, int value)
{
    if (root == NULL)
    {
        return (createNode(value));
    }

    if (value < root->data)
    {
        root->left = InsertNode(root->left, value); // we are using the recursion algorithm in this case for doing the traversal in the binary tree.
    }
    else if (value > root->data)
    {
        root->right = InsertNode(root->right, value);
    }
    root->height = maximumHeight(getHeight(root->left), getHeight(root->right)) + 1; // for doing the increament of the given height.

    int balanceFactor = getBalanceFactor(root); // for getting the balance factor.

    // Cases Arise we have
    // Left Left Case
    if (balanceFactor > 1 && value < root->left->data)
    {
        return rightRotation(root);
    }

    // Right Right Case
    if (balanceFactor < -1 && value > root->right->data)
    {
        return LeftRotation(root);
    }

    // Left Right Case
    if (balanceFactor > 1 && value > root->left->data)
    {
        root->left = LeftRotation(root->left); // doing the left rotation with respect to the first left child of the given unbalanced Node.
        return rightRotation(root);            // doing the right rotation with respect to the unbalanced Node.
    }
    // Right Left Case.

    if (balanceFactor < -1 && value < root->right->data)
    {
        root->right = rightRotation(root->right); // doing the right rotation with respect to the first right child of the unbalanced node.
        return LeftRotation(root);                // Then doing the left rotation with respect to the unbalanced node which is found.
    }
    // this code will be running for the leaf node first then  the other nodes will come in the play.
    return root;
}

// Getting  the PreOrder Traversal of the root Function
void preOrderTraversal(node *root)
{
    if (root != NULL)
    {
        cout << root->data;
        if (root == NULL)
        {
            cout << " ";
        }
        else
        {
            cout << ",";
        }
        preOrderTraversal(root->left); // doing the recursion operation for the given binary tree.
        preOrderTraversal(root->right);
    }
}

int main()
{
    // The Binary Search Tree is Formed.
    node *root = NULL;
    root = InsertNode(root, 45);
    root = InsertNode(root, 1);
    root = InsertNode(root, 2);
    root = InsertNode(root, 60);
    root = InsertNode(root, 75);
    root = InsertNode(root, 34);
    preOrderTraversal(root);

    return 0;
}