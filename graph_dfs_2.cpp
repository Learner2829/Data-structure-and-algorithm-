#include <iostream>
using namespace std;
struct stack
{
    int *arr;
    int top = -1;
    int size;
    stack(int t_size)
    {
        size = t_size;
        arr = new int[size];
    }
    void push(int t_data)
    {
        if (is_full())
        {
            cout << "Stack is full";
        }
        else
        {
            top = top + 1;
            arr[top] = t_data;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            return -1;
        }
        else
        {
            int temp = arr[top];
            top = top - 1;
            return temp;
        }
    }
    bool is_full()
    {
        if (top >= size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool is_empty()
    {
        if (top < 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void show()
    {
        int index = top;
        while (index >= 0)
        {
            cout << arr[index] << " ";
            index--;
        }
    }
};

int main()
{
    stack explor(6);
    int visted[6] = {0, 0, 0, 0, 0, 0};
    int i = 0;
    int adj_matrix[6][6] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 1, 1},
        {0, 1, 0, 0, 0, 1},
        {0, 0, 1, 0, 0, 1},
        {0, 1, 1, 1, 1, 0}};
    visted[i] = 1;
    cout << i;
    explor.push(i);
    while (!explor.is_empty())
    {
        int node = explor.pop();
        for (int j = 0; j < 6; j++)
        {
            if (adj_matrix[node][j] == 1 && visted[j] == 0)
            {

                visted[j] = 1;
                cout << j;
                explor.push(j);
            }
        }
    }

    return 0;
}