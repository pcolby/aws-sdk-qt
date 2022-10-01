// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONSRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListApplicationsResponse;

class ListApplicationsResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit ListApplicationsResponsePrivate(ListApplicationsResponse * const q);

    void parseListApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationsResponse)
    Q_DISABLE_COPY(ListApplicationsResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
