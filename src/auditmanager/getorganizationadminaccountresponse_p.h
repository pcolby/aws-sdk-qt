// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONADMINACCOUNTRESPONSE_P_H
#define QTAWS_GETORGANIZATIONADMINACCOUNTRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetOrganizationAdminAccountResponse;

class GetOrganizationAdminAccountResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetOrganizationAdminAccountResponsePrivate(GetOrganizationAdminAccountResponse * const q);

    void parseGetOrganizationAdminAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrganizationAdminAccountResponse)
    Q_DISABLE_COPY(GetOrganizationAdminAccountResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
