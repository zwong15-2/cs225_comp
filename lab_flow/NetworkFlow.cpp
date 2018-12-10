/**
 * @file NetworkFlow.cpp
 * CS 225: Data Structures
 */

#include <vector>
#include <algorithm>
#include <set>

#include "graph.h"
#include "edge.h"

#include "NetworkFlow.h"

int min(int a, int b) {
  if (a<b)
    return a;
  else return b;
}

NetworkFlow::NetworkFlow(Graph & startingGraph, Vertex source, Vertex sink) :
  g_(startingGraph), residual_(Graph(true,true)), flow_(Graph(true,true)), source_(source), sink_(sink) {

  // YOUR CODE HERE
  std::vector<Vertex> res_vertices = startingGraph.getVertices();
  std::vector<Vertex> flow_vertices = startingGraph.getVertices();

  int weight;
  int y = 0;
  int l = 0;

  for(size_t i = 0; i < res_vertices.size(); i++){
	if(residual_.vertexExists(res_vertices[i]) != true){
		residual_.insertVertex(res_vertices[i]);
	 }
	if(flow_.vertexExists(flow_vertices[i]) != true){
		flow_.insertVertex(flow_vertices[i]);
	}
  }

  while(residual_.vertexExists(res_vertices[y]) == true){
	for(size_t a = 0; a < res_vertices.size(); a++){
		if(startingGraph.edgeExists(res_vertices[y], res_vertices[a]) == true){
			weight = startingGraph.getEdgeWeight(res_vertices[y], res_vertices[a]);
			residual_.insertEdge(res_vertices[y], res_vertices[a]);
			residual_.setEdgeWeight(res_vertices[y], res_vertices[a], weight);
			residual_.insertEdge(res_vertices[a], res_vertices[y]);
			residual_.setEdgeWeight(res_vertices[a], res_vertices[y], 0);
		}
	}
	y++;
  }
  while(flow_.vertexExists(flow_vertices[l]) == true){
	for(size_t b = 0; b < flow_vertices.size(); b++){
		if(startingGraph.edgeExists(flow_vertices[l], flow_vertices[b]) == true){
			flow_.insertEdge(flow_vertices[l], flow_vertices[b]);
			flow_.setEdgeWeight(flow_vertices[l], flow_vertices[b], 0);
		}
	}
	l++;
  }
	 
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the helper function.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   * @@params: visited -- A set of vertices we have visited
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, 
  std::vector<Vertex> &path, std::set<Vertex> &visited) {

  if (visited.count(source) != 0)
    return false;
  visited.insert(source);

  if (source == sink) {
    return true;
  }

  vector<Vertex> adjs = residual_.getAdjacent(source);
  for(auto it = adjs.begin(); it != adjs.end(); it++) {
    if (visited.count(*it) == 0 && residual_.getEdgeWeight(source,*it) > 0) {
      path.push_back(*it);
      if(findAugmentingPath(*it,sink,path,visited))
        return true;
      else {
        path.pop_back();
      }
    }
  }

  return false;
}

  /**
   * findAugmentingPath - use DFS to find a path in the residual graph with leftover capacity.
   *  This version is the main function.  It initializes a set to keep track of visited vertices.
   *
   * @@params: source -- The starting (current) vertex
   * @@params: sink   -- The destination vertex
   * @@params: path   -- The vertices in the path
   */

bool NetworkFlow::findAugmentingPath(Vertex source, Vertex sink, std::vector<Vertex> &path) {
   std::set<Vertex> visited;
   path.clear();
   path.push_back(source);
   return findAugmentingPath(source,sink,path,visited);
}

  /**
   * pathCapacity - Determine the capacity of a path in the residual graph.
   *
   * @@params: path   -- The vertices in the path
   */

int NetworkFlow::pathCapacity(const std::vector<Vertex> & path) const {
  // YOUR CODE HERE
  int path_capacity;
  std::vector<int> path_edges;
  for(size_t i = 0; i < path.size()-1; i++){
	path_edges.push_back(residual_.getEdgeWeight(path[i], path[i+1]));
  }
  path_capacity = path_edges[0];
  for(size_t j = 1; j < path_edges.size(); j++){
	if(path_edges[j] < path_capacity){
		path_capacity = path_edges[j];
 	 }
  }
 
  return path_capacity;
}

  /**
   * calculuateFlow - Determine the capacity of a path in the residual graph.
   * Sets the member function `maxFlow_` to be the flow, and updates the
   * residual graph and flow graph according to the algorithm.
   *
   * @@outputs: The network flow graph.
   */

const Graph & NetworkFlow::calculateFlow() {
  // YOUR CODE HERE
  std::vector<Vertex> vertices_;
  int weight;
  int weight2;
  int path_flow = 0;
  while(findAugmentingPath(source_, sink_, vertices_)){
    path_flow = pathCapacity(vertices_);
    for(size_t i = 0; i != vertices_.size()-1; i++){
		weight = residual_.getEdgeWeight(vertices_[i], vertices_[i+1]);
		residual_.setEdgeWeight(vertices_[i], vertices_[i+1], weight - path_flow);
		residual_.setEdgeWeight(vertices_[i+1], vertices_[i], weight + path_flow);
	}
	for(size_t j = 0; j != vertices_.size()-1; j++){
		if(flow_.edgeExists(vertices_[j], vertices_[j+1])){
			weight2 = flow_.getEdgeWeight(vertices_[j], vertices_[j+1]);
			flow_.setEdgeWeight(vertices_[j], vertices_[j+1], weight2 + path_flow);
		}
	}
	maxFlow_ += path_flow;
  }
		 
  return flow_;
}

int NetworkFlow::getMaxFlow() const {
  return maxFlow_;
}

const Graph & NetworkFlow::getGraph() const {
  return g_;
}

const Graph & NetworkFlow::getFlowGraph() const {
  return flow_;
}

const Graph & NetworkFlow::getResidualGraph() const {
  return residual_;
}

