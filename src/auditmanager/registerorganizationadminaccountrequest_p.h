// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_REGISTERORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "registerorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class RegisterOrganizationAdminAccountRequest;

class RegisterOrganizationAdminAccountRequestPrivate : public AuditManagerRequestPrivate {

public:
    RegisterOrganizationAdminAccountRequestPrivate(const AuditManagerRequest::Action action,
                                   RegisterOrganizationAdminAccountRequest * const q);
    RegisterOrganizationAdminAccountRequestPrivate(const RegisterOrganizationAdminAccountRequestPrivate &other,
                                   RegisterOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
