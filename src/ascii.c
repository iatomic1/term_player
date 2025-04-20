#include "term_player.h"

/**
 * print_author - Prints my name in stdout with ascii art.
 */
void print_author(void)
{
	printf("\033[32m");
	printf("Born from the void, shaped by Atomic\n");
	printf("\033[0m");
}

/**
 * print_player - Prints the music player with ascii art.
 * @selected: The currently playing.
 */
void print_player(music_file_t *selected)
{
	print_author();
	printf("\n");
	printf("\033[32m");
	printf("Previous: %s\n", selected->sprev ? selected->sprev->filename
											 : "Nothing lol");
	printf("  ____________________________\n"
		   " /|............................|\n"
		   "| |:                           :|\n"
		   "| |:  %-25s|\n"
		   "| |:       ,-.   _____   ,-.    :|\n"
		   "| |:      ( `)) [_____] ( `))   :|\n"
		   "|v|:       `-`   ' ' '   `-`    :|\n"
		   "|||:       ,______________.     :|\n"
		   "|||...../::::o::::::o::::\\.....|\n"
		   "|^|..../:::O::::::::::O:::\\....|\n"
		   "|/`---/--------------------`---|\n"
		   "`.___/ /====/ /=//=/ /====/____/\n"
		   "      `--------------------'\n",
		   selected->filename);
	printf("Next: %s\n", selected->snext ? selected->snext->filename
										 : "Nothing lol");
	printf("\033[0m");
}
