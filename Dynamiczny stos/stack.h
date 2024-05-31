//
// Created by root on 5/30/22.
//

#ifndef INC_10_4_STACK_H
#define INC_10_4_STACK_H
struct stack_t
{
    char *sentence;
    struct stack_t *prev;
};
int stack_init(struct stack_t **stack);
int stack_push(struct stack_t **stack, char *value);
char *stack_pop(struct stack_t **stack, int *err_code);
void stack_destroy(struct stack_t **stack);
int stack_load(struct stack_t **stack, const char *filename);
int stack_save(const struct stack_t *stack, const char *filename);
#endif //INC_10_4_STACK_H
