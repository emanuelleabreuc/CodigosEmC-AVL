No* balancear(No *a) {
    atualiza(a);
    if (fb(a) == -2) {                     /* esquerda pesada */
        if (fb(a->esq) <= 0) return rotDir(a);
        return rotDuplaDir(a);
    }
    if (fb(a) == 2) {                      /* direita pesada */
        if (fb(a->dir) >= 0) return rotEsq(a);
        return rotDuplaEsq(a);
    }
    return a;
}