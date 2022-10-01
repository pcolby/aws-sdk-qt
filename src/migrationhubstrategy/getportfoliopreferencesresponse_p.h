// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTFOLIOPREFERENCESRESPONSE_P_H
#define QTAWS_GETPORTFOLIOPREFERENCESRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetPortfolioPreferencesResponse;

class GetPortfolioPreferencesResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetPortfolioPreferencesResponsePrivate(GetPortfolioPreferencesResponse * const q);

    void parseGetPortfolioPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPortfolioPreferencesResponse)
    Q_DISABLE_COPY(GetPortfolioPreferencesResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
