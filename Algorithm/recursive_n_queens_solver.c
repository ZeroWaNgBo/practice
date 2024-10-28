////  N 皇后问题 回溯法
////  递归
////方案 1  2 4 1 3
////方案 2  3 1 4 2 
//#include <stdio.h>
//#include <stdlib.h>
//#define N 4 // 4皇后
//int answer = 0;//用于统计方案总数。
//int q[N + 1];//存储皇后的列号 索引从1到N
//
//int check(int j) { // 检查第j个皇后的位置是否合法
//    int i;
//
//    for (i = 1; i < j; i++) {
//        if (q[i] == q[j] || abs(i - j) == abs(q[i] - q[j])) {
//            // 判断是否在同一列 或 同一斜线上
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int queen(int j) {
//    int i;
//
//    for (i = 1; i <= N; i++) {
//        q[j] = i; // 尝试将第j个皇后放置在第i列
//
//        if (check(j)) { //皇后位置合法时
//            if (j == N) { //找到了N皇后的一组解
//                answer++;
//                printf("方案 %d  ", answer);
//
//                for (i = 1; i <= N; i++) {
//                    printf("%d ", q[i]);
//                }
//
//                printf("\n");
//            } else {
//                queen(j + 1);//递归继续摆放下一皇后位置
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main(void) {
//    queen(1);
//    return 0;
//}
