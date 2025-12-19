#include 
class message{
    private:
    
    public:
    std::string
    bool load_msg, delivered_msg, not_read_msg, read_msg;
    void send_msg();
    void read_msg();
    void show_msg();
    message();
    ~message();
};