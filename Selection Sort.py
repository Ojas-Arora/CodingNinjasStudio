from typing import List
def selectionSort(arr: List[int]) -> None:
    N = len(arr)
    for i in range(N):
        min_index = i
        for j in range(i + 1, N):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
