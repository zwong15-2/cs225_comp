#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>
#include <unordered_map>
#include <iterator>
#include <list>
#include <algorithm>

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::size() const {
  // TODO: Part 2
  unsigned int count = 0;
  
  for(auto it = vertexMap.begin(); it != vertexMap.end(); ++it){
	if(it->first != ""){
		count++;
	}
  }
  return count;

}


/**
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
  // TODO: Part 2
  unsigned int count;
  std::string v1_key;
  for(std::pair<std::string, V &> find_key : vertexMap){
	if(find_key.second == v){
		v1_key = find_key.first;
	}
  }
  std::list<std::reference_wrapper<E>> incident_edges = incidentEdges(v1_key);
  count = incident_edges.size();
  return count;
}


/**
* Inserts a Vertex into the Graph by adding it to the Vertex map and adjacency list
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
  // TODO: Part 2
  V & v = *(new V(key));
  std::pair<std::string, V &> new_vertex(key, v);
  vertexMap.insert(new_vertex);
  std::list<edgeListIter> new_edgeListIter;
  std::pair<std::string, std::list<edgeListIter>> new_adjList(key, new_edgeListIter);
  adjList.insert(new_adjList);
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  V vertex = vertexMap.at(key);
  vertexMap.erase(key);
  std::list<edgeListIter> vertex_edgeIter = adjList.at(key);
  for(typename std::list<edgeListIter>::iterator it = vertex_edgeIter.begin(); it != vertex_edgeIter.end(); ++it){
	if((**it).get().source() == vertex || (**it).get().dest() == vertex){
		edgeList.erase(*it);
	}
  }
  adjList.erase(key);
}


/**
* Inserts an Edge into the adjacency list
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));
  std::string v1_key = v1.key();
  std::string v2_key = v2.key();
  edgeList.push_front(e);
  typename std::list<E_byRef>::iterator it = edgeList.begin();
  std::list<edgeListIter> vertex_1 = adjList.at(v1_key);
  std::list<edgeListIter> vertex_2 = adjList.at(v2_key);
  adjList.at(v1_key).push_front(it);
  adjList.at(v2_key).push_front(it);
  return e;
}


/**
* Removes an Edge from the Graph
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {  
  // TODO: Part 2
  std::list<edgeListIter> vertex1_listIter = adjList.at(key1);
  std::list<edgeListIter> vertex2_listIter = adjList.at(key2);
  V vertex_1 = vertexMap[key1];
  V vertex_2 = vertexMap[key2];
  for(typename std::list<edgeListIter>::iterator it = vertex1_listIter.begin(); it != vertex1_listIter.end(); ++it){
	if((**it).get().source() == vertex_1 && (**it).get().dest() == vertex_2){
		removeEdge(*it);
		vertex1_listIter.erase(it);
	}
  }
  for(typename std::list<edgeListIter>::iterator it2 = vertex2_listIter.begin(); it2 != vertex2_listIter.end(); ++it2){
	if((**it2).get().source() == vertex_1 && (**it2).get().dest() == vertex_2){
	    removeEdge(*it2);
		vertex2_listIter.erase(it2);
	}
  }
}


/**
* Removes an Edge from the adjacency list at the location of the given iterator
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  edgeList.erase(*it);
}


/**
* @param key The key of an arbitrary Vertex "v"
* @return The list edges (by reference) that are adjacent to "v"
*/
template <class V, class E>  
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  // TODO: Part 2
  std::list<std::reference_wrapper<E>> edges;
  
  V vertex = vertexMap.at(key);

  std::list<edgeListIter> vertex_listIter = adjList.at(key);

  for(typename std::list<edgeListIter>::iterator it = vertex_listIter.begin(); it != vertex_listIter.end(); ++it){
		if((**it).get().source() == vertex || (**it).get().dest() == vertex){
			edges.push_back((**it).get());
		}
  }
  
  return edges;
}


/**
* Return whether the two vertices are adjacent to one another
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
  // TODO: Part 2
  V vertex_1 = vertexMap.at(key1);
  V vertex_2 = vertexMap.at(key2);
  V vertex_fin("");
  std::list<edgeListIter> vertex1_edgeIter = adjList.at(key1);
  std::list<edgeListIter> vertex2_edgeIter = adjList.at(key2);
  std::list<edgeListIter> final_edgeIter;
  if(vertex1_edgeIter.size() < vertex2_edgeIter.size()){
		final_edgeIter = vertex1_edgeIter;
		vertex_fin = vertex_1;
  }
  else{
		final_edgeIter = vertex2_edgeIter;
		vertex_fin = vertex_2;
  }
  for(typename std::list<edgeListIter>::iterator it = final_edgeIter.begin(); it != final_edgeIter.end(); ++it){
		if((**it).get().directed() == true){
			if((**it).get().dest() == vertex_fin){
				return true;
			}
			else{
				return false;
			}
		}
		if((**it).get().directed() == false){
				if((**it).get().source() == vertex_1 || (**it).get().source() == vertex_2 || (**it).get().dest() == vertex_1 || (**it).get().dest() == vertex_2){
				return true;
		}		}
  }
  
  return false;
}
