// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTRESPONSE_P_H
#define QTAWS_STOPDEPLOYMENTRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class StopDeploymentResponse;

class StopDeploymentResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit StopDeploymentResponsePrivate(StopDeploymentResponse * const q);

    void parseStopDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDeploymentResponse)
    Q_DISABLE_COPY(StopDeploymentResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
