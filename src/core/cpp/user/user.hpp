#ifndef user_hpp
#define user_hpp
#include <iostream>
#include "C:\programming\talkie\src\utils\utils.hpp"
class user{
    private:
    short unsigned age_;
    std::string gender_, first_name_, last_name_,
    phone_number_, email_, password_;
    vec<ll> token_;
    long long id_;
    public:
    user(u_sh age_, str gen, str fn, str ln,
         str phone, str email, str pwd, vec<ll> token,
        ll id);
    ~user();
    short unsigned get_age() { return age_; }
    std::string get_gender() { return gender_; }
    std::string get_first_name() { return first_name_; }
    std::string get_last_name() { return last_name_; }
    std::string get_phone_number() { return phone_number_;}
    std::string get_email() { return email_; }
    long long get_id() {return id_; }
    void TFA();

};
#endif