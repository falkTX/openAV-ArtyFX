// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef masha_widget_h
#define masha_widget_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"
using namespace std;
#include "../dsp/masha.hxx"
#include "avtk.h"
#include <stdio.h>
#include "header.c"
#include <iostream>

class MashaUI {
public:
  void update_button(int button);
  MashaUI();
  Fl_Double_Window *window;
  Avtk::Image *headerImage;
private:
  void cb_headerImage_i(Avtk::Image*, void*);
  static void cb_headerImage(Avtk::Image*, void*);
public:
  Avtk::Masher *graph;
private:
  void cb_graph_i(Avtk::Masher*, void*);
  static void cb_graph(Avtk::Masher*, void*);
public:
  Avtk::Dial *time;
private:
  void cb_time_i(Avtk::Dial*, void*);
  static void cb_time(Avtk::Dial*, void*);
public:
  Avtk::Dial *volume;
private:
  void cb_volume_i(Avtk::Dial*, void*);
  static void cb_volume(Avtk::Dial*, void*);
public:
  Avtk::Dial *replace;
private:
  void cb_replace_i(Avtk::Dial*, void*);
  static void cb_replace(Avtk::Dial*, void*);
public:
  LV2UI_Write_Function write_function; 
  LV2UI_Controller controller; 
  void idle();
  int getWidth();
  int getHeight();
private:
  float gain; 
  float cutoff; 
  float Q; 
public:
  void writePort(int port, float& value);
};
#endif
