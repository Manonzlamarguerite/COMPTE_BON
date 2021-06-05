#include <stdlib.h>
#include <stdio.h>
#include "graphisme.h"
#include "clic.h"
#include <MLV/MLV_all.h>

int main(){
   MLV_create_window("Compre est bon", "Compte est bon", 300, 450);

   fenetre();
   MLV_actualise_window();


  MLV_wait_seconds(3000);
  return 0;
}
