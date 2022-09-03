/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include <gcolors.h>

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "Ubuntu:size=13";
static const char *fonts[] = {
    //"monospace:size=10",
    font,
    "Noto Color Emoji:size=11"
};
static char *prompt       = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
 
static char *colors[SchemeLast][2] = {
    /*               fg           bg      */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight     = 24;
static unsigned int min_lineheight = 8;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",           STRING,  &font },
	{ "normfgcolor",    STRING,  &normfgcolor },
	{ "normbgcolor",    STRING,  &normbgcolor },
	{ "selfgcolor",     STRING,  &selfgcolor },
	{ "selbgcolor",     STRING,  &selbgcolor },
	{ "prompt",         STRING,  &prompt },
	{ "lineheight",     INTEGER, &lineheight },
	{ "min_lineheight", INTEGER, &min_lineheight },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
