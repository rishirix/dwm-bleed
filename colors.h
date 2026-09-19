static const char col_bg[]     = "#000002";
static const char col_bg_alt[] = "#E10C22";
static const char col_fg[]     = "#f4d8b2";
static const char col_fg_dim[] = "#f4d8b2";
static const char col_accent[] = "#D30C23";

static const char *colors[][3] = {
    /*               fg          bg          border     */
    [SchemeNorm] = { col_fg_dim, col_bg,    col_bg_alt },
    [SchemeSel]  = { col_fg,     col_bg_alt, col_accent },
};
