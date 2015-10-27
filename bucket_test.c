
#include <stdio.h>
#define M 10
#define N 7

/*
参考　http://www.codereading.com/algo_and_ds/algo/bucket_sort.html
numbers[] ソート対象配列
number_of_item ソート対象のデータ個数
*/

int number_of_item = N ;
int buckets[M];
int i ;
int main(void){
	int numbers[] = {3,5,1,7,4,2,6};

	//buckets作成
	for (i = 0; i<M; i++){
		buckets[i] = 0;
	}

	//bucketにデータを入れる データが"3"なら、buckets[3]に入る
	for(i = 0; i<number_of_item; i++){
		buckets[numbers[i]] = numbers[i];
	}
	

	//bucketから、元のnumbers配列に順番に数値を戻す
	int j = 0;
	for(i = 0; i < 8; i++){
		if (0< buckets[i]){
			numbers[j] = buckets[i];
			j++;
		}
}
	for(i = 0; i < number_of_item; i++){
	printf("%d",numbers[i]);
	}
	printf("\n");

}