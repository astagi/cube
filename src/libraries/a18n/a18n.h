#ifndef A18N_HH
#define A18N_HH

#include <stdlib.h>

class aJsonObject;

class a18n {

    public:
        a18n();
        a18n(char* data);
        a18n(char* locale, char* data);
        ~a18n();
	    void setData(char* data);
        void setLocale(char* data);
        const char* getLocale();
        const char* getTranslation(char* item);
        const char* getTranslation(char* locale, char* item);

    private:
        char* locale;
        char* data;
        aJsonObject* root;
        void init();
};

#endif
