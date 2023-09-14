#pragma once

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Chart.H>
#include <FL/Fl_Round_Button.H>


void plot_cb (Fl_Widget*, void*);
void R_cb    (Fl_Widget*, void*);
void Im_cb   (Fl_Widget*, void*);

class Form
{
public:
	Form();
	void show(void) { _win->show(); }

public:
	Fl_Window   *_win;
	Fl_Input	*_h;
	Fl_Input	*_m;
	Fl_Input	*_L;
	Fl_Input	*_n;
	Fl_Input	*_no_of_points;
	Fl_Input	*_x1;
	Fl_Input	*_x2;
	Fl_Chart	*_wave_window;
	Fl_Button   *_plot;
	Fl_Round_Button *_R;
	Fl_Round_Button *_Im;
};

struct pass {
	void* h;
	void* m;
	void* L;
	void* n;
	void* x1;
	void* x2;
	void* no_of_points;
	void* _wave_window;
	void* R;
	void* Im;
};
