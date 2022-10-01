// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPORTFOLIOPREFERENCESRESPONSE_H
#define QTAWS_PUTPORTFOLIOPREFERENCESRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "putportfoliopreferencesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class PutPortfolioPreferencesResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT PutPortfolioPreferencesResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    PutPortfolioPreferencesResponse(const PutPortfolioPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPortfolioPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPortfolioPreferencesResponse)
    Q_DISABLE_COPY(PutPortfolioPreferencesResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
