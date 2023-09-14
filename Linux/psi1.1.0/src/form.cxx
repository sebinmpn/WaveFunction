#include <mgl2/fltk.h>
#include <iostream>

#include "../include/form.h"
#include "../include/Simulation.h"

Form::Form()
{
	_win  = new Fl_Window (1400, 600, "Psi for Anna");
	_win->begin();
	_win->labeltype(FL_SHADOW_LABEL);
	_win->labelfont(3);

			  _h  = new Fl_Input ( 50,  55, 100, 30, "h");
			  _m  = new Fl_Input ( 50, 100,  95, 35, "m");
			  _L  = new Fl_Input ( 50, 150, 100, 35, "L");
			  _n  = new Fl_Input ( 50, 205,  95, 35, "n");
			  _x1 = new Fl_Input ( 30, 390,  65, 35, "x1");
			  _x2 = new Fl_Input (125, 390,  60, 35, "x2");
	_no_of_points = new Fl_Input (110, 335,  70, 35, "no of points");

	_R  = new Fl_Round_Button ( 30, 450, 70, 15, "R");
	_Im = new Fl_Round_Button (105, 450, 70, 15, "Im");

	_R->down_box(FL_ROUND_DOWN_BOX);
	_Im->down_box(FL_ROUND_DOWN_BOX);

	_plot = new Fl_Button (75, 480, 95, 50, "Plot");
	_plot->shortcut(0xff0d);
	_plot->color((Fl_Color)25);
	_plot->selection_color(FL_RED);
	_plot->labeltype(FL_EMBOSSED_LABEL);
	_plot->labelfont(1);
	_plot->labelsize(20);
	_plot->labelcolor((Fl_Color)80);

	_wave_window = new Fl_Chart (225, 3, 1100, 580, "wave");
	_wave_window->type(FL_LINE_CHART);
    _wave_window->autosize(1);
// 	_wave_window->bounds(-100,100);


	_h->insert("1");
	_m->insert("1");
	_L->insert("1");
	_n->insert("1");
	_x1->insert("0");
	_x2->insert("1");
	_no_of_points->insert("100");
	_R->value(1);

	_h->input_type(1); //1 int
	_m->input_type(1);
	_L->input_type(1);
	_x1->input_type(1);
	_x2->input_type(1);
	_n->input_type(2); // 2 int
	_no_of_points->input_type(2);



	pass* _pass = new pass {
		  _h,
		  _m,
		  _L,
		  _n,
		  _x1,
		  _x2,
		  _no_of_points,
		  _wave_window,
		  _R,
		  _Im
	};

	_plot->callback(plot_cb, _pass);
	_R->callback (R_cb, _pass);
	_Im->callback (Im_cb, _pass);

}

//***********************************************************************//

/*
int graph(mglGraph *gr)
{
      gr->Title("MathGL Demo");
      gr->SetOrigin(0, 0);
      gr->SetRanges(0, 10, -2.5, 2.5);
      gr->FPlot("sin(1.7*2*pi*x) + sin(1.9*2*pi*x)", "r-4");
      gr->Axis();
      gr->Grid();
     return 0;
}
*/

double i = 0;
void plot_cb (Fl_Widget* in, void* values_pass)
{
	pass* passed_v =  (pass*) values_pass;
	Fl_Input* h_v  = (Fl_Input*) passed_v->h;
	Fl_Input* m_v  = (Fl_Input*) passed_v->m;
	Fl_Input* n_v  = (Fl_Input*) passed_v->n;
	Fl_Input* L_v  = (Fl_Input*) passed_v->L;
	Fl_Input* x1_v = (Fl_Input*) passed_v->x1;
	Fl_Input* x2_v = (Fl_Input*) passed_v->x2;
	Fl_Input* no_of_point_v = (Fl_Input*) passed_v->no_of_points;
	Fl_Round_Button* _R_btn = (Fl_Round_Button*) passed_v->R;
	Fl_Round_Button* _Im_btn = (Fl_Round_Button*) passed_v->Im;


	double h  = std::stod ((std::string) h_v->value());
	double m  = std::stod ((std::string) m_v->value());
	double n  = std::stod ((std::string) n_v->value());
	double L  = std::stod ((std::string) L_v->value());
	double x1 = std::stod ((std::string) x1_v->value());
	double x2 = std::stod ((std::string) x2_v->value());
	double no_of_points = std::stod ((std::string) no_of_point_v->value());

	Fl_Chart* w_w = (Fl_Chart*) passed_v->_wave_window;

	auto wave = simulate (h, m, n, L, x1, x2, no_of_points);

	w_w->clear();
	if(_R_btn->value())
		for (auto point : wave )
			w_w->add (point.x(), "", 1);
	else
		for (auto point : wave )
			w_w->add (point.y(), "", 1);

	//mglFLTK gr(graph, "MathGL demo window title");
	//gr.Run();
}


void R_cb (Fl_Widget* in, void* values_pass)
{
	pass* passed_v =  (pass*) values_pass;
	Fl_Round_Button* _R_btn = (Fl_Round_Button*) passed_v->R;
	Fl_Round_Button* _Im_btn = (Fl_Round_Button*) passed_v->Im;

	_Im_btn->value(0);
}

void Im_cb (Fl_Widget* in, void* values_pass)
{
	pass* passed_v =  (pass*) values_pass;
	Fl_Round_Button* _R_btn = (Fl_Round_Button*) passed_v->R;
	Fl_Round_Button* _Im_btn = (Fl_Round_Button*) passed_v->Im;

	_R_btn->value(0);
}
