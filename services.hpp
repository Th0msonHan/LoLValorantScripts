#pragma once
#include "nt.hpp"
#include <string>

class DriverLoader {
private:
    std::wstring service_name_;
    std::wstring file_path_;

    bool create_file_path();
    bool delete_file();
    bool create_service();
    bool delete_service();
    bool start_service();
    bool stop_service();
    bool open_scm();
    bool close_scm();
    bool is_service_running();

public:
    DriverLoader(const std::wstring& service_name);
    ~DriverLoader();

    bool load_driver();
    bool unload_driver();
};
