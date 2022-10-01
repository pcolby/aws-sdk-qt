// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class DeregisterOrganizationAdminAccountResponse;

class DeregisterOrganizationAdminAccountResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit DeregisterOrganizationAdminAccountResponsePrivate(DeregisterOrganizationAdminAccountResponse * const q);

    void parseDeregisterOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(DeregisterOrganizationAdminAccountResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
