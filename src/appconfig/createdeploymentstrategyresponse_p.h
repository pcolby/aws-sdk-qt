// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTSTRATEGYRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTSTRATEGYRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class CreateDeploymentStrategyResponse;

class CreateDeploymentStrategyResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit CreateDeploymentStrategyResponsePrivate(CreateDeploymentStrategyResponse * const q);

    void parseCreateDeploymentStrategyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentStrategyResponse)
    Q_DISABLE_COPY(CreateDeploymentStrategyResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
