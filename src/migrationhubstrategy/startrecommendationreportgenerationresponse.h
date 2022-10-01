// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDATIONREPORTGENERATIONRESPONSE_H
#define QTAWS_STARTRECOMMENDATIONREPORTGENERATIONRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "startrecommendationreportgenerationrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartRecommendationReportGenerationResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartRecommendationReportGenerationResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    StartRecommendationReportGenerationResponse(const StartRecommendationReportGenerationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRecommendationReportGenerationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecommendationReportGenerationResponse)
    Q_DISABLE_COPY(StartRecommendationReportGenerationResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
