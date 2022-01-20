#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

# define DESC		0
# define ASC		1

# define PUSH		0
# define RA			1
# define RB			2

typedef struct s_list
{
	struct s_node	*head;
	struct s_node	*tail;
}					t_list;

typedef struct s_node
{
	int				content;
	struct s_node 	*next;
	struct s_node	*prev;
}					t_node;

typedef	struct s_stack
{
	struct s_list	*list;
	char			name;
	size_t			size;
}					t_stack;

typedef struct s_array
{
	int				*array;
	size_t			size;
}					t_array;

static size_t space_skipper(const char *str);
long long ft_atoll(const char *str);
void *ft_memset(void *b, int c, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t len);
int ft_strlen(const char *str);
static	int	strChecker(char *new);
char *ft_substr(char const *s, unsigned int start, size_t len);
t_list	*initList(void);
int	addBack(t_list *tList, int value);
t_node	*popBack(t_list *list);
static	void	clearNodes(t_list *list, t_node **curNode);
void	clearList(t_list **list);
void	addBackNode(t_list *tList, t_node *curNode);
t_stack *initStack(char name);
int	sa(t_stack *aStack);
int	sb(t_stack *bStack);
int	ss(t_stack *aStack, t_stack *bStack);
int pa(t_stack *aStack, t_stack *bStack);
int pb(t_stack *aStack, t_stack *bStack);
void	rb(t_stack *bStack);
void	rr(t_stack *aStack, t_stack *bStack);
static int	parseWithString(t_list *ret, char *s);
static int	getError(void);
static void pushToStack(t_list *aStack, t_list *list);
static int	getError(void);
static void pushToStack(t_list *aStack, t_list *list);
int	main(int argc, char **argv);


#endif
