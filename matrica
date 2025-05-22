#include <stdio.h>

int main() {
  int n, m, tmp;
  float x[100][100], max, sum = 0;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%f",&x[i][j]);
    }
  }
  max = x[0][0];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(x[i][j] > max){
        max = x[i][j];
        tmp = j;
      }
    }
  }
  for(int i = 0; i < n; i++){
    sum += x[i][tmp];
  }
  printf("Zbirot e %.2f",sum);
  return 0;
}