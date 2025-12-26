#ifndef admin_hpp
#define admin_hpp
#include <vector>
#include <cstdint>
class admin{
    private:
    std::vector<uint8_t> key;
    
    public:
    std::vector<uint8_t> get_key();
    admin(std::vector<uint8_t> key) : key(key) {};
    ~admin();
};
#endif