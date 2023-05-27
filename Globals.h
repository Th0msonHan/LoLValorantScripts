#pragma

class c_globals {
private:
    bool active;
    c_globals() : active(true) {}
public:
    static c_globals& get_instance() {
        static c_globals instance;
        return instance;
    }
    bool is_active() const {
        return active;
    }
    void set_active(bool value) {
        active = value;
    }
};
