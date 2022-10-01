// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSE_P_H
#define QTAWS_UPDATEROUTERESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class UpdateRouteResponse;

class UpdateRouteResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit UpdateRouteResponsePrivate(UpdateRouteResponse * const q);

    void parseUpdateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRouteResponse)
    Q_DISABLE_COPY(UpdateRouteResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
