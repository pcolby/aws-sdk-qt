// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONALUNITRESPONSE_P_H
#define QTAWS_DELETEORGANIZATIONALUNITRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DeleteOrganizationalUnitResponse;

class DeleteOrganizationalUnitResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DeleteOrganizationalUnitResponsePrivate(DeleteOrganizationalUnitResponse * const q);

    void parseDeleteOrganizationalUnitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationalUnitResponse)
    Q_DISABLE_COPY(DeleteOrganizationalUnitResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
