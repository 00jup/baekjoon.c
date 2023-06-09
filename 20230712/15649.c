#include <stdio.h>
#include <stdbool.h>
#define MAX 9

int m, n;
int arr[MAX] = {
    0,
};
bool visited[MAX] = {
    0,
};
void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    dfs(0);
}
