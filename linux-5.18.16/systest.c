#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){
	int result1 = syscall(451, 123456789);
	printf("mycall1 returned %d\n", result1);
	int result2 = syscall(452);
	printf("mycall2 returned %d\n", result2);

	return 0;
}
