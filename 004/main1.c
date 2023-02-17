#include <stdio.h>

int main(){
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	    if(c == 'a'||c == 'e'||c =='i'||c=='o'||c=='u'||c=='A'
          ||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("%c is a Vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }
    
    
    
    
    /*
	
	char c;
    printf("Enter a Character: ");
    scanf("%c", &c);
    switch(c)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel\n", c);
            break;
        default:
            printf("%c is a Consonant\n", c);
    }  
	
	
	*/
    
    
    
    
    
    
    return 0;
}
