#include<stdio.h>

int main() {
  int n = 1,x[100],prosek = 0.0,y[100],k=0,br_parni = 0;
  float suma = 0;
  FILE *file;
  file = fopen("C:\\Users\\Jovan\\untitled\\mak", "r");
  if (file == NULL) {
    printf("Failed to open file.\n");
    return 1;
  }

  while(fscanf(file, "%d", &x[n]) == 1){
    n++;
  }

  for (int i = 2; i < n; i+=2){
    suma += x[i];
    br_parni++;
  }
  prosek = suma/br_parni;
  for (int i = 1; i < n;i++){
    if(x[i] > prosek && x[i] > 0){
      y[k] = x[i];
      k++;
    }
  }
  for (int i = 1; i < k; i++){
    printf("%d ",y[i]);
  }
  return 0;
}