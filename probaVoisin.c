// fonction probabilité du voisin

void proba voisin(int grille[NB_HT][NB_LG],int proba_bateau[NB_HT][NB_LG],int x,int y){
	if(grille[y][x]==-2){
		if(y==0){
			if(x>0 && x<9){
				if(grille[y][x-1]>-1)
					proba_bateau[y][x-1]*=4;
				if(grille[y][x+1]>-1)
					proba_bateau[y][x+1]*=4;
				if(grille[y+1][x]>-1)
					proba_bateau[y+1][x]*=4;
			}if(x==0){
				if(grille[y][x+1]>-1)
					proba_bateau[y][x+1]*=4;
				if(grille[y+1][x]>-1)
					proba_bateau[y+1][x]*=4;
			}if(x==9){
				if(grille[y][x-1]>-1)
					proba_bateau[y][x-1]*=4;
				if(grille[y+1][x]>-1)
					proba_bateau[y+1][x]*=4;
			}
		}
	}
}




