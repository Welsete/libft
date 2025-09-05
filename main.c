#include "libft.h"
#include <stdio.h>   // printf
#include <string.h>  // strlen, memset, memcpy, memcmp, strcmp
#include <stdlib.h>  // malloc, free

/* ---------- helpers ---------- */

static void free_split(char **v)
{
    if (!v) return;
    for (int i = 0; v[i]; i++) free(v[i]);
    free(v);
}

static void print_split(char **v)
{
    if (!v) { printf("(null)\n"); return; }
    for (int i = 0; v[i]; i++) printf("  [%d]: \"%s\"\n", i, v[i]);
}

/* lstmap helpers */
static void *dup_ok(void *p) { (void)p; char *s = ft_strdup("OK !"); return s; }
static void del_str(void *p) { free(p); }

/* ---------- testes ---------- */

static void test_strings(void)
{
    printf("== strings ==\n");
    printf("ft_strlen(\"banana\") = %zu (libc=%zu)\n", ft_strlen("banana"), strlen("banana"));

    char d1[16]; d1[0] = '\0';
    size_t r1 = ft_strlcpy(d1, "42SP", sizeof(d1));
    printf("ft_strlcpy -> \"%s\" (ret=%zu)\n", d1, r1);

    char d2[10] = "abc"; // testar strlcat com espaço limitado
    size_t r2 = ft_strlcat(d2, "XYZ123", 7); // size pequeno
    printf("ft_strlcat -> \"%s\" (ret=%zu)\n", d2, r2);

    const char *s = "lorem ipsum";
    printf("ft_strchr('%c') -> \"%s\"\n", 'i', ft_strchr(s, 'i'));
    printf("ft_strrchr('%c') -> \"%s\"\n", 'm', ft_strrchr(s, 'm'));

    printf("ft_strncmp(\"abc\",\"abd\",2) = %d\n", ft_strncmp("abc","abd",2));
    printf("ft_strnstr(\"hello world\",\"wor\",8) = %s\n",
           ft_strnstr("hello world", "wor", 8) ? "FOUND" : "NOT FOUND");
}

static void test_memory(void)
{
    printf("\n== memory ==\n");

    char b[8]; ft_memset(b, 'A', 5); b[5] = '\0';
    printf("ft_memset -> \"%s\"\n", b);

    char s1[12] = "abcdef"; char s2[12] = {0};
    ft_memcpy(s2, s1, 6);
    printf("ft_memcpy -> \"%s\"\n", s2);

    char m1[8] = "abcdef";
    ft_memmove(m1 + 2, m1, 4); // overlap direita
    printf("ft_memmove right overlap -> \"%s\"\n", m1);

    char m2[8] = "abcdef";
    ft_memmove(m2, m2 + 2, 4); // overlap esquerda
    m2[4] = '\0';
    printf("ft_memmove left overlap  -> \"%s\"\n", m2);

    const char *mc = "abc\0def";
    void *hit = ft_memchr(mc, '\0', 7);
    printf("ft_memchr nul within 7 -> %s\n", hit ? "FOUND" : "NOT FOUND");

    printf("ft_memcmp(\"abc\",\"abd\",2) = %d\n", ft_memcmp("abc","abd",2));
}
static char mapi_toggle(unsigned int i, char c)
{
    (void)i;
    return (char)(c ^ 32);
}

static void iteri_altcaps(unsigned int i, char *c)
{
    if (!c || !*c) return;
    if (i % 2 == 0) *c = (char)ft_toupper((int)*c);
}

static void test_part2(void)
{
    printf("\n== part 2 ==\n");

    char *sub = ft_substr("banana", 2, 10);   // "nana"
    printf("ft_substr(\"banana\",2,10) -> \"%s\"\n", sub);
    free(sub);

    char *join = ft_strjoin("foo", "bar");    // "foobar"
    printf("ft_strjoin(\"foo\",\"bar\") -> \"%s\"\n", join);
    free(join);

    char *trim1 = ft_strtrim("   banana   ", " ");
    char *trim2 = ft_strtrim("xxx42xxx", "x");
    printf("ft_strtrim(spaces) -> \"%s\"\n", trim1);
    printf("ft_strtrim(x)      -> \"%s\"\n\n", trim2);
    free(trim1); free(trim2);

    printf("############### SPLIT ##################\n");
    char **sp1 = ft_split("  a  bb   c   ", ' ');
    char **sp2 = ft_split(",,,,a,,b,,,", ',');
    char **sp3 = ft_split("      ", ' ');
    printf("\n");
    printf("ft_split(\"  a  bb   c   \", ' '):\n"); print_split(sp1);
    printf("\n");
    printf("ft_split(\",,,,a,,b,,,\", ','):\n");    print_split(sp2);
    printf("\n");
    printf("ft_split(\"      \", ' '):\n\n");        print_split(sp3);
    free_split(sp1); free_split(sp2); free_split(sp3);

    printf("ft_itoa(0) -> \"%s\"\n", ft_itoa(0));
    char *i1 = ft_itoa(2147483647);
    char *i2 = ft_itoa(-2147483648);
    printf("ft_itoa(INT_MAX) -> \"%s\"\n", i1);
    printf("ft_itoa(INT_MIN) -> \"%s\"\n", i2);
    free(i1); free(i2);

    char map_src[] = "AbC";
    char *mapped = ft_strmapi(map_src, mapi_toggle);
    if (mapped) {
        printf("ft_strmapi(\"AbC\") -> \"%s\"\n", mapped);
        free(mapped);
    }

    char it_src[] = "hello";
    ft_striteri(it_src, iteri_altcaps);
    printf("ft_striteri alt-caps -> \"%s\"\n", it_src);
}
static void test_bonus(void)
{
    printf("\n== bonus (lists) ==\n");

    t_list *lst = ft_lstnew(ft_strdup("one"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));
    printf("ft_lstsize = %d\n", ft_lstsize(lst));
    printf("ft_lstlast = \"%s\"\n", (char *)ft_lstlast(lst)->content);

    t_list *mapped = ft_lstmap(lst, dup_ok, del_str);
    if (mapped && mapped->next && mapped->next->next)
        printf("ft_lstmap -> \"%s\", \"%s\", \"%s\"\n",
               (char*)mapped->content,
               (char*)mapped->next->content,
               (char*)mapped->next->next->content);

    ft_lstclear(&lst, del_str);
    ft_lstclear(&mapped, del_str);
}

int main(void)
{
    test_strings();
    test_memory();
    test_part2();
    test_bonus();
    return 0;
}
