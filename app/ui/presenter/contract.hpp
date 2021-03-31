#pragma once

#include <rxcpp/rx.hpp>
#include "../../domain/entity/deploy_mode.hpp"

class contract {
public:
    class view {
    public:
        virtual void show_smps_mismatch() = 0;
        virtual void show_serdes_error_4k() = 0;
        virtual void show_serdes_error_4k_frame() = 0;
        virtual void show_serdes_error_8k() = 0;
    };

    class presenter {
    public:
        virtual rxcpp::observable<deploy_mode> getDeployMode() = 0;
    };
};


