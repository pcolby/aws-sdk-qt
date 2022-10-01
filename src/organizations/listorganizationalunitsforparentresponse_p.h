// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONALUNITSFORPARENTRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONALUNITSFORPARENTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class ListOrganizationalUnitsForParentResponse;

class ListOrganizationalUnitsForParentResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit ListOrganizationalUnitsForParentResponsePrivate(ListOrganizationalUnitsForParentResponse * const q);

    void parseListOrganizationalUnitsForParentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationalUnitsForParentResponse)
    Q_DISABLE_COPY(ListOrganizationalUnitsForParentResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
