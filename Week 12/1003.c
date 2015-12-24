int smallestElement(int * array, int size) {
  int s = array[0];
  int i;
  for (i = 1; i < size; i++) {
    if (array[i] < s) {
      s = array[i];
    }
  }
  return s;
}