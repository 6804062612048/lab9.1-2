#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		//if Password is valid
		printf("Accepted\n");
	} else {
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
	int accepted=0;
	int upper=0;
	int digit=0;
	int len=strlen(ps);
	if(len>=5&& len<=8){
		if(!isdigit(ps[0])){
			for(int i=0; i<len; i++){
				if(isupper(ps[i])){
				upper++;
				}
				if(isdigit(ps[i])){
					digit++;
				}
			}
			if(upper>=2&&digit>=2){
				accepted=1 ;
			}
		}
	}
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}

