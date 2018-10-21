/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include "avltree.h"

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node *temp;
	temp = t->right;
	t->right = temp->left;
	temp->left = t;

	t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
	t = temp;
	t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node *temp;
	temp = t->left;
	t->left = temp->right;
	temp->right = t;

	t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
	t = temp;
	t->height = max(heightOrNeg1(t->left), heightOrNeg1(t->right)) + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
	rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if(subtree == NULL){
		return;
	}

	calculate_height(subtree);
	int tree_balance = balance(subtree);
	if( abs(tree_balance) <= 1){
		return;
	}

	if(tree_balance < 0){
		if(balance(subtree->right) > 0){
			rotateRightLeft(subtree);
		}
		
		else{
			rotateLeft(subtree);
		}
	}

	else{
		if(balance(subtree->left) < 0){
			rotateLeftRight(subtree);
		}
		else{
			rotateRight(subtree);
		}
	}
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if(subtree == NULL){
		subtree = new Node(key, value);
	}

	else if(subtree->key == key){
		subtree->value = key;
	}

	else if(key < subtree->key){
		insert(subtree->left, key, value);
		rebalance(subtree);
	}

	else{
		insert(subtree->right, key, value);
		rebalance(subtree);
	}

}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
		rebalance(subtree);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
		rebalance(subtree);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
			subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node *& iop = right_most_node(subtree->left);
			swap(iop, subtree);
			delete iop;
			iop = NULL;
        } else {
            /* one-child remove */
            // your code here
            Node *new_child = subtree->left != NULL ? subtree->left : subtree->right;
			delete subtree;
			subtree = new_child;
        }
        // your code here
        rebalance(subtree);
    }
}

template <class K, class V>
int AVLTree<K, V>::balance(Node*& subtree){
	if(subtree == NULL){
		return 0;
	}

	int left_height = heightOrNeg1(subtree->left);
	int right_height = heightOrNeg1(subtree->right);
	return left_height - right_height;
}

template <class K, class V>
void AVLTree<K, V>::calculate_height(Node*& subtree){
if(subtree->right == NULL && subtree->left == NULL){
	subtree->height = 0;
}

else if(subtree->left == NULL){
	subtree->height = subtree->right->height + 1;
}

else if(subtree->right == NULL){
	subtree->height = subtree->left->height + 1;
}

else{
	subtree->height = max(subtree->right->height, subtree->left->height) + 1;
}
}

template<class K, class V>
typename AVLTree<K, V>::Node*& AVLTree<K,V>::right_most_node(Node*& subtree){
	return subtree->right == NULL ? subtree : right_most_node(subtree->right);
}
