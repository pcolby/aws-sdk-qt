// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONREPORTDETAILSRESPONSE_P_H
#define QTAWS_GETRECOMMENDATIONREPORTDETAILSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetRecommendationReportDetailsResponse;

class GetRecommendationReportDetailsResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetRecommendationReportDetailsResponsePrivate(GetRecommendationReportDetailsResponse * const q);

    void parseGetRecommendationReportDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecommendationReportDetailsResponse)
    Q_DISABLE_COPY(GetRecommendationReportDetailsResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
