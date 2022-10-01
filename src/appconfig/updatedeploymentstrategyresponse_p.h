// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTSTRATEGYRESPONSE_P_H
#define QTAWS_UPDATEDEPLOYMENTSTRATEGYRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateDeploymentStrategyResponse;

class UpdateDeploymentStrategyResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateDeploymentStrategyResponsePrivate(UpdateDeploymentStrategyResponse * const q);

    void parseUpdateDeploymentStrategyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentStrategyResponse)
    Q_DISABLE_COPY(UpdateDeploymentStrategyResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
