#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>


int clic_chiffre1(int* liste_chiffre){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(90 < x && x < 105 && 100< y && y < 115){
    return liste_chiffre[0];
  }else{
    return -1;
  }
}
int clic_chiffre2(int* liste_chiffre){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(120 < x && x < 135 && 100< y && y < 115){
    return liste_chiffre[1];
  }else{
    return -1;
  }
}
int clic_chiffre3(int* liste_chiffre){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(150 < x && x < 165 && 100< y && y < 115){
    return liste_chiffre[2];
  }else{
    return -1;
  }
}
int clic_chiffre4(int* liste_chiffre){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(180 < x && x < 195 && 100< y && y < 115){
    return liste_chiffre[3];
  }else{
    return -1;
  }
}
int clic_chiffre5(int* liste_chiffre){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(210 < x && x < 225 && 100< y && y < 115){
    return liste_chiffre[4];
  }else{
    return -1;
  }
}

char * clic_op(){
  int x, y;
  char* op;
  MLV_wait_mouse(&x, &y);

  if(250 < x && x < 265 && 120 < y && y < 135){
    op="+";
  }
  if(250 < x && x < 265 && 160 < y && y < 175){
    op="-";
  }
  if(250 < x && x < 265 && 200 < y && y < 215){
    op="*";
  }
  if(250 < x && x < 265 && 240 < y && y < 255){
    op="/";
  }
  return op;
}

char * clic_recommencer(){
  int x, y;
  MLV_wait_mouse(&x, &y);

  if(10 < x && x < 40 && 400< y && y < 415){
    return "recommencer";
  }
  else{
    return "-1";
  }
}
char * clic_aide(){
  int x, y;
  MLV_wait_mouse(&x, &y);
  if(10 < x && x < 20 && 10< y && y < 30){
    return "aide";
  }
  else{
    return "-1";
  }
}
