#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[15];
};

int main(void) {
	struct Book *p;
	
	// Book ����ü 2�� �����Ҵ� 
	p = (struct Book*) malloc (2*sizeof(struct Book));
	
	if (p == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	printf("%d : %s\n", p->number, p->title);
	printf("%d : %s\n", (p+1)->number, (p+1)->title);
	
	free(p);
	
	return 0;
}
