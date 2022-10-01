// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOPREFERENCESREQUEST_H
#define QTAWS_GETPORTFOLIOPREFERENCESREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioPreferencesRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetPortfolioPreferencesRequest : public MigrationHubStrategyRequest {

public:
    GetPortfolioPreferencesRequest(const GetPortfolioPreferencesRequest &other);
    GetPortfolioPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortfolioPreferencesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
