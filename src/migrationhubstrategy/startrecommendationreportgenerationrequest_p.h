// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDATIONREPORTGENERATIONREQUEST_P_H
#define QTAWS_STARTRECOMMENDATIONREPORTGENERATIONREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "startrecommendationreportgenerationrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartRecommendationReportGenerationRequest;

class StartRecommendationReportGenerationRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    StartRecommendationReportGenerationRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   StartRecommendationReportGenerationRequest * const q);
    StartRecommendationReportGenerationRequestPrivate(const StartRecommendationReportGenerationRequestPrivate &other,
                                   StartRecommendationReportGenerationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRecommendationReportGenerationRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
