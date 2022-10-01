// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTDETAILSREQUEST_P_H
#define QTAWS_GETAPPLICATIONCOMPONENTDETAILSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getapplicationcomponentdetailsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentDetailsRequest;

class GetApplicationComponentDetailsRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetApplicationComponentDetailsRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetApplicationComponentDetailsRequest * const q);
    GetApplicationComponentDetailsRequestPrivate(const GetApplicationComponentDetailsRequestPrivate &other,
                                   GetApplicationComponentDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApplicationComponentDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
