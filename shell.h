#ifndef SHELL_H
#define SHELL_H

int main(int argc, char *argv[]);
char *my_getline();
char **split_arguments(char *command);
int main();
int atoi(const char* str);
int fork1(void);
struct cmd *parsecmd(char*);
int main(void)
struct cmd* redircmd(struct cmd *subcmd, char *file, int type);
struct cmd* pipecmd(struct cmd *left, struct cmd *right;)
int gettoken(char **ps, char *es, char **q, char **eq);
int peek(char **ps, char *es, char *toks);
struct cmd *parseline(char**, char*);
struct cmd *parsepipe(char**, char*);
struct cmd *parseexec(char**, char*);
char *mkcopy(char *s, char *es);
struct cmd* parseline(char **ps, char *es);
struct cmd* parsepipe(char **ps, char *es);
struct cmd* parseredirs(struct cmd *cmd, char **ps, char *es);
struct cmd* parseexec(char **ps, char *es);



#endif
