#include <vector>
using namespace std;

class MaxHeap
{
    vector<int> heap;

public:
    MaxHeap() {}

    // Implement a max binary heap.

    void add(int num)
    {
        // Add an item to heap, but make sure to preserve its heapness.
        heap.push_back(num);
        heapify_up(heap.size() - 1);
    }
    int remove_max()
    {
        // Returns and removes the current maximum element in heap.
        if (heap.size() == 0)
            return -1;
        int max_ele = heap[0];
        int a = heap.back();
        heap.pop_back();
        heap[0] = a;
        heapify_down(0);
        return max_ele;
    }
    int max()
    {
        // Returns the current maximum element in heap
        if (heap.size() == 0)
            return -1;
        return heap[0];
    }
    void heapify_down(int index)
    {
        // Reorganize element at given index by pushing it down as necessary
        int lc = get_leftchild(index);
        int rc = get_rightchild(index);
        int ele = heap[index];
        int sz = heap.size();
        while (lc < sz)
        {
            int larger_child = (rc < sz && heap[rc] > heap[lc]) ? rc : lc;

            if (heap[larger_child] > ele)
            {
                heap[index] = heap[larger_child];
                heap[larger_child] = ele;
                index = larger_child;
                lc = get_leftchild(index);
                rc = get_rightchild(index);
            }
            else
                return;
        }
    }
    void heapify_up(int index)
    {
        // Reorganize element at given index by pushing it up as necessary
        int p = get_parent(index);
        int ele = heap[index];
        while (p >= 0)
        {
            if (heap[p] >= ele)
                return;
            else
            {
                heap[index] = heap[p];
                heap[p] = ele;
                index = p;
                p = get_parent(index);
            }
        }
    }

    int get_parent(int ind)
    {
        return (ind - 1) / 2;
    }
    int get_leftchild(int ind)
    {
        return 2 * ind + 1;
    }
    int get_rightchild(int ind)
    {
        return 2 * ind + 2;
    }
};


