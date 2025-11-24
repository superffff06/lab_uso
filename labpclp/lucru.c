#include <stdio.h>
#include <stdlib.h>

typedef struct field_of_ships {
	char reference,attacked;
} FOS;

//verifica daca niste coordonate se afla in interiorul matricii
int inmatrix(int si, int sj, int n, int m)
{
	if (si >= 0 && sj >= 0 &&  si < n && sj < m) {
		return 1;
	}
	return 0;
}

//returneaza tipul navei pe baza numarului de patratele ocupate
char *reverse_ship_type(int x)
{
	if (x == 1) {
		char *aux = "Albacore";
		return aux;
	}
	if (x == 2) {
		char *aux = "Laffey";
		return aux;
	}
	if (x == 3) {
		char *aux = "Belfast";
		return aux;
	}
	if (x == 4) {
		char *aux = "Yamato";
		return aux;
	}
	if (x == 5)  {
		char *aux = "Shinano";
		return aux;
	}
	return NULL;
}

//verifica daca o nava poate fi pusa corect prin verificarea 
//pozitiilor pe care le ocupa
int ver_poz(int diri, int dirj, int n, int m, int **mat, int si, int sj, int tip_nava){
	char *v_or_o;
	if (diri == 0) {
		char *aux= "orizontal";
		v_or_o = aux;
	}
	else {
		char *aux = "vertical";
		v_or_o = aux;
	}
	char *nume_nava = reverse_ship_type(tip_nava);
	if(mat[si][sj] != '0' || !inmatrix(si,sj,n,m)){
		printf("Nava %s nu poate fi amplasata %s la coordonatele (%d,%d)\n", 
		nume_nava, v_or_o, si, sj);
		return 0;
	}
	int i = si;
	int j = sj;
	for(int e = 0 ; e < tip_nava ; e++) {
		i = i + diri;
		j = j + dirj;
		if(mat[i][j] != '0' || !inmatrix(i,j,n,m)){
		printf("Nava %s nu poate fi amplasata %s la coordonatele (%d,%d)\n", 
		nume_nava, v_or_o, i, j);
		return 0;
	}
	}
	i = si;
	j = sj;
	mat[i][j] = '0' + tip_nava;
	for (int e = 0 ; e < tip_nava ; e++) {
		i = i + diri;
		j = j + dirj;
		mat[i][j] = '0' + tip_nava;
	}
	return 1;
}

//citeste atacurile si gaseste astfel castigatorul pentru fiecare runda
void simulate_attacks(int **mat_1, int **mat_2, int n, int m) {
	int attack_i, attack_j;
	scanf("%d %d", &attack_i, &attack_j);
	int game_over = 0;
	int player_num = 1;
	//declar matricile de atac
	while (!game_over) {
		if (player_num == 1) {
			if(attack_on(i ,j , &game_over , mat_2, atk_mat_2) {

			}
		}
	}


}
int main(void){

	for (int e = 0 ; e < nr_teste ; e++) {
		simulate_attacks(mat_1, mat_2 , n , m);
	}
}