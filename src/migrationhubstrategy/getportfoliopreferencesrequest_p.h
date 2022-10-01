// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOPREFERENCESREQUEST_P_H
#define QTAWS_GETPORTFOLIOPREFERENCESREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getportfoliopreferencesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioPreferencesRequest;

class GetPortfolioPreferencesRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetPortfolioPreferencesRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetPortfolioPreferencesRequest * const q);
    GetPortfolioPreferencesRequestPrivate(const GetPortfolioPreferencesRequestPrivate &other,
                                   GetPortfolioPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPortfolioPreferencesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
