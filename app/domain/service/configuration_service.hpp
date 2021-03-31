#pragma once


#include <rxcpp/rx.hpp>
#include "../entity/deploy_mode.hpp"

class configuration_service {
public:
    virtual rxcpp::observable<deploy_mode> get_deploy_mode() = 0;
};


