// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTRESPONSE_P_H
#define QTAWS_STARTDEPLOYMENTRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class StartDeploymentResponse;

class StartDeploymentResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit StartDeploymentResponsePrivate(StartDeploymentResponse * const q);

    void parseStartDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDeploymentResponse)
    Q_DISABLE_COPY(StartDeploymentResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
