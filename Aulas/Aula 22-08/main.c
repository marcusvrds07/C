// #include <stdio.h>

// int main(void) {
//   int matriz[3][2] = {
//       {1, 2}, {3, 4}, {5,6}
//   };
//   int escalar;

//   printf("Digite o escalar: ");
//   scanf("%d", &escalar);

//   for(int i = 0; i < 3; i++) {
//     for(int j = 0; j < 2; j++) {
//       matriz[i][j] = matriz[i][j] * escalar;
//       printf("%d ", matriz[i][j]);
//     }
//     printf("\n");
//   }
  
//   return 0;
// }

#include <stdio.h>

int main(void) {

  // o número de coluna da primeira deve ser igual ao número de linhas da segunda.
  // o resultado é a quantidade de linhas da primeira pela quantidade de coluna da segunda
  int a[3][2] = {
                {1, 2},
                {1, 2},
                {1, 2}
  },
      b[2][3] = {
                {2, 3, 4},
                {2, 3, 4}
  },

  //resultado precisa ser iniciado com C, pois estaremos concatenando.
      c[3][3] = {
                {0, 0, 0},
                {0, 0, 0},
                {0, 0, 0}
  };

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 2; k++) {
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
    }
  }
  
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
     printf("%d ", c[i][j]);   
    }
  printf("\n");
  }
  
  return 0;
}