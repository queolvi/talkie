#include "src\core\cpp\user\usr\user.hpp"
class ban : public user {
    private:
    long long id_;
    public:
    long long get_id_() const;
    void ban_user(long long id_, bool needs);
    void unban_user(long long id_, bool needs);
};