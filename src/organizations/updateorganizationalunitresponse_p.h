// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONALUNITRESPONSE_P_H
#define QTAWS_UPDATEORGANIZATIONALUNITRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class UpdateOrganizationalUnitResponse;

class UpdateOrganizationalUnitResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit UpdateOrganizationalUnitResponsePrivate(UpdateOrganizationalUnitResponse * const q);

    void parseUpdateOrganizationalUnitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationalUnitResponse)
    Q_DISABLE_COPY(UpdateOrganizationalUnitResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
