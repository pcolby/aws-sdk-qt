// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTDETAILSRESPONSE_P_H
#define QTAWS_GETAPPLICATIONCOMPONENTDETAILSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentDetailsResponse;

class GetApplicationComponentDetailsResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit GetApplicationComponentDetailsResponsePrivate(GetApplicationComponentDetailsResponse * const q);

    void parseGetApplicationComponentDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationComponentDetailsResponse)
    Q_DISABLE_COPY(GetApplicationComponentDetailsResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
