// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBSERVABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEOBSERVABILITYCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class CreateObservabilityConfigurationResponse;

class CreateObservabilityConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit CreateObservabilityConfigurationResponsePrivate(CreateObservabilityConfigurationResponse * const q);

    void parseCreateObservabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateObservabilityConfigurationResponse)
    Q_DISABLE_COPY(CreateObservabilityConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
