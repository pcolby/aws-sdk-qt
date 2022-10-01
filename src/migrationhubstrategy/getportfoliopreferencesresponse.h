// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOPREFERENCESRESPONSE_H
#define QTAWS_GETPORTFOLIOPREFERENCESRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getportfoliopreferencesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioPreferencesResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetPortfolioPreferencesResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetPortfolioPreferencesResponse(const GetPortfolioPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPortfolioPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortfolioPreferencesResponse)
    Q_DISABLE_COPY(GetPortfolioPreferencesResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
