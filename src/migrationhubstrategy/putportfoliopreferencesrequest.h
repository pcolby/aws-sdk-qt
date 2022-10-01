// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPORTFOLIOPREFERENCESREQUEST_H
#define QTAWS_PUTPORTFOLIOPREFERENCESREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class PutPortfolioPreferencesRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT PutPortfolioPreferencesRequest : public MigrationHubStrategyRequest {

public:
    PutPortfolioPreferencesRequest(const PutPortfolioPreferencesRequest &other);
    PutPortfolioPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPortfolioPreferencesRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
