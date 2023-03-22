#include <stdio.h>

void input(int N, int M, int Mat[][M])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      scanf("%d", &Mat[i][j]);
      ///////////////////////&&&&&&&&&&&&&&&&&&&&&&&&&
    }
  }
  printf("\n");
}
void Array_print(int N, int M, int Mat[][M])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      printf("%2d", Mat[i][j]);
    }
    printf("\n");
  }
}
void matrixAddition(int N, int M, int A[][M], int B[][M])
{

  int Mat[N][M];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      Mat[i][j] = A[i][j] + B[i][j];
    }
  }
  Array_print(N, M, Mat);
}

int main()
{
  int N, M;
  printf("입력\n");
  scanf("%d %d", &N, &M); ///////////;;;;;;;;;;;;;;;;;;;;;;;;;
  int A[N][M], B[N][M], S[N][M];
  input(N, M, A);
  input(N, M, B);
  matrixAddition(N, M, A, B);
}
