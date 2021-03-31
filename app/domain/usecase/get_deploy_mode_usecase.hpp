#pragma once


#include <rxcpp/rx.hpp>
#include "../entity/deploy_mode.hpp"
#include "../service/configuration_service.hpp"

class get_deploy_mode_usecase {
public:
    get_deploy_mode_usecase(configuration_service* service) {
        this->service = service;
    }
    rxcpp::observable<deploy_mode> execute() {
        return this->service->get_deploy_mode();
    }
private:
    configuration_service* service;
};


