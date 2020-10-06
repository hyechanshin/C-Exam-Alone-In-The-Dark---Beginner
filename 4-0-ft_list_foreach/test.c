#include "test.h"
 
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *lst;

	lst = begin_list;
	while (lst)
	{
		(*f)(lst->data);
		lst = lst->next;
	}
}

void print_arr(int *tab, unsigned int size)
{
unsigned int i = 0;
while (i < size)
{
    printf("%d, ", tab[i]);
     ++i;
}
printf("\n");
}

int      main(void)
{
int tab[] = { 5, -4, 3, -2, 1, 0 };
unsigned int size = sizeof(tab) / sizeof(*tab);
 
print_arr(tab, size);
sort_int_tab(tab, size);
print_arr(tab, size);