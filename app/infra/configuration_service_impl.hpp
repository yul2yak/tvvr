#pragma once


#include "../domain/service/configuration_service.hpp"
#include "../domain/entity/deploy_mode.hpp"

class configuration_service_impl : public configuration_service {
public:
    rxcpp::observable<deploy_mode> get_deploy_mode();
};


