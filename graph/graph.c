// Undirected graph using adjacency matrix
#include <stdio.h>
#include <stdlib.h>

#define N 10

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

void searchEdge (){

}
