// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_P_H
#define QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentStrategiesResponse;

class GetApplicationComponentStrategiesResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetApplicationComponentStrategiesResponsePrivate(GetApplicationComponentStrategiesResponse * const q);

    void parseGetApplicationComponentStrategiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationComponentStrategiesResponse)
    Q_DISABLE_COPY(GetApplicationComponentStrategiesResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
