# Week 10 — Graphs Pt 2

Anh Huynh

### 1.

**Explain with the help of an example "Why Dijkstra's algorithm fails on negative weights".**

Example Graph:
A —> B (6)
A —> C (2)
C —> B (-4)

We want to find the shortest path from A. 
A —> B = 6
A —> C = 2
The algorithm picks the vertex with the smallest distance: C (2).

Now C —> B = -4
2 + (-4) = -2

new path to B = -2

When Dijkstra first visited A, it already set the distance to B as 6 and assumes that's the final distance. It doesn't check again when a shorter path (A —> C —> B = -2) appears later.

So the algorithm fails to update B's distance correctly.



Dijkstra's algorithm fails on negative weights because it assumes the shortest distance to each vertex is final once visited and it doesn't account for later paths that reduce distance through negative edges.

