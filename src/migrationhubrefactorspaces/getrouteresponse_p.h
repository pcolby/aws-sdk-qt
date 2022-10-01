// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSE_P_H
#define QTAWS_GETROUTERESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetRouteResponse;

class GetRouteResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit GetRouteResponsePrivate(GetRouteResponse * const q);

    void parseGetRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRouteResponse)
    Q_DISABLE_COPY(GetRouteResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
