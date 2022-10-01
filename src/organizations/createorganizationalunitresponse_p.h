// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONALUNITRESPONSE_P_H
#define QTAWS_CREATEORGANIZATIONALUNITRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationalUnitResponse;

class CreateOrganizationalUnitResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit CreateOrganizationalUnitResponsePrivate(CreateOrganizationalUnitResponse * const q);

    void parseCreateOrganizationalUnitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOrganizationalUnitResponse)
    Q_DISABLE_COPY(CreateOrganizationalUnitResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
