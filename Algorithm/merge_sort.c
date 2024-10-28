////分治法 （利用递归 实现归并排序）
////递归式  n<=1时,O(1)     n>1时,2T(n/2)+O(n)
////时间复杂度 T(n) = O(nlog2n)
////空间复杂度 O(n)
////假设有n1 和 n2 两个子数组已经排好序进行归并  元素之间的比较次数为n1+n2
//#include <stdio.h>
//#include <stdlib.h> // 引入stdlib以使用动态内存分配
//#include <limits.h> // 引入头文件以使用 INT_MAX
//
//// 计数分组的次数
//int mergeCount = 0;
//
//// 合并两个已排序的子数组
//void Merge(int A[], int p, int q, int r) {
//    int i, j, k; // 循环变量
//
//    // 计算左子数组和右子数组的元素个数
//    int n1 = q - p + 1; // 左子数组元素个数
//    int n2 = r - q;     // 右子数组元素个数
//
//    // 动态定义临时数组 L 和 R   根据int参数中 参数的大小 动态申请内存空间
//    int *L = (int *)malloc((n1 + 1) * sizeof(int)); // 临时数组 L
//    int *R = (int *)malloc((n2 + 1) * sizeof(int)); // 临时数组 R
//
//    // 将 A[p..q] 拷贝到临时数组 L
//    for (i = 0; i < n1; i++) {
//        L[i] = A[p + i];
//    }
//    // 将 A[q+1..r] 拷贝到临时数组 R
//    for (j = 0; j < n2; j++) {
//        R[j] = A[q + j + 1];
//    }
//
//    // 设置结束标志
//    L[n1] = INT_MAX; // 左数组的结束标志
//    R[n2] = INT_MAX; // 右数组的结束标志
//
//    // 初始化索引
//    i = 0; // 左数组的索引
//    j = 0; // 右数组的索引
//
//    // 打印分组结果
////        printf("左子数组 [");
////        for (int m = p; m <= q; m++) {
////            printf("%d ", A[m]);
////        }
////        printf("]\n");
////        printf("右子数组 [");
////        for (int m = q + 1; m <= r; m++) {
////            printf("%d ", A[m]);
////        }
////        printf("]\n");
////    
//    
//    // 将临时数组中的数据合并回原数组 A
//    for (k = p; k <= r; k++) {
//        if (L[i] <= R[j]) { // 如果左数组元素小于等于右数组元素
//            A[k] = L[i];    // 将左数组元素放入 A
//            i++;            // 移动左数组索引
//        } else {
//            A[k] = R[j];    // 将右数组元素放入 A
//            j++;            // 移动右数组索引
//        }
//    }
//
//    // 打印合并结果
//    printf("合并结果 [");
//    for (int m = p; m <= r; m++) {
//        printf("%d ", A[m]);
//    }
//    printf("]\n");
//
//    // 释放动态分配的内存
//    free(L);
//    free(R);
//}
//
//// 归并排序的递归函数
//void MergeSort(int A[], int p, int r) {
//    // p 数组的最左边启始位置
//    // r 数组的最右边终止位置
//    // q 数组的中间值的索引
//    int q;
//
//    // 递归基：当 p < r 时继续分割
//    if (p < r) {
//        q = (p + r) / 2; // 计算中间索引
//        MergeSort(A, p, q);       // 对左半部分进行递归排序
//        MergeSort(A, q + 1, r);   // 对右半部分进行递归排序
//        mergeCount++; // 每次合并前增加分组计数
//        Merge(A, p, q, r);        // 合并已排序的两个子数组
//    }
//}
//
//int main(void) {
//    // 初始化待排序数组
//    int A[] = {4, 1, 3, 6, 8, 5, 2, 9};
//    int size = sizeof(A) / sizeof(A[0]);  // 动态计算数组大小
//
//    // 调用归并排序函数
//    MergeSort(A, 0, size - 1);
//
//    // 输出排序后的数组
//    printf("排序后的数组: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", A[i]); // 打印每个元素
//    }
//    printf("\n"); // 换行
//
//    // 输出分组次数
//    printf("总分组次数: %d\n", mergeCount);
//
//    return 0; // 程序结束
//}
