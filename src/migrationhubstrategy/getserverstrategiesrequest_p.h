// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSTRATEGIESREQUEST_P_H
#define QTAWS_GETSERVERSTRATEGIESREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getserverstrategiesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerStrategiesRequest;

class GetServerStrategiesRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetServerStrategiesRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetServerStrategiesRequest * const q);
    GetServerStrategiesRequestPrivate(const GetServerStrategiesRequestPrivate &other,
                                   GetServerStrategiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServerStrategiesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
