#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int key;
	int index;
	struct node *next;
};

struct ht {
	int size;
	struct node **table;
};

int bucketCount[10]={0};
int colArray[12][3];
int colIndex=0;
int collided=0;
void collision(int index, int bin){
	collided=1;
	bucketCount[bin]++;
	
	colArray[colIndex][0] = index;
	colArray[colIndex][1] = bin;
	colArray[colIndex][2] = bucketCount[bin];
	
	printf("index %d, bin %d, count is %d\n", index, bin, bucketCount[bin]);
	printf("at %d, - %d, %d, %d\n", colIndex, colArray[colIndex][0], colArray[colIndex][1], colArray[colIndex][2]);
	
	colIndex++;
	colArray[colIndex][0] = -1;
	colArray[colIndex][1] = -1;
	colArray[colIndex][2] = -1;
}

void incBucketCount(int bin){
	printf("increasing bin %d\n", bin);
	bucketCount[bin]++;
}

void printResult(){
	
	if(collided){
		int colIndex=0;
		while(colArray[colIndex][0]!=-1){
						
			printf("{%d,%d,%d} ",colArray[colIndex][0], colArray[colIndex][1], colArray[colIndex][2]);
			colIndex++;
		}
		
	
	} else {
	
		printf("\nNO\n");
	}
	


}

struct ht *create(int size){
	printf("in create\n");
	struct ht *hashtable = (struct ht *)malloc(sizeof(struct ht));
	hashtable->table = (struct node **)malloc( sizeof(struct node) * size);
	int i;
	for(i=0; i<size;i++){
		hashtable->table[i]=NULL;
	}
	hashtable->size=size;
	printf("created\n\n");
	return hashtable;
} 

void ht_set(struct ht *hashtable, int key, int index){

	
	int bin = key%10;
	struct node *next = hashtable->table[bin];
	struct node *last = NULL;
	
	while(next!=NULL){
		last = next;
		next = next->next;
	}
	
	struct node *newpair = (struct node *) malloc(sizeof(struct node));
	newpair->key=key;
	newpair->index=index;
	newpair->next = NULL;
	
	/* We're at the start of the linked list in this bin. */
	if( next == hashtable->table[ bin ] ) {
		printf("Adding at First\n");
		newpair->next = next;
		hashtable->table[bin] = newpair;
		incBucketCount(bin);

	/* We're in the middle of the list. */
	} else  {
		printf("Collision at %d\n", index);
		last->next = newpair;
		collision(index, bin);
	}
	
	printf("-------------\n");

}

 


int main() {
 
	struct ht *hashtable = create(10);
	
	for(int i=0; i<10;i++){
		int temp;
		scanf("%d", &temp);
		ht_set( hashtable, temp, i+1 );
	}
	
	printResult();
 
	//ht_set( hashtable, 3 );
//	ht_set( hashtable, 22 );
//	ht_set( hashtable, 34 );
//	ht_set( hashtable, 1 );
//	ht_set( hashtable, 13 );
//	ht_set( hashtable, 2 );
//	ht_set( hashtable, 9 );

 
	return 0;
}
