// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONREPORTDETAILSRESPONSE_H
#define QTAWS_GETRECOMMENDATIONREPORTDETAILSRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getrecommendationreportdetailsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetRecommendationReportDetailsResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetRecommendationReportDetailsResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetRecommendationReportDetailsResponse(const GetRecommendationReportDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommendationReportDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationReportDetailsResponse)
    Q_DISABLE_COPY(GetRecommendationReportDetailsResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
