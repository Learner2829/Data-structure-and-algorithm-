#include <iostream>
using namespace std;
struct queue
{
    int *arr;
    int rear = -1;
    int front = 0;
    int size;
    queue(int t_size)
    {
        size = t_size;
        arr = new int[size];
    }
    bool is_full()
    {
        if (rear >= (size - 1))
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
        if (front > rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int t_data)
    {
        if (is_full())
        {
            cout << "Your stack is full";
        }
        else
        {
            rear = rear + 1;
            arr[rear] = t_data;
        }
    }
    int dequeue()
    {
        if (is_empty())
        {
            cout << "your stack is empty";
            return -1;
        }
        else
        {
            int temp = arr[front];
            front = front + 1;
            return temp;
        }
    }
    void show()
    {
        int index = front;
        while (index <= rear)
        {
            cout << arr[index] << " ";
            index = index + 1;
        }
    }
};
int main()
{
    queue explor(6);
    // q1.show();
    int i = 0;
    int adj_matrix[6][6] = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 1, 1},
        {0, 1, 0, 0, 0, 1},
        {0, 0, 1, 0, 0, 1},
        {0, 1, 1, 1, 1, 0}};
    int visted[6] = {0, 0, 0, 0, 0, 0};
    visted[i] = 1;
    explor.enqueue(i);
    cout << i;
    while (!explor.is_empty())
    {
        int node = explor.dequeue();
        for (int j = 0; j < 6; j++)
        {
            if (adj_matrix[node][j] == 1 && visted[j] == 0)
            {
                cout << j << " ";
                visted[j] = 1;
                explor.enqueue(j);
            }
        }
    }

    return 0;
}