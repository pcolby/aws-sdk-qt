// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTRECOMMENDATIONREPORTGENERATIONREQUEST_H
#define QTAWS_STARTRECOMMENDATIONREPORTGENERATIONREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StartRecommendationReportGenerationRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StartRecommendationReportGenerationRequest : public MigrationHubStrategyRequest {

public:
    StartRecommendationReportGenerationRequest(const StartRecommendationReportGenerationRequest &other);
    StartRecommendationReportGenerationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRecommendationReportGenerationRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
