// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTRATEGYRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTSTRATEGYRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetDeploymentStrategyResponse;

class GetDeploymentStrategyResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetDeploymentStrategyResponsePrivate(GetDeploymentStrategyResponse * const q);

    void parseGetDeploymentStrategyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentStrategyResponse)
    Q_DISABLE_COPY(GetDeploymentStrategyResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
