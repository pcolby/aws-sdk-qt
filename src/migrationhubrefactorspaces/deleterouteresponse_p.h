// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSE_P_H
#define QTAWS_DELETEROUTERESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteRouteResponse;

class DeleteRouteResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit DeleteRouteResponsePrivate(DeleteRouteResponse * const q);

    void parseDeleteRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteResponse)
    Q_DISABLE_COPY(DeleteRouteResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
