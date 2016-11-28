#include<stdio.h>
#define MAX 3
#define true 1
#define false 0

int queue[MAX];
int rear = -1;
int bantu = -1, b2 = 0;

void insert()
{
	int add,i;
	if (rear == MAX)
	{
		printf("Penuh Cuy");
	}
	else
	{
		printf("Masukan nilai elemen queue : ");
		scanf("%d", &add);
		rear = rear + 1;
		queue[rear] = add;
		bantu  = rear;
	}
}

void del()
{
	printf("Queue yang dihapus :  --> %d \n", queue[rear - bantu]);
	bantu = bantu + 1;
	b2 = b2 + 1;
	
}
void display()
{
	int i;
	if (bantu == -1)
	{
		printf("Kosong");
	}
	else
	{
		printf("Nilai elemen queue adalah : \n\n");
		for (i = rear; i >= b2; i--)
		{
			printf("--> %d ", queue[i]);
			printf(" ");
		}
	}
}

int main()
{
	int pilihan;
	while(1)
	{
		printf("\n\n\n");
		printf("OPERASI QUEUE \n");
		printf("[1] Input Queue \n");
		printf("[2] Hapus Queue \n");
		printf("[3] Cetak Queue \n");
		printf("[4] Keluar \n");
		printf("Masukan pilihan : "); scanf("%d", &pilihan);
		switch (pilihan)
		{
		case 1:
		{
			insert(); break;
		}
		case 2:
		{
			del(); break;
		}
		case 3:
		{
			display(); break;
		}
		case 4:
		{
			exit(1); break;
		}
		default:
		{
			printf("pilihan tidak ada...\n");
		}
		}
	}
	return 0;
}
