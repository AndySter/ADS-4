// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
for (int j = i + 1; j < len; j++) {
if (arr[i] + arr[j] == value)
count++;
}
}
return count;
}

int countPairs2(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
for (int j = len - 1 ; j > i; j--) {
if (arr[i] + arr[j] == value)
count++;
}
}
return count;
}

int countPairs3(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
int min = i + 1;
int max = len - 1;
while (min < max) {
int mid = (min + max) / 2;
if (arr[mid] + arr[i] < value) {
min = mid + 1;
} else {
max = mid;
}
}
while (arr[min] + arr[i] == value) {
count++;
min++;
}
}
return count;
}
