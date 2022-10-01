// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONREPORTDETAILSREQUEST_P_H
#define QTAWS_GETRECOMMENDATIONREPORTDETAILSREQUEST_P_H

#include "migrationhubstrategyrequest_p.h"
#include "getrecommendationreportdetailsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetRecommendationReportDetailsRequest;

class GetRecommendationReportDetailsRequestPrivate : public MigrationHubStrategyRequestPrivate {

public:
    GetRecommendationReportDetailsRequestPrivate(const MigrationHubStrategyRequest::Action action,
                                   GetRecommendationReportDetailsRequest * const q);
    GetRecommendationReportDetailsRequestPrivate(const GetRecommendationReportDetailsRequestPrivate &other,
                                   GetRecommendationReportDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommendationReportDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
