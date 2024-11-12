// Undirected, unweighted graph using adjacency matrix

#include <stdio.h>
#include <stdlib.h>

#define N 5

void insertEdge (int graph[N][N], int a, int b){
  // Joining a to b
  graph[a][b] = 1;

  // Joining b to a
  graph[b][a] = 1;
}

void deleteEdge (int graph[N][N], int a, int b){
  // Deleting a to b
  graph[a][b] = 0;

  // Deleting b to a
  graph[b][a] = 0;

}

int searchEdge (int graph[N][N], int a, int b){
  // Checks for the existence of edge u-v
  return graph[a][b];
}

void displayGraph (int graph[N][N], int n){
  for (int i = 0;i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", graph[i][j]);
    }
  puts("");
  }
}

int main (){
  int graph [N][N] = {0};

  // Adding edges
  insertEdge(graph, 0, 1);
  insertEdge(graph, 2, 3);
  insertEdge(graph, 1, 4);
  insertEdge(graph, 0, 4);

  displayGraph(graph, N);

  return 0;
}
