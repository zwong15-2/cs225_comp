#include "abstractsyntaxtree.h"
#include <string>
using namespace std;

/**
 * Calculates the value from an AST (Abstract Syntax Tree). To parse numbers from strings, please use std::stod
 * @return A double representing the calculated value from the expression transformed into an AST
 */
double AbstractSyntaxTree::eval() const {
    // @TODO Your code goes here...
    return evaluation(root);
}

double AbstractSyntaxTree::evaluation(Node *root) const{


if(!root){
	return 0;
}

if(!root->left &&  !root->right){
	string element = root->elem;
	double number = stod(element);
	return number;
}

double left_value = evaluation(root->left);
double right_value = evaluation(root->right);

if(root->elem == "+"){
	return (left_value + right_value);
}

if(root->elem == "-"){
	return (left_value - right_value);
}

if(root->elem == "*"){
	return (left_value * right_value);
}

return (left_value/right_value);
}
