// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_GETORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "getorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class GetOrganizationAdminAccountRequest;

class GetOrganizationAdminAccountRequestPrivate : public AuditManagerRequestPrivate {

public:
    GetOrganizationAdminAccountRequestPrivate(const AuditManagerRequest::Action action,
                                   GetOrganizationAdminAccountRequest * const q);
    GetOrganizationAdminAccountRequestPrivate(const GetOrganizationAdminAccountRequestPrivate &other,
                                   GetOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
