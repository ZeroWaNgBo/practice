////  N 皇后问题 回溯法
////  非递归(循环 迭代) 采用一维数组
////方案 1  2 4 1 3
////方案 2  3 1 4 2 
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 4 // 4皇后
//int q[N + 1];
//
//int check(int j) { // 检查第j个皇后的位置是否合法
//    int i; // 第i个皇后
//
//    for (i = 1; i < j; i++) {
//        if (q[i] == q[j] || abs(i - j) == abs(q[i] - q[j])) {
//            // 判断是否在同一列 或 同一斜线上
//            return 0;
//        }
//    }
//
//    return 1;// 合法
//}
//
//int queen(void) {
//    int i;
//
//    // 初始化
//    //防止垃圾值：在C语言中，局部变量（包括数组元素）在声明后不会自动初始化。如果不进行初始化，它们可能包含任意值（即“垃圾值”），这会导致程序逻辑错误
//    // 明确状态：将所有皇后的位置设置为 0 表示在开始时没有皇后被放置在棋盘上。程序在后续的逻辑中将逐步尝试为每个皇后分配合法的位置
//    for (i = 1; i <= N; i++) {
//        q[i] = 0;
//    }
//
//    int answer = 0; // 方案数
//    int j = 1; // 表示正在摆放第j个皇后 从第1个皇后开始
//
//    while (j >= 1) {
//        q[j]++; // 尝试摆放第j个皇后 让第j个皇后向后一列摆放
//
//        while (q[j] <= N && !check(j)) { // 皇后位置在棋盘的范围内 并且 皇后位置不合法
//            q[j]++; // 不合法就往后一个位置摆放
//        }
//
//        if (q[j] <= N) { // 表示第j个皇后找到的第一个合法的摆放位置
//            if (j == N) {
//                answer++;
//                printf("方案%d   ", answer);
//
//                for (i = 1; i <= N; i++) {
//                    printf("%d ", q[i]);
//                }
//
//                printf("\n");
//            } else {
//                j++;// 继续摆放下一个皇后
//            }
//        } else { // 表示第j个皇后找不到一个合法的摆放位置
//            q[j] = 0;
//            j--; // 回溯
//        }
//    }
//    printf("方案数   %d",  answer);
//    printf("\n");
//    return answer;  //可选：返回方案总数
//}
//
//int main(void) {
//    queen();
//    return 0;
//}
