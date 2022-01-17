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


#endif
