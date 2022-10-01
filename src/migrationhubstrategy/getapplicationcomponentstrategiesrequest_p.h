// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESREQUEST_P_H
#define QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getapplicationcomponentstrategiesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentStrategiesRequest;

class GetApplicationComponentStrategiesRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetApplicationComponentStrategiesRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetApplicationComponentStrategiesRequest * const q);
    GetApplicationComponentStrategiesRequestPrivate(const GetApplicationComponentStrategiesRequestPrivate &other,
                                   GetApplicationComponentStrategiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationComponentStrategiesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
