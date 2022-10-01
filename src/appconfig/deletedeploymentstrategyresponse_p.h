// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTSTRATEGYRESPONSE_P_H
#define QTAWS_DELETEDEPLOYMENTSTRATEGYRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteDeploymentStrategyResponse;

class DeleteDeploymentStrategyResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteDeploymentStrategyResponsePrivate(DeleteDeploymentStrategyResponse * const q);

    void parseDeleteDeploymentStrategyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentStrategyResponse)
    Q_DISABLE_COPY(DeleteDeploymentStrategyResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
