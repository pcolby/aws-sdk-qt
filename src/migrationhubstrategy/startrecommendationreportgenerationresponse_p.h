// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDATIONREPORTGENERATIONRESPONSE_P_H
#define QTAWS_STARTRECOMMENDATIONREPORTGENERATIONRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartRecommendationReportGenerationResponse;

class StartRecommendationReportGenerationResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit StartRecommendationReportGenerationResponsePrivate(StartRecommendationReportGenerationResponse * const q);

    void parseStartRecommendationReportGenerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRecommendationReportGenerationResponse)
    Q_DISABLE_COPY(StartRecommendationReportGenerationResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
