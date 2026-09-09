static const char col_bg[]     = "#0E060F";
static const char col_bg_alt[] = "#AF7DC1";
static const char col_fg[]     = "#0E060F";
static const char col_fg_dim[] = "#eddfed";
static const char col_accent[] = "#956AA3";

static const char *colors[][3] = {
    /*               fg          bg          border     */
    [SchemeNorm] = { col_fg_dim, col_bg,    col_bg_alt },
    [SchemeSel]  = { col_fg,     col_bg_alt, col_accent },
};
