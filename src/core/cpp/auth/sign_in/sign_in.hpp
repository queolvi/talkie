#include "src\core\cpp\user\usr\user.hpp"
class sign_in: public user {
    private:
    long long id_;
    public:
    long long get_id_() const;
    void sign_id_user(long long id_, bool needs);
    void sign_out_user(long long id_, bool needs);
};