// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOSUMMARYREQUEST_H
#define QTAWS_GETPORTFOLIOSUMMARYREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioSummaryRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetPortfolioSummaryRequest : public MigrationHubStrategyRequest {

public:
    GetPortfolioSummaryRequest(const GetPortfolioSummaryRequest &other);
    GetPortfolioSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortfolioSummaryRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
