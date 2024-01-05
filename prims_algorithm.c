// Prim's Algorithm in C
// T.C. O(E log V)
// S.C. O(E + V)
// Ref. Programiz

#include <stdio.h>

#define INF 9999
#define V 6

typedef enum {false, true} bool;

int G[V][V] = {
    {0, 4, 4, 0, 0, 0},
    {4, 0, 2, 0, 0, 0},
    {4, 2, 0, 3, 2, 4},
    {0, 0, 3, 0, 0, 3},
    {0, 0, 2, 0, 0, 3},
    {0, 0, 4, 3, 3, 0}
}

int main() {
  int no_edge;  // number of edge
  int x, y; // row, col
  int selected[V];
  clrscr();

  memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;

  printf("Edge : Weight\n");

  while (no_edge < V - 1) {
    int min = INF;
    int i, j;
    x = 0;
    y = 0;
    printf("%d\n", min);

    for (i = 0; i < V; i++) {
      if (selected[i]) {
        for (j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) {  // not in selected and there is an edge
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            } // end-if
          } // end-if
        } // end-for
      }
    }
    printf("%d - %d : %d\n", x, y, G[x][y]);
    selected[y] = true;
    no_edge++;
  }

  getch();
  return 0;
}
