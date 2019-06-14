#ifndef STUFF_H
#define STUFF_H

void color(int x);
void error_input(void);
void hidden(void);
void you_win(int random[]);
void keep_score(FILE *f,int attempt);
int best_score(FILE *file);
void last_score(FILE *file);
void scores_function(FILE *file);
void rules(void);
void mainMenu(void);
void selected(int item,int pos);

#endif