#include "q1_linkedlist.h"

int main()
{
    LinkedList list;

    char choice;
    do
    {
        cout << "\nLinked List Menu:\n";
        cout << "1. Insert at the start\n";
        cout << "2. Remove from the start\n";
        cout << "3. Insert at the end\n";
        cout << "4. Remove from the end\n";
        cout << "5. Front element\n";
        cout << "6. Last element\n";
        cout << "7. Traverse the list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice (1-8): ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            int num;
            cout << "Enter the value to insert at the start: ";
            cin >> num;
            list.insert_at_start(num);
            break;
        }
        case '2':
            list.remove_from_start();
            break;
        case '3':
        {
            int num;
            cout << "Enter the value to insert at the end: ";
            cin >> num;
            list.insert_at_end(num);
            break;
        }
        case '4':
            list.remove_from_end();
            break;
        case '5':
            cout << "Front element: " << list.front() << '\n';
            break;
        case '6':
            cout << "Last element: " << list.last() << '\n';
            break;
        case '7':
            cout << "List elements: ";
            list.traverse();
            cout << '\n';
            break;
        case '8':
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 8.\n";
        }

    } while (choice != '8');

    return 0;
}