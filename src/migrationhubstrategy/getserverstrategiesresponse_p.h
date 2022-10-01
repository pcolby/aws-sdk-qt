// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSTRATEGIESRESPONSE_P_H
#define QTAWS_GETSERVERSTRATEGIESRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerStrategiesResponse;

class GetServerStrategiesResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetServerStrategiesResponsePrivate(GetServerStrategiesResponse * const q);

    void parseGetServerStrategiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServerStrategiesResponse)
    Q_DISABLE_COPY(GetServerStrategiesResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
