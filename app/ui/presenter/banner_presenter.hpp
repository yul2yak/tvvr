#pragma once


#include "contract.hpp"
#include "../../domain/usecase/get_deploy_mode_usecase.hpp"

class banner_presenter : public contract::presenter {
public:
    banner_presenter(get_deploy_mode_usecase* usecase) {
        this->usecase = usecase;
    }
    rxcpp::observable<deploy_mode> getDeployMode() override;
private:
    get_deploy_mode_usecase* usecase;
};


