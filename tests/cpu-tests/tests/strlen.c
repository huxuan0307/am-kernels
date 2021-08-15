#include "trap.h"


char *s[] = {
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	", World!\n",
	"Hello, World!\n",
	"#####"
};

int res[] = {
    38, 38, 38, 9, 14, 5
};

#define CASES_LEN LENGTH(s)

int main() {
    for (int i=0; i<CASES_LEN; i++) {
        check(res[i]==strlen(s[i]));
    }
    return 0;
}