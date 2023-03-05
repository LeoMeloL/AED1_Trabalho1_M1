#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool judgeCircle(char * moves){

    int y = 0, x = 0;
    bool t;
    int tam = strlen(moves);

    if (tam % 2 != 0){
        t = false;
        return t;
    }

    for (int i = 0; i < tam ; ++i) {

    if (moves[i] == 'D' || moves[i] == 'd') {
        --x;
    }
    if (moves[i] == 'U' || moves[i] == 'u') {
        ++x;
    }
    if (moves[i] == 'L' || moves[i] == 'l'){
        --y;
    }
    if (moves[i] == 'R' || moves[i] == 'r'){
        ++y;
    }

    }

    if (x == 0 && y == 0){
        t = true;
        return t;
    } else {
        t = false;
        return t;
    }

}

int main(){
    char *moves = (char *)malloc (100 * sizeof(char));
    bool a;

    printf("Digite os movimentos: ");
    scanf("%s", moves);

    a = judgeCircle(moves);

    free(moves);

    if (a == true){
        printf("O robo retornou a posicao inicial");
    } else {
        printf("O robo nao retornou a posicao inicial");
    }
    return 0;
}