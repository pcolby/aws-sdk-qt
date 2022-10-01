// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDELEGATEDADMINISTRATORRESPONSE_P_H
#define QTAWS_DEREGISTERDELEGATEDADMINISTRATORRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DeregisterDelegatedAdministratorResponse;

class DeregisterDelegatedAdministratorResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DeregisterDelegatedAdministratorResponsePrivate(DeregisterDelegatedAdministratorResponse * const q);

    void parseDeregisterDelegatedAdministratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterDelegatedAdministratorResponse)
    Q_DISABLE_COPY(DeregisterDelegatedAdministratorResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
