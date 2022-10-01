// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONREPORTDETAILSREQUEST_H
#define QTAWS_GETRECOMMENDATIONREPORTDETAILSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetRecommendationReportDetailsRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetRecommendationReportDetailsRequest : public MigrationHubStrategyRequest {

public:
    GetRecommendationReportDetailsRequest(const GetRecommendationReportDetailsRequest &other);
    GetRecommendationReportDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationReportDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
