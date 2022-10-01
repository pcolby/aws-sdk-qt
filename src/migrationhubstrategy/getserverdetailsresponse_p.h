// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERDETAILSRESPONSE_P_H
#define QTAWS_GETSERVERDETAILSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerDetailsResponse;

class GetServerDetailsResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetServerDetailsResponsePrivate(GetServerDetailsResponse * const q);

    void parseGetServerDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServerDetailsResponse)
    Q_DISABLE_COPY(GetServerDetailsResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
