/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include "/home/luis/.cache/wal/colors-wal-dmenu.h"

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1; /* -c option; centers dmenu on screen */
static int min_width = 700; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Regular:size=18"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
