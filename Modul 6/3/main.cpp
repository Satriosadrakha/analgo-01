// BFS(int s)

#include<iostream> 
#include <list> 

using namespace std; 

// Kelas ini merepresentasikan graph
class Graph 
{ 
	int V; 
	
	// Pointer ke array mengandung adjacency lists 
	list<int> *adj; 
public: 
	Graph(int V); 
	// Fungsi menambah sisi pada graph 
	void addEdge(int v, int w); 

	// Prints BFS traversal 
	void BFS(int s); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
} 

void Graph::BFS(int s) 
{ 
	// tandai semua vertex sebagai belum dikunjungi 
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 

	// Buat queue untuk BFS 
	list<int> queue; 

	// Tandai node sebagai visited dan lakukan enqueue 
	visited[s] = true; 
	queue.push_back(s); 

	// 'i' akan digunakan untuk mendapat semua adjacent vertices dari vertex 
	list<int>::iterator i; 

	while(!queue.empty()) 
	{ 
		// Dequeue sebuah vertex dari queue dan print 
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 

		// Get semua vertex yang bersebelahan dari dequeued 
		// vertex s. Jika sebelahnya belum dikunjungi,
		// maka tandai dan lakukan enqueue 
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				queue.push_back(*i); 
			} 
		} 
	} 
} 

// Kelas Main 
int main() 
{ 
	// Membuat graph dari diagram 
	Graph g(9);
	g.addEdge(1, 2); 
	g.addEdge(1, 3); 
// 	g.addEdge(2, 1); 
	g.addEdge(2, 3); 
	g.addEdge(2, 4); 
	g.addEdge(2, 5); 
// 	g.addEdge(3, 1); 
// 	g.addEdge(3, 2); 
	g.addEdge(3, 5); 
	g.addEdge(3, 7); 
	g.addEdge(3, 8); 
// 	g.addEdge(4, 2); 
	g.addEdge(4, 5); 
// 	g.addEdge(5, 2); 
// 	g.addEdge(5, 3); 
// 	g.addEdge(5, 4); 
	g.addEdge(5, 6); 
// 	g.addEdge(6, 5); 
// 	g.addEdge(7, 3); 
	g.addEdge(7, 8); 
// 	g.addEdge(8, 3); 
// 	g.addEdge(8, 7);

	cout << "Traversal dari Breadth First Search:"
		<< "(Dimulai dari vertex 1) \n"; 
	g.BFS(1); 

	return 0; 
} 

// Kompleksitas waktu dapat dinyatakan sebagai O(|V|+|E|),
// karena setiap simpul dan setiap sisi akan dieksplorasi dalam kasus terburuk.
// |V| adalah jumlah simpul dan |E| adalah jumlah sisi dalam grafik.
