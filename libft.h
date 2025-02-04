#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int *ft_memcmp(const void *s1, const void *s2, size_t n);
size_t *ft_strlen(const char *s);
size_t *ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t *ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
int *ft_strncmp(const char *s1, const char *s2, size_t n);
int *ft_atoi(const char *str);
int *ft_isalpha(int c);
int *ft_isdigit(int c);
int *ft_isalnum(int c);
int *ft_isascii(int c);
int *ft_isprint(int c);
int *ft_toupper(int c);
int *ft_tolower(int c);
int *ft_calloc(size_t num_elements, size_t element_size);
char *ft_strdup(const char *str);

#endif