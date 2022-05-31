#include<stdio.h>
void squeeze(char s1[], char s2[]){
	int i,j,k;
	int includes; 
	k = 0;
	for(i=0; s1[i] != '\0'; i++){
		for(j=0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j]){
				includes = 1; 
				break;  
			}
			else
				includes = 0; 
		}
		if(!includes){
			s1[k++] = s1[i];
			includes = 1; 
		}
	}
	s1[k] = '\0';
}
int main(){
	char initial[] = "fuckyounvidia";
	char delete[] = "linus"; 
	squeeze(initial, delete); 
	printf("%s", initial); 
	return 0;
}

