#include <stdlib.h>
#include <stdio.h>
#include <MLV/MLV_all.h>
#include "graphisme.h"
#define NB_CHIFFRE 5

void bouton_plus(){
  MLV_draw_adapted_text_box(
    250,120,
    "+",
    4,
    MLV_COLOR_RED,
    MLV_COLOR_RED,
    MLV_COLOR_BLACK,
    MLV_TEXT_CENTER
  );
}

void bouton_moins(){
  MLV_draw_adapted_text_box(
    250,160,
    "-",
    6,
    MLV_COLOR_RED,
    MLV_COLOR_RED,
    MLV_COLOR_BLACK,
    MLV_TEXT_CENTER
  );
}

void bouton_fois(){
  MLV_draw_adapted_text_box(
    250,200,
    "*",
    6,
    MLV_COLOR_RED,
    MLV_COLOR_RED,
    MLV_COLOR_BLACK,
    MLV_TEXT_CENTER
  );
}

void bouton_div(){
  MLV_draw_adapted_text_box(
    250,240,
    "/",
    6,
    MLV_COLOR_RED,
    MLV_COLOR_RED,
    MLV_COLOR_BLACK,
    MLV_TEXT_CENTER
  );
}

void bouton_aide(){
  MLV_draw_adapted_text_box(
    10,10,
    "Aide",
    4,
    MLV_COLOR_GREY,
    MLV_COLOR_WHITE,
    MLV_COLOR_GREY,
    MLV_TEXT_CENTER
  );
}

void bouton_recommencer(){
  MLV_draw_adapted_text_box(
    10,400,
    "Recommencer",
    4,
    MLV_COLOR_BLACK,
    MLV_COLOR_BLACK,
    MLV_COLOR_GREY,
    MLV_TEXT_CENTER
  );
}

void chiffre_total(int chiffre_t){
  MLV_draw_adapted_text_box(
    145, 65,
    "%d",
    4,
    MLV_COLOR_BLACK,
    MLV_COLOR_BLACK,
    MLV_COLOR_RED,
    MLV_TEXT_CENTER,
    chiffre_t
  );
}

void liste_chiffre(int* liste_chiffre){
  int i;
  int x;

  for(i=0; i< NB_CHIFFRE; i++){
    x=90+i*30;
    MLV_draw_adapted_text_box(
      x, 100,
      "%d",
      4,
      MLV_COLOR_RED,
      MLV_COLOR_RED,
      MLV_COLOR_BLACK,
      MLV_TEXT_CENTER,
      liste_chiffre[i]
    );
  }
}

void fenetre(){
  int list[5];
  int i;

  MLV_draw_adapted_text_box(
    80,20,
    "Le compte est bon ?",
    9,
    MLV_COLOR_RED,
    MLV_COLOR_WHITE,
    MLV_COLOR_BLACK,
    MLV_TEXT_CENTER
  );
  chiffre_total(10);
  for(i=0;i<5; i++){
    list[i]=i;
  }
  liste_chiffre(list);
  bouton_plus();
  bouton_moins();
  bouton_fois();
  bouton_div();
  bouton_aide();
  bouton_recommencer();
}
