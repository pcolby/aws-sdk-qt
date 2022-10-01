// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTESRESPONSE_P_H
#define QTAWS_LISTROUTESRESPONSE_P_H

#include "migrationhubrefactorspacesresponse_p.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListRoutesResponse;

class ListRoutesResponsePrivate : public MigrationHubRefactorSpacesResponsePrivate {

public:

    explicit ListRoutesResponsePrivate(ListRoutesResponse * const q);

    void parseListRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoutesResponse)
    Q_DISABLE_COPY(ListRoutesResponsePrivate)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
