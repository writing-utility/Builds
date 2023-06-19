/* user and group to drop privileges to */
static const char *user  = "amen";
static const char *group = "amen";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1c1d21",   /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
