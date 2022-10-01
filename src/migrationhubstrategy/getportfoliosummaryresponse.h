// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOSUMMARYRESPONSE_H
#define QTAWS_GETPORTFOLIOSUMMARYRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getportfoliosummaryrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioSummaryResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetPortfolioSummaryResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetPortfolioSummaryResponse(const GetPortfolioSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPortfolioSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortfolioSummaryResponse)
    Q_DISABLE_COPY(GetPortfolioSummaryResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
