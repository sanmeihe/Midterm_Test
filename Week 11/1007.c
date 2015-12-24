bool isSorted(const int list[], int size) {
    int a = 0;
    int b = 0;
    for(a = 0;a < size-1;a++) {
        if(list[a] <= list[a+1]) b = b + 1;
    }
    if(b==size-1) {
    return true;
   }
   else {
    return false;
   }
    
}        