// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSTRATEGIESRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTSTRATEGIESRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class ListDeploymentStrategiesResponse;

class ListDeploymentStrategiesResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit ListDeploymentStrategiesResponsePrivate(ListDeploymentStrategiesResponse * const q);

    void parseListDeploymentStrategiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentStrategiesResponse)
    Q_DISABLE_COPY(ListDeploymentStrategiesResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
