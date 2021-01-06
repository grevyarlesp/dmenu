/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Sarasa Gothic J:size=10",
    "Noto Color Emoji:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = { "#d5c4a1", "#1d2021" },
    [SchemeSel] = { "#1d2021", "#83a598" },
    [SchemeSelHighlight] = { "#fb4934", "#83a598" },
    [SchemeNormHighlight] = { "#fb4934", "#1d2021" },
    [SchemeOut] = { "#1d2021", "#8ec07c" },
    [SchemeMid] = { "#d5c4a1", "#1d2021" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;
static unsigned int columns    = 5;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
