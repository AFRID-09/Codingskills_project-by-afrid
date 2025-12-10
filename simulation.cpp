#include <iostream>
using namespace std;

int main() {
    int arr[100];       // fixed-size array
    int n;             // current number of elements

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;
    while (true) {
        cout << "\n---- ARRAY SIMULATION ----\n";
        cout << "1. Insert Element\n";
        cout << "2. Update Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Display Array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // INSERT
            int pos, value;
            cout << "Enter position to insert (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];  // shift right
            }
            arr[pos] = value;
            n++;
            cout << "Inserted successfully.\n";

        } else if (choice == 2) {
            // UPDATE
            int pos, value;
            cout << "Enter position to update: ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> value;

            arr[pos] = value;
            cout << "Updated successfully.\n";

        } else if (choice == 3) {
            // DELETE
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;

            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];  // shift left
            }
            n--;
            cout << "Deleted successfully.\n";

        } else if (choice == 4) {
            // DISPLAY
            cout << "Array elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;

        } else if (choice == 5) {
            break;

        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
