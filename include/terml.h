#ifndef TERML_TERML_H
#define TERML_TERML_H

#ifdef __cplusplus
extern "C"
{
#endif

typedef void (*terml_main_callback)  ();
typedef int  (*terml_quit_callback)  ();
typedef void (*terml_key_callback)   (char code);
typedef void (*terml_resize_callback)(
	unsigned int previous_width,
	unsigned int previous_height,
	unsigned int new_width,
	unsigned int new_height
);

int terml_init();
int terml_deinit();

unsigned int terml_get_width();
unsigned int terml_get_height();

char terml_get(unsigned int x, unsigned int y, int* foreground_color, int* background_color);
void terml_set(unsigned int x, unsigned int y, char c, int foreground_color, int background_color);
void terml_flush();

void terml_set_main_callback(terml_main_callback);
void terml_set_quit_callback(terml_quit_callback);
void terml_set_key_callback(terml_key_callback);
void terml_set_resize_callback(terml_resize_callback);

void terml_start();
void terml_stop();

const char* terml_get_error();

#ifdef __cplusplus
}
#endif

#endif//TERML_TERML_H