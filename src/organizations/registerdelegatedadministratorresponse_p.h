// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDELEGATEDADMINISTRATORRESPONSE_P_H
#define QTAWS_REGISTERDELEGATEDADMINISTRATORRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class RegisterDelegatedAdministratorResponse;

class RegisterDelegatedAdministratorResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit RegisterDelegatedAdministratorResponsePrivate(RegisterDelegatedAdministratorResponse * const q);

    void parseRegisterDelegatedAdministratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDelegatedAdministratorResponse)
    Q_DISABLE_COPY(RegisterDelegatedAdministratorResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
