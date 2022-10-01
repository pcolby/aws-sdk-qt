// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERDETAILSREQUEST_P_H
#define QTAWS_GETSERVERDETAILSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getserverdetailsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerDetailsRequest;

class GetServerDetailsRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetServerDetailsRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetServerDetailsRequest * const q);
    GetServerDetailsRequestPrivate(const GetServerDetailsRequestPrivate &other,
                                   GetServerDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServerDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
