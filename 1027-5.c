
#include <stdio.h>
#include <string.h>

// void bubble(int arr[], int n, char op)

int main()
{
    int n;
    char op[2];
    scanf("%d", &n);
    scanf("%s", op);
    int arr[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (strcmp(op, "a") == 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int tmp;
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    else if (strcmp(op, "d") == 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int tmp;
                    tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    /// bubble(arr, n, op);

    return 0;
}
