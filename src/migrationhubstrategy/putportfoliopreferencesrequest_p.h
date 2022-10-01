// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPORTFOLIOPREFERENCESREQUEST_P_H
#define QTAWS_PUTPORTFOLIOPREFERENCESREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "putportfoliopreferencesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class PutPortfolioPreferencesRequest;

class PutPortfolioPreferencesRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    PutPortfolioPreferencesRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   PutPortfolioPreferencesRequest * const q);
    PutPortfolioPreferencesRequestPrivate(const PutPortfolioPreferencesRequestPrivate &other,
                                   PutPortfolioPreferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPortfolioPreferencesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
