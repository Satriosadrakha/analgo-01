
// Pakai STL
#include <bits/stdc++.h> 
using namespace std; 

// Fungsi untuk menambah sisi di undirected graph
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

// Fungsi untuk print adjacency list 
void printGraph(vector<int> adj[], int V) 
{ 
	cout << "\nAdjacency list:\n";
	for (int v = 1; v < V; ++v) 
	{ 
		cout << v; 
		for (auto x : adj[v]) 
		cout << "-> " << x; 
		printf("\n"); 
	} 
} 

// Fungsi main 
int main() 
{ 
	int V = 9; 
	vector<int> adj[V]; 
	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
// 	addEdge(adj, 2, 1); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 2, 4); 
	addEdge(adj, 2, 5); 
// 	addEdge(adj, 3, 1); 
// 	addEdge(adj, 3, 2); 
	addEdge(adj, 3, 5); 
	addEdge(adj, 3, 7); 
	addEdge(adj, 3, 8); 
// 	addEdge(adj, 4, 2); 
	addEdge(adj, 4, 5); 
// 	addEdge(adj, 5, 2); 
// 	addEdge(adj, 5, 3); 
// 	addEdge(adj, 5, 4); 
	addEdge(adj, 5, 6); 
// 	addEdge(adj, 6, 5); 
// 	addEdge(adj, 7, 3); 
	addEdge(adj, 7, 8); 
// 	addEdge(adj, 8, 3); 
// 	addEdge(adj, 8, 7); 
	printGraph(adj, V);
	return 0; 
} 

