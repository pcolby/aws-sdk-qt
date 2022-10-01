// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBSERVABILITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEOBSERVABILITYCONFIGURATIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DeleteObservabilityConfigurationResponse;

class DeleteObservabilityConfigurationResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DeleteObservabilityConfigurationResponsePrivate(DeleteObservabilityConfigurationResponse * const q);

    void parseDeleteObservabilityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteObservabilityConfigurationResponse)
    Q_DISABLE_COPY(DeleteObservabilityConfigurationResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
