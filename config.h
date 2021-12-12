/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include <gcolors.h>

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    //"monospace:size=10",
    "Ubuntu:size=13",
    "Noto Color Emoji:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
	[SchemeNorm] = { "#aaa", COL_0 },
	[SchemeSel] = { COL_W0, COL_FOSC },
    [SchemeOut] = { COL_BG_0, COL_BLAU },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
