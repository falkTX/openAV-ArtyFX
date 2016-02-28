// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "widget.h"

void FrizaWidget::cb_headerImage_i(Avtk::Image*, void*)
{
	//system("xdg-open http://www.openavproductions.com/artyfx#ducka");
}
void FrizaWidget::cb_headerImage(Avtk::Image* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_headerImage_i(o,v);
}

void FrizaWidget::cb_graph_i(Avtk::Hold* o, void*)
{
	float tmp = o->value();
	position->value( tmp );
//writePort(DRIVA_AMOUNT, tmp);

//volume->value( o->getVolume() );

	float a = o->getActive();
//writePort(BITTA_ACTIVE, a);
//printf("active %f\n", a );
}
void FrizaWidget::cb_graph(Avtk::Hold* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_graph_i(o,v);
}

void FrizaWidget::cb_duration_i(Avtk::Dial* o, void*)
{
	float tmp = o->value();
	graph->setDuration( tmp );
	writePort(FRIZA_LENGTH, tmp);
//printf("%f\n",tmp);
}
void FrizaWidget::cb_duration(Avtk::Dial* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_duration_i(o,v);
}

void FrizaWidget::cb_position_i(Avtk::Dial* o, void*)
{
	float tmp = o->value();
	graph->setPosition( tmp );
	writePort( FRIZA_POSITION , tmp);
//printf("%f\n",tmp);
}
void FrizaWidget::cb_position(Avtk::Dial* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_position_i(o,v);
}

void FrizaWidget::cb_Do_i(Avtk::Button* o, void*)
{
	float tmp = o->value();
	graph->value( tmp );
	writePort(FRIZA_DO_IT, tmp);
}
void FrizaWidget::cb_Do(Avtk::Button* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_Do_i(o,v);
}

void FrizaWidget::cb_vol_i(Avtk::Dial* o, void*)
{
	float tmp = o->value();
	graph->setVolume( tmp );
	writePort(FRIZA_VOLUME, tmp);
//printf("%f\n",tmp);
}
void FrizaWidget::cb_vol(Avtk::Dial* o, void* v)
{
	((FrizaWidget*)(o->parent()->user_data()))->cb_vol_i(o,v);
}

/**
   if the type of filter changes, this function will highlight the right button
*/
void FrizaWidget::update_button(int button)
{
}

FrizaWidget::FrizaWidget()
{
	{
		Fl_Double_Window* o = window = new Fl_Double_Window(160, 220);
		window->user_data((void*)(this));
		{
			headerImage = new Avtk::Image(0, 0, 160, 29, "header.png");
			headerImage->box(FL_NO_BOX);
			headerImage->color(FL_BACKGROUND_COLOR);
			headerImage->selection_color(FL_BACKGROUND_COLOR);
			headerImage->labeltype(FL_NORMAL_LABEL);
			headerImage->labelfont(0);
			headerImage->labelsize(14);
			headerImage->labelcolor((Fl_Color)20);
			headerImage->callback((Fl_Callback*)cb_headerImage);
			headerImage->align(Fl_Align(FL_ALIGN_CENTER));
			headerImage->when(FL_WHEN_RELEASE_ALWAYS);
			headerImage->setPixbuf(header.pixel_data,4);
		} // Avtk::Image* headerImage
		{
			graph = new Avtk::Hold(5, 36, 150, 126, "graph");
			graph->box(FL_UP_BOX);
			graph->color((Fl_Color)179);
			graph->selection_color(FL_INACTIVE_COLOR);
			graph->labeltype(FL_NO_LABEL);
			graph->labelfont(0);
			graph->labelsize(14);
			graph->labelcolor(FL_FOREGROUND_COLOR);
			graph->callback((Fl_Callback*)cb_graph);
			graph->align(Fl_Align(FL_ALIGN_BOTTOM));
			graph->when(FL_WHEN_CHANGED);
		} // Avtk::Hold* graph
		{
			duration = new Avtk::Dial(5, 172, 30, 31, "Time");
			duration->box(FL_NO_BOX);
			duration->color((Fl_Color)90);
			duration->selection_color(FL_INACTIVE_COLOR);
			duration->labeltype(FL_NORMAL_LABEL);
			duration->labelfont(0);
			duration->labelsize(10);
			duration->labelcolor(FL_FOREGROUND_COLOR);
			duration->callback((Fl_Callback*)cb_duration);
			duration->align(Fl_Align(FL_ALIGN_BOTTOM));
			duration->when(FL_WHEN_CHANGED);
		} // Avtk::Dial* duration
		{
			position = new Avtk::Dial(74, 171, 34, 34, "Position");
			position->box(FL_NO_BOX);
			position->color((Fl_Color)90);
			position->selection_color(FL_INACTIVE_COLOR);
			position->labeltype(FL_NORMAL_LABEL);
			position->labelfont(0);
			position->labelsize(10);
			position->labelcolor(FL_FOREGROUND_COLOR);
			position->callback((Fl_Callback*)cb_position);
			position->align(Fl_Align(FL_ALIGN_BOTTOM));
			position->when(FL_WHEN_CHANGED);
		} // Avtk::Dial* position
		{
			Avtk::Button* o = new Avtk::Button(114, 173, 43, 36, "Do it!");
			o->box(FL_UP_BOX);
			o->color(FL_BACKGROUND_COLOR);
			o->selection_color(FL_BACKGROUND_COLOR);
			o->labeltype(FL_NORMAL_LABEL);
			o->labelfont(0);
			o->labelsize(14);
			o->labelcolor(FL_FOREGROUND_COLOR);
			o->callback((Fl_Callback*)cb_Do);
			o->align(Fl_Align(FL_ALIGN_CENTER));
			o->when(FL_WHEN_RELEASE);
		} // Avtk::Button* o
		{
			vol = new Avtk::Dial(38, 173, 30, 31, "Vol");
			vol->box(FL_NO_BOX);
			vol->color((Fl_Color)90);
			vol->selection_color(FL_INACTIVE_COLOR);
			vol->labeltype(FL_NORMAL_LABEL);
			vol->labelfont(0);
			vol->labelsize(10);
			vol->labelcolor(FL_FOREGROUND_COLOR);
			vol->callback((Fl_Callback*)cb_vol);
			vol->align(Fl_Align(FL_ALIGN_BOTTOM));
			vol->when(FL_WHEN_CHANGED);
		} // Avtk::Dial* vol
		window->color( fl_rgb_color( 17, 17, 17) );
		close_cb( o, 0 );
		window->end();
	} // Fl_Double_Window* window
}

void FrizaWidget::idle()
{
	Fl::check();
	Fl::flush();
}

int FrizaWidget::getWidth()
{
	return window->w();
}

int FrizaWidget::getHeight()
{
	return window->h();
}

void FrizaWidget::writePort(int port, float& value)
{
	//cout << "port " << port << " value " << value << endl;
	write_function(controller, port, sizeof(float), 0, &value);
}

void FrizaWidget::close_cb(Fl_Widget* o, void*)
{
	if ((Fl::event() == FL_KEYDOWN || Fl::event() == FL_SHORTCUT) && Fl::event_key() == FL_Escape) {
		return; // ignore ESC
	} else {
		o->hide();
	}
}
