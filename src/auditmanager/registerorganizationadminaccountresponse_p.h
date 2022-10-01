// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_REGISTERORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class RegisterOrganizationAdminAccountResponse;

class RegisterOrganizationAdminAccountResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit RegisterOrganizationAdminAccountResponsePrivate(RegisterOrganizationAdminAccountResponse * const q);

    void parseRegisterOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(RegisterOrganizationAdminAccountResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
