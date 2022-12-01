#include <stdio.h>
#include <signal.h>

void sig_handler(int signum) {
	printf("receive\n");
}

int main() {
	while(1) {
		sighandler_t val;
		val = signal(SIGUSR1, sig_handler);
		if(val==SIG_ERR) {
			printf("error");
		}
		printf("z\n");
		sleep(1);
	}
}

