#ifndef VALEC_HPP
#define VALEC_HPP

class valec{
    public:
        valec(); //konstrukotr

        valec(const valec&); //kopirovaci konstruktor

        valec(float, float); //okstruktor s parametry

        ~valec(); //destruktor

        float get_r()const;
        float get_v()const;
        float get_o()const;

        bool set_v(float);
        bool set_r(float);
        bool set_o(float);
        bool set_r_v(float, float);

        float objem()const;
        float povrch()const;
        float obsahPod()const;
        float obsahPlas()const;
        float vyskaVody()const;

    private:
        float r,v;
        float o;
        bool kontrolaAsi(int)const;
};

#endif /* VALEC_HPP */

