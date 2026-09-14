static const char col_bg[]     = "#0A1A1A";
static const char col_bg_alt[] = "#70726E";
static const char col_fg[]     = "#0A1A1A";
static const char col_fg_dim[] = "#dbd3ce";
static const char col_accent[] = "#5F635E";

static const char *colors[][3] = {
    /*               fg          bg          border     */
    [SchemeNorm] = { col_fg_dim, col_bg,    col_bg_alt },
    [SchemeSel]  = { col_fg,     col_bg_alt, col_accent },
};
