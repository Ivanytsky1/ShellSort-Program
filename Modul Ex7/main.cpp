#include <iostream>
#include <vector>
using namespace std;

void shellSort(std::vector<int>& arr, int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] < temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "����i�� �i���i��� �������i� ������: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "�i���i��� �������i� ������ ������� ���� ��������." << endl;
        return 1;
    }

    vector<int> arr(n);

    cout << "����i�� �������� ������:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    shellSort(arr, n);

    cout << "�i����������� ����� �� ���������:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
