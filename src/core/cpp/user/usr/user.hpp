#ifndef user_hpp
#define user_hpp
#include <iostream>
class user{
    private:
    short unsigned age_;
    std::string gender_, first_name_, last_name_,
    phone_number_, email_, password_, token_;
    bool is_want_TFA_;
    long long id_;
    public:
    user();
    ~user();
    short unsigned get_age(bool adm_answ);
    std::string get_gender(bool adm_answ);
    std::string get_first_name(bool adm_answ);
    std::string get_last_name(bool adm_answ);
    std::string get_phone_number(bool adm_answ);
    std::string get_email(bool adm_answ);
    bool ask_for_TFA(bool choice);
    long long get_id();
    void TFA();

};
#endif