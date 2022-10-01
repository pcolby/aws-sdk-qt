// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPORTFOLIOPREFERENCESRESPONSE_P_H
#define QTAWS_PUTPORTFOLIOPREFERENCESRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class PutPortfolioPreferencesResponse;

class PutPortfolioPreferencesResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit PutPortfolioPreferencesResponsePrivate(PutPortfolioPreferencesResponse * const q);

    void parsePutPortfolioPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPortfolioPreferencesResponse)
    Q_DISABLE_COPY(PutPortfolioPreferencesResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
