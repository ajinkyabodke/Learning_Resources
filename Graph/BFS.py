
from collections import defaultdict
class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

	def addEdge(self,u,v):
		self.graph[u].append(v)
	def BFS(self, s):
		visited = [False] * (max(self.graph) + 1)
		queue = []
		queue.append(s)
		visited[s] = True

		while queue:
			s = queue.pop(0)
			print (s, end = " ")
			for i in self.graph[s]:
				if visited[i] == False:
					queue.append(i)
					visited[i] = True
g = Graph()
n=int(input("Enter the number of edges in the graph   : "))
for i in range(1,n+1):
	print("")
	print("Enter the vertices to the edges")
	e1=int(input("Enter your first vertex to the edge   : "))
	e2=int(input("Enter your second vertex to the edge    : "))
	g.addEdge(e1, e2)

s=int(input("Enter the starting vertex   : "))

print ("Following is Breadth First Traversal")
g.BFS(s)
print("")
