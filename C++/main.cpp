#include <iostream>
#include <vector>

// 合併兩個有序子數列.
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // 將數列分為兩個子數列.
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // 合併兩個子數列.
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 將剩餘的元素複製回數列.
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 合併排序.
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // 遞迴地對兩個子數列進行排序.
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 合併兩個子數列.
        merge(arr, left, mid, right);
    }
}

int main() {
    std::vector<int> arr = {30, 10, 40, 70, 50, 90, 60, 20};
    int n = arr.size();

    // 原始數列.
    std::cout << "original sequence: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  
    // 合併排序.
    mergeSort(arr, 0, n - 1);

    // 輸出排序後的數列.
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
