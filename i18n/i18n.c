#include <stdio.h>
#include <locale.h>
#include <libintl.h>

#define PACKAGE              "i18n-test"
#define LOCALEDIR            "/usr/share/locale/"

int main(int argc, char *argv[])
{
    char *locale = "";

    if (argc > 1) {
        locale = argv[1];
    }

    setlocale(LC_ALL, locale);
    bindtextdomain(PACKAGE, LOCALEDIR);
    textdomain(PACKAGE);

    printf("%s\n", gettext("Hello world!"));

    return 0;
}
