// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOSUMMARYREQUEST_P_H
#define QTAWS_GETPORTFOLIOSUMMARYREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getportfoliosummaryrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioSummaryRequest;

class GetPortfolioSummaryRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetPortfolioSummaryRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetPortfolioSummaryRequest * const q);
    GetPortfolioSummaryRequestPrivate(const GetPortfolioSummaryRequestPrivate &other,
                                   GetPortfolioSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPortfolioSummaryRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
