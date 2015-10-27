
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
	printf("最初\nnumbers=");

	for(i = 0; i < N; i++){
	printf("%d,",numbers[i]);
	}
	printf("\n\nbuckets作成\nbuckets=");

	//buckets作成
	for (i = 0; i<M; i++){
		buckets[i] = 0;
		printf("%d,",buckets[i]);
	}

	//bucketにデータを入れる データが"3"なら、buckets[3]に入る
	printf("\n\nnumbersをbucketsに並べ替えて挿入\nbuckets=");
	for(i = 0; i<number_of_item; i++){
		buckets[numbers[i]] = numbers[i];
		}
	
	for(i = 0; i < M; i++){
	printf("%d,",buckets[i]);
	}
	printf("\nnumbers=");

	for(i = 0; i < N; i++){
	printf("%d,",numbers[i]);
	}

	
	//bucketから、元のnumbers配列に順番に数値を戻す
	printf("\n\nbucketsから、元のnumbers配列に順番に数値を戻す\nbuckets=");
	int j = 0;
	for(i = 0; i < 8; i++){
		if (0< buckets[i]){
			numbers[j] = buckets[i];
			j++;
		}
}

	for(i = 0; i < M; i++){
	printf("%d,",buckets[i]);
	}
	printf("\nnumbers=");
	for(i = 0; i < number_of_item; i++){
	printf("%d,",numbers[i]);
	}
	printf("\n\n");

//デバッグ用　printf("last numbers[1]=%d backet[7]=%d\n ",numbers[1], buckets[7]);



}