#include "src\core\cpp\user\usr\user.hpp"
class registrate: public user {
    private:
    long long id_;
    public:
    long long get_id_() const;
    void registrate_user(long long id_, bool needs);
    void unregistrate_user(long long id_, bool needs);
};