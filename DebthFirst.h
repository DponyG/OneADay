#ifndef DebthFirst_h
#define DebthFirst_h

#include<memory>
#include<list>
#include<vector>
#include<iostream>


class Graph {

private:
	int _v; //int V; //VERTICE COUNT
	std::list<int> *adj; //pointer to an adjanceny list
	


public:

	Graph(int v);

	// A recursive function used by dfs
	void DFSUtil(int v, std::vector<bool> &visited);

	//function to add an edge to graph
	void addEdge(int v, int w);

	//DFS traversal of the vertices
	//reachable from v
	void DFS();


};

Graph::Graph(int V) {
	_v = V;
	adj = new std::list<int>[_v];
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w); // add w to v list.
}

void Graph::DFSUtil(int v, std::vector<bool> &visited) {
	visited[v] = true;
	std::cout << v << " ";

	std::list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i, visited);
}

void Graph::DFS() {
	std::vector<bool> v;

	for (int i = 0; i < _v; i++) {
		v.push_back(false);
	}

	for (int i = 0; i < _v; i++) {
		if (v[i] == false) {
			DFSUtil(i, v);
		}
	}
}



#endif // !1

