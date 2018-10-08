/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "./TreeTraversals/InorderTraversal.h"
#include "binarytree.h"
#include <iostream>
#include <string>
#include <stack>
#include <iterator>

using namespace std;

/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    cout << endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
    template <typename T>
void BinaryTree<T>::mirror()
{
    //your code here
    mirror(root);

}


/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    // your code here
    return isOrdered2(root);
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    // your code here
    return isOrdered(root);
}


/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
 */
template <typename T>
void BinaryTree<T>::getPaths(vector<vector<T> > &paths) const
{
    // your code here
    for(typename vector< BinaryTree<T>::Node *>::iterator traverse = paths.begin(); traverse != paths.end(); ++traverse){
	paths.insert(end(paths), begin(paths), end(paths));
	}
}


/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
    int total_sum = 0;
    return sumDistances(-1, root, total_sum);
}

template <typename T>
void BinaryTree<T>::mirror(Node *&subRoot){
	if(subRoot == NULL){
		return;
	}

	mirror(subRoot->left);
	mirror(subRoot->right);
	
	Node *temp_node = subRoot->left;
	subRoot->left = subRoot->right;
	subRoot->right = temp_node;
}

template <typename T>
int & BinaryTree<T>::sumDistances(int distance, const Node *subRoot, int &sum) const{
	distance++;
	sum += distance;

	if(subRoot->left != NULL){
		sum = sumDistances(distance, subRoot->left, sum);
	}
	if(subRoot->right != NULL){
		sum = sumDistances(distance, subRoot->right, sum);
	}

	return sum;
}

template <typename T>
T BinaryTree<T>::maximum_leftsubtree(const Node *subRoot) const{
	if(subRoot->left == NULL && subRoot->right == NULL){
		return (subRoot->elem);
	}

	else if(subRoot->right == NULL){
		return (max(subRoot->elem,maximum_leftsubtree(subRoot->left)));
	}

	else if(subRoot->left == NULL){
		return (max(subRoot->elem,maximum_leftsubtree(subRoot->right)));
	}

	else{
		return (max(subRoot->elem, max(maximum_leftsubtree(subRoot->left), maximum_leftsubtree(subRoot->right))));
	}
}

template <typename T>
T BinaryTree<T>::minimum_rightsubtree(const Node *subRoot) const{
	if(subRoot->right == NULL && subRoot->left == NULL){
		return subRoot->elem;
	}

	else if(subRoot->right == NULL){
		return (min(subRoot->elem, minimum_rightsubtree(subRoot->left)));
	}

	else if(subRoot->left == NULL){
		return min(subRoot->elem, minimum_rightsubtree(subRoot->right));
	}

	else{
		return min(subRoot->elem, min(minimum_rightsubtree(subRoot->left), minimum_rightsubtree(subRoot->left)));
	}
}

template <typename T>
bool BinaryTree<T>::isOrdered(const Node *subRoot) const{
	bool inorder = true;

	if(subRoot == NULL){
		return true;
	}

	if(subRoot->left != NULL){
		if(subRoot->elem < maximum_leftsubtree(subRoot->left)){
			inorder = false;
		}
	}
	
	if(subRoot->right != NULL){
		if(subRoot->elem > minimum_rightsubtree(subRoot->right)){
			inorder = false;
		}
	}
	return (inorder && isOrdered(subRoot->left) && isOrdered(subRoot->right));
}

template <typename T>
bool BinaryTree<T>::isOrdered2(const Node *subRoot) const{
	bool inorder = true;
	int count = size(root);
	
	for(int x = 0; x < count; x++){
		if(subRoot == NULL){
			return true;
		}

		if(subRoot->left != NULL){
			if(subRoot->elem < maximum_leftsubtree(subRoot->left)){
				inorder = false;
			}
		}
	
		if(subRoot->right != NULL){
			if(subRoot->elem > minimum_rightsubtree(subRoot->right)){
				inorder = false;
			}
		}

		if(subRoot == NULL){
			return true;
		}
	}
	return inorder;
}

template <typename T>
void BinaryTree<T>::paths(vector <const BinaryTree<T>::Node *> &paths, const Node *subRoot) const{

	paths.push_back(subRoot);

	if(subRoot->left == NULL && subRoot->right == NULL){
		return;
	}

	if(subRoot->left != NULL){
		paths(paths, subRoot->left);
	}

	if(subRoot->right != NULL){
		paths(paths, subRoot->right);
	}

	paths.pop_back();
	return;
}

template <typename T>
int BinaryTree<T>::size(Node *subRoot) const{

if(subRoot == NULL){
	return 0;
}

else{
	return (size(subRoot->left) + 1 + size(subRoot->right));
}
}
