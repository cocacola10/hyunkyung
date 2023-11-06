/**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "libft.h"



char *fn_strjoin(char const *s1, char const *s2);

    int main()
    {
        char s1 [] = "peanut";
        char s2 [] = "butter";

        printf("%s\n", fn_strjoin(s1, s2));

        return 0;
    
    }

    
char* fn_strjoin(char const *s1, char const *s2)
{
    char* str;
    size_t s1_len;
    size_t s2_len;

    s1_len = fn_strlen(s1);
    s2_len = fn_strlen(s2);
    if(!s1 || !s2)
        return (NULL);
    if(!(str=(char*)malloc(sizeof(char)*(s1_len + s2_len + 1))))
        return (0);
    fn_strlcpy(str, s1, s1_len + 1);
    fn_strlcat(str + (s1_len), s2, s2_len + 1);
    return (str);

    }


size_t fn_strlen(const char *string);

int main(int argc, char ** argv)
{
 
  if ( argc != 2 )
    printf( "Usage: %s string\n", argv[0] );
  else
    printf( "Input string has a length of %i\n", fn_strlen( argv[1] ));
}
/******************  If the input is the string  ***********************
*****************"How long is this string?", ******************
******************  then the expected output is:  *****************
 
Input string has a length of 24
*/
//fn_strlcpy
//fn_strlcat


/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	total_length;

	if (!s1 || !s2)
		return (NULL);
	total_length = (ft_strlen(s1) + ft_strlen(s2) + 1);
	result = (char *)malloc(sizeof(char) * total_length);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, total_length);
	ft_strlcat(result, s2, total_length);
	return (result);
}*/

