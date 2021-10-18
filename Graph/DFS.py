from collections import defaultdict

class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

	def addEdge(self, u, v):
		self.graph[u].append(v)


	def DFSUtil(self, v, visited):
		visited.add(v)
		print(v, end=' ')

		for neighbour in self.graph[v]:
			if neighbour not in visited:
				self.DFSUtil(neighbour, visited)

	def DFS(self, v):

		visited = set()
		self.DFSUtil(v, visited)


g = Graph()
n=int(input("Enter the number of edges in the graph   : "))
for i in range(1,n+1):
	print("")
	print("Enter the vertices to the edges")
	e1=int(input("Enter your first vertex to the edge   : "))
	e2=int(input("Enter your second vertex to the edge    : "))
	g.addEdge(e1, e2)

s=int(input("Enter the starting vertex   : "))

print("Following is Depth First Traversal")
g.DFS(s)
print("")
