// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOSUMMARYRESPONSE_P_H
#define QTAWS_GETPORTFOLIOSUMMARYRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioSummaryResponse;

class GetPortfolioSummaryResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetPortfolioSummaryResponsePrivate(GetPortfolioSummaryResponse * const q);

    void parseGetPortfolioSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPortfolioSummaryResponse)
    Q_DISABLE_COPY(GetPortfolioSummaryResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
