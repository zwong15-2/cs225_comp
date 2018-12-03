/**
 * @file NimLearner.cpp
 * CS 225: Data Structures
 */

#include "NimLearner.h"
#include <ctime>


/**
 * Constructor to create a game of Nim with `startingTokens` starting tokens.
 *
 * This function creates a graph, `g_` representing all of the states of a
 * game of Nim with vertex labels "p#-X", where:
 * - # is the current player's turn; p1 for Player 1, p2 for Player2
 * - X is the tokens remaining at the start of a player's turn
 *
 * For example:
 *   "p1-4" is Player 1's turn with four (4) tokens remaining
 *   "p2-8" is Player 2's turn with eight (8) tokens remaining
 *
 * All legal moves between states are created as edges with initial weights
 * of 0.
 *
 * @param startingTokens The number of starting tokens in the game of Nim.
 */
NimLearner::NimLearner(unsigned startingTokens) : g_(true, true) {
    /* Your code goes here! */
	for(int i = startingTokens; i >= 0; i--){
		string p1_ = "p1-" + std::to_string(i);
		string p2_ = "p2-" + std::to_string(i);
		g_.insertVertex(p1_);
		g_.insertVertex(p2_);
	}

	for(int i = startingTokens; i >= 2; i--){
		string p1_1 = "p1-" + std::to_string(i);
		string p2_1 = "p2-" + std::to_string(i);
		string p1_2 = "p1-" + std::to_string(i-1);
		string p2_2 = "p2-" + std::to_string(i-1);
		string p1_3 = "p1-" + std::to_string(i-2);
		string p2_3 = "p2-" + std::to_string(i-2);
		Vertex v1_1 = p1_1;
		Vertex v2_1 = p2_1;
		g_.insertEdge(v1_1, p2_2);
		g_.setEdgeWeight(v1_1, p2_2, 0);
		g_.insertEdge(v1_1, p2_3);
		g_.setEdgeWeight(v1_1, p2_3, 0);
		g_.insertEdge(v2_1, p1_2);
		g_.setEdgeWeight(v2_1, p1_2, 0);
		g_.insertEdge(v2_1, p1_3);
		g_.setEdgeWeight(v2_1, p1_3, 0);
	}

	g_.insertEdge(("p1-1"), ("p2-0"));
	g_.setEdgeWeight(("p1-1"), ("p2-0"), 0);
	g_.insertEdge(("p2-1"), ("p1-0"));
	g_.setEdgeWeight(("p2-1"), ("p1-0"), 0);
	startingVertex_ = ("p1-" + std::to_string(startingTokens));
}

/**
 * Plays a random game of Nim, returning the path through the state graph
 * as a vector of `Edge` classes.  The `origin` of the first `Edge` must be
 * the vertex with the label "p1-#", where # is the number of starting
 * tokens.  (For example, in a 10 token game, result[0].origin must be the
 * vertex "p1-10".)
 *
 * @returns A random path through the state space graph.
 */
std::vector<Edge> NimLearner::playRandomGame() const {
  	vector<Edge> path;
 	/* Your code goes here! */
	Vertex start = startingVertex_;

	while(g_.getAdjacent(start).size() != 0){
		vector<Vertex> adjs = g_.getAdjacent(start);
		int step = rand() % adjs.size();
		Vertex next = adjs[step];
		path.push_back(g_.getEdge(start, next));
		start = next;
	}
  
  	return path;
}

/*
 * Updates the edge weights on the graph based on a path through the state
 * tree.
 *
 * If the `path` has Player 1 winning (eg: the last vertex in the path goes
 * to Player 2 with no tokens remaining, or "p2-0", meaning that Player 1
 * took the last token), then all choices made by Player 1 (edges where
 * Player 1 is the source vertex) are rewarded by increasing the edge weight
 * by 1 and all choices made by Player 2 are punished by changing the edge
 * weight by -1.
 *
 * Likewise, if the `path` has Player 2 winning, Player 2 choices are
 * rewarded and Player 1 choices are punished.
 *
 * @param path A path through the a game of Nim to learn.
 */
void NimLearner::updateEdgeWeights(const std::vector<Edge> & path) {
 /* Your code goes here! */
	int idx = path.size() - 1;
	int x = 1;

	while(idx >= 0){
		Edge edge = path[idx];
		int old_weight = g_.getEdgeWeight(edge.source, edge.dest);
		g_.setEdgeWeight(edge.source, edge.dest, old_weight + x);
		x *= -1;
		idx--;
	}
}

/**
 * Label the edges as "WIN" or "LOSE" based on a threshold.
 */
void NimLearner::labelEdgesFromThreshold(int threshold) {
  for (const Vertex & v : g_.getVertices()) {
    for (const Vertex & w : g_.getAdjacent(v)) {
      int weight = g_.getEdgeWeight(v, w);

      // Label all edges with positve weights as "WINPATH"
      if (weight > threshold)           { g_.setEdgeLabel(v, w, "WIN"); }
      else if (weight < -1 * threshold) { g_.setEdgeLabel(v, w, "LOSE"); }
    }
  }
}

/**
 * Returns a constant reference to the state space graph.
 *
 * @returns A constant reference to the state space graph.
 */
const Graph & NimLearner::getGraph() const {
  return g_;
}
