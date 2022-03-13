// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0, start = 0, end = size - 1;
	while (start < end) {
		int mid = (start + end) / 2;
		if (arr[mid] == value) {
			count++;
			int temp = mid;
			while (arr[--mid] == value) {
				count++;
			}
			while (arr[++temp] == value) {
				count++;
			}
			return count;
		} else if (arr[mid] > value) {
			end = mid;
		} else {
			start = mid + 1;
		}
	}
	
    return 0; // если ничего не найдено
}
