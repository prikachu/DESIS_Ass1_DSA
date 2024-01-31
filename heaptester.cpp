#include "q1_maxheap.h"
#include <iostream>

int main()
{
    MaxHeap maxHeap;

    char choice;
    do
    {
        cout << "\nMax Heap Menu:\n";
        cout << "1. Add element\n";
        cout << "2. Remove maximum element\n";
        cout << "3. Display current maximum element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            int num;
            cout << "Enter the element to add: ";
            cin >> num;
            maxHeap.add(num);
            break;
        }
        case '2':
        {
            int removedElement = maxHeap.remove_max();
            if (removedElement != -1)
                cout << "Removed maximum element: " << removedElement << '\n';
            else
                cout << "Heap is empty.\n";
            break;
        }
        case '3':
        {
            int maxElement = maxHeap.max();
            if (maxElement != -1)
                cout << "Current maximum element: " << maxElement << '\n';
            else
                cout << "Heap is empty.\n";
            break;
        }
        case '4':
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }

    } while (choice != '4');

    return 0;
}