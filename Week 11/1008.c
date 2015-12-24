void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
while (i < size1 && j < size2) {
    if (list1[i] < list2[j])
     list3[k++] = list1[i++];
    else list3[k++] = list2[j++];
}
while (i < size1)
list3[k++] = list1[i++];
while (j < size2)
list3[k++] = list2[j++];
}                         