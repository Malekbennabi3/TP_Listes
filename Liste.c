#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	struct Cell{
		
		int val;
		struct Cell *suiv;
		struct Cell *prev;
		
	};

	struct Cell *tete;


    struct liste{
    	
    	Cell *prem;
    	Cell *dern;
    	
	};	
	
	typedef struct liste list;
	
	
	void initialise(liste *l){
		
		struct Cell *cell;
		struct liste *liste;

		
		cell=malloc(sizeof(struct Cell));
		
		cell->prev=null;
		(*cell).suiv=null;
		
		cell->val=0;
		
        liste->prem=cell;
        (*liste).dern=cell;

		
	}
	
	int estVide(const Liste * l){
		
		struct Cell *i;
		int cpt=0;
		
		i=l->prem;
		
		while(i->suiv !=null){
			
			cpt++;
		}
		
		int cpt=cpt>0?0:1;
		
		return cpt;
		
	}
	
	
	
	return 0;
}
