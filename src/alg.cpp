// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
int st = 0;
int end = size - 1;
int count = 0;
while (st <= end) {
int half = (st + end) / 2;
if (arr[half] == value) {
count++;
int i = half - 1;
while (i >= st && arr[i] == value) {
count++;
i--;
}
int k = half + 1;
while (k <= end && arr[k] == value) {
count++;
k++;
}
return count;
} else if (arr[half] < value) {
st = half + 1;
} else {
end = half - 1;
}
}
return 0;
}
