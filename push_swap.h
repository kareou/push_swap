/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:54:58 by mkhairou          #+#    #+#             */
/*   Updated: 2023/02/06 13:04:08 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./gnl/get_next_line.h"
# include "./libft/libft.h"
# include "./printf/ft_printf.h"
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		*array;
	int		size;

}			t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
}			t_stacks;
///////////////////////////////////////
///////////////////////////////////////
///////////// R-U-L-E-S ///////////////
///////////////////////////////////////
///////////////////////////////////////

void		sa(t_stack *m_stack);
void		sb(t_stack *m_stack);
void		ss(t_stacks *a);
t_stacks	*pb(t_stacks *stk);
t_stacks	*pa(t_stacks *stk);
void		ra(t_stack *stk);
void		rb(t_stack *stk);
void		rr(t_stacks *stk);
void		rra(t_stack *stk);
void		rrb(t_stack *stk);
void		rrr(t_stacks *stk);

///////////////////////////////////////
///////////////////////////////////////
///////////// U-T-I-L-S ///////////////
///////////////////////////////////////
///////////////////////////////////////

int			c_count(const char *s, const char c);
char		**number_handel(char **av, int ac);
void		print_stack(t_stacks *stack);
t_stack		*resize(t_stack *sta);
t_stack		*po_p(t_stack *sta);
int			semi_len(int *a);
t_stack		*po_pb(t_stack *sta);
t_stack		*resize_b(t_stack *sta);
int			find_smallest(t_stacks *sta);
int			*tmp_sort(t_stacks *sta);
int			find_pos(int *a, int number);
int			find_indx(t_stacks *sta, int number);
int			find_bigest(t_stacks *sta);
int			find_pos_extra(int *a, int number);
int			check_if_alpha(char **a);
int			check_doubel(char **a);
void		free_all(t_stacks *sta, char **a, int i, int sign);
int			numbers_len(char **a);
void		fill_stack(char **a, t_stacks *m_stack);
void		free_number(char **a, int i);
int			sorted_rev(t_stacks *sta);
void		sort_rev(t_stacks *sta);

///////////////////////////////////////////
///////////////////////////////////////////
///////////// S-O-R-T-I-N-G ///////////////
///////////////////////////////////////////
///////////////////////////////////////////

t_stacks	*sort_three(t_stacks *sta);
t_stacks	*sort_five(t_stacks *sta);
void		big_sort(t_stacks *sta);
void		extra_big_sort(t_stacks *sta);

///////////////////////////////////////////
///////////////////////////////////////////
//////////////// B-O-N-U-S ////////////////
///////////////////////////////////////////
///////////////////////////////////////////

void		do_move(char *a, t_stacks *sta, char **number);
void		check_rules(char *a, t_stacks *sta, char **number);
void		check_stack(t_stacks *sta, int old_size);
void		sa_bonus(t_stack *m_stack);
void		sb_bonus(t_stack *m_stack);
void		ss_bonus(t_stacks *a);
t_stacks	*pb_bonus(t_stacks *stk);
t_stacks	*pa_bonus(t_stacks *stk);
void		ra_bonus(t_stack *stk);
void		rb_bonus(t_stack *stk);
void		rr_bonus(t_stacks *stk);
void		rra_bonus(t_stack *stk);
void		rrb_bonus(t_stack *stk);
void		rrr_bonus(t_stacks *stk);

#endif