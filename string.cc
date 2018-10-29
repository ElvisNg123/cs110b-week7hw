#include <iostream>
using namespace std;

void _strcpy( char *dest, const char *src);
void _strcpy2 ( char *dest, const char *src);
int _strlen (const char* str);
int _strcmp( const char* str1, const char* str2);
int _strncmp(const char* str1, const char* str2, int n);
char* _strstr(char *str1, char *str2); 
void _strcat(char* str1, const char* str2);
void _strncat(char* str1, const char* str2, int n);
void _strncpy(char* str1, const char* str2, int n);

int main() {

    const char* mysource = "demon king";
    char mydestination[100];
    _strncpy(mydestination, mysource, 3);
    // _strcpy(mydestination, mysource);
    cout << "_strcpy " << mydestination << endl;

    _strcpy2(mydestination, mysource);
    cout << "_strcpy2 " << mydestination << endl;

    int l = _strlen(mydestination);
    cout << "_strlen " << l << endl;

    const char *s1 = "tricksters";
    const char *s2 = "trickster";

    cout << "S1 & S2 compare as follows : " <<_strcmp(s1,s2)<<endl;
    cout << "S1 & S2 compare as follows : " <<_strncmp(s1,s2,9)<<endl;
    //_strncat(mydestination, s2);
    _strncat(mydestination, s2, 4);
    cout << "S1 and &S2 compile as follows: " << mydestination <<endl;  
  
    return 0;
}

// example of string copy operation
void  _strcpy(char *destination, const char *source) {

    int i=0;
    while(source[i]) {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

//more elegant implementation of string copy
void _strcpy2(char *destination, const char *source) {

   //check if source is not null and destination is not null
   while(*destination++ = *source++);
}

//example implementation of string length.
int _strlen(const char* str) {

    int len=0;
    while(*str++) len++;
    
    return len;
}

//example implementation of string compare
int _strcmp(const char* s1, const char* s2) {

 while(*s1 && (*s1 == *s2))
 {
     s1++;
     s2++;
 }
 return  *(const unsigned char*)s1- *(const unsigned char*)s2;
}
//Fill in this method so that calling _stracat can append s2 contents to s1
void _strcat(char* s1, const char* s2) {
  while(*s1 != '\0') s1++;
  while(*s2) *s1++ = *s2++;
}
//check if string s2 is inside or embedded within string s1
char* _strstr( char *s1, char *s2) {
  //This function returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle, or a null pointer if the sequence is not present in haystack.

  int l1,l2;
  char *s5, *s6;
  *s1 == *s5;
  *s2 == *s6;
    while(*s1++) l1++;
    while(*s2++) l2++;
  int len = 0;
  while (len<=(l2-l1)){
    char *s3=s1++;
    char *s4=s2;
    while(*s2!='\0'){
      if (*s3 != *s4) break;
      s3++;
      s4++;
    }
    if (*s1==*s2)return s1+len;
       len++;
    
  }
  return NULL; 
}
// _strcpy for specified number of characters n.
void _strncpy(char* s1, const char* s2, int n){
    int i=0;
    while (i<n){
      s1[i] = s2[i];
      i++;
    }
    s1[i] = '\0';
    
}
// _strcmp for specified number of characters n.
int _strncmp(const char* s1, const char* s2, int n) {
  int len=0;
  while(len < n)
 {
     s1++;
    //  cout << s1 << endl;
    //  cout << *s1 << endl;
     s2++;
     len++;
 }
 return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
// _strcat for specified number of characters n.
void _strncat(char* s1, const char *s2, int n) {
   int len=0;
   int i=0;
    while(*s1 != '\0'){
      s1++;
      i++;
    }
    while(len<n){
       *s1++ = *s2++;
       len++;
       i++;
    }
    s1[i] = '\0';
}