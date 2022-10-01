// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEAUTOSCALINGCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class CreateAutoScalingConfigurationResponse;

class CreateAutoScalingConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit CreateAutoScalingConfigurationResponsePrivate(CreateAutoScalingConfigurationResponse * const q);

    void parseCreateAutoScalingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(CreateAutoScalingConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
