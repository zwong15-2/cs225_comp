/* Your code here! */
#include "dsets.h"
#include <stdlib.h>

void DisjointSets::addelements(int num){
	
	for(int i = 0; i < num; i++){
		sets.push_back(-1);
	}

	return;
}

int DisjointSets::find(int elem){

	if(sets[elem] < 0){
		return elem;
	}

	return sets[elem] = find(sets[elem]);
}

void DisjointSets::setunion(int a, int b){

	int root_1 = find(a);
	int root_2 = find(b);

	if(root_1 == root_2){
		return;
	}

	int new_size = sets[root_1] + sets[root_2];

	if(sets[root_1] <= sets[root_2]){
		sets[root_2] = root_1;
		sets[root_1] = new_size;
	}

	else{
		sets[root_1] = root_2;
		sets[root_2] = new_size;
	}

	return;
}

int DisjointSets::size(int elem){
	return abs(sets[find(elem)]);

}
