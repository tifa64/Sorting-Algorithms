SelectionSort = [0, 4011000, 377067000, 40126058000];
BubbleSort = [0, 3510000, 487295000, 38997539000];
InsertionSort = [27224038000, 27523996000, 32485599000, 107863366000];
HeapSort = [73758000, 85232000, 87236000, 166447000];
QuickSort = [0, 0, 2508000, 32109000];
MergeSort = [0, 2005000, 11030000, 116815000];
Size = [100, 1000, 10000, 100000];
plot(SelectionSort, Size, 'g', BubbleSort, Size, 'b', InsertionSort, Size, '.-', HeapSort, Size, 'k', QuickSort, Size, 'm', MergeSort, Size, '*'), xlabel('Size of input'), ylabel('Running time (ns)'), title('Sorting Algorithms'),