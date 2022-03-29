#include "lv_i18n.h"  /*Assuming you have the translations here. (See below)*/

int main(void)
{
    /* Load translations & default locale (usually, done once) */
    lv_i18n_init(lv_i18n_language_pack);

    /* Set active locale (can be switched anytime) */
    lv_i18n_set_locale("en-GB");

    /* The translation of "title1" will be returned according to the selected locale.
     * ("title1" is only a unique ID of the text.) Example:
     * en-GB: "Main menu"
     * ru_RU: "Главное меню"
     */
    gui_set_text(label, _("line1\nline2\nline3"));

    /* According to `user_cnt` different text can be returned
     * en-GB `user_cnt == 1` : "One user is logged in"
     *        `user_cnt == 6` : "%d users are logged in"
     */
    char buf[64];
    sprintf(buf, _p("user_logged_in", user_cnt)), user_cnt);  /*E.g. buf == "7 users are logged in"*/
    gui_set_text(label, buf);

    return 0;
}

