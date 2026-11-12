typedef struct no {
    int info;
    struct no *esq;
    struct no *dir;
} No;

int busca(No *a, int x) {
    while (a != NULL) {
        if (x == a->info) {
            return 1;
        }
        a = (x < a->info) ? a->esq : a->dir;
    }
    return 0;
}