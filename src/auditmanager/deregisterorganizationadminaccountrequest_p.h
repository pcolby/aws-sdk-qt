// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTREQUEST_P_H
#define QTAWS_DEREGISTERORGANIZATIONADMINACCOUNTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "deregisterorganizationadminaccountrequest.h"

namespace QtAws {
namespace AuditManager {

class DeregisterOrganizationAdminAccountRequest;

class DeregisterOrganizationAdminAccountRequestPrivate : public AuditManagerRequestPrivate {

public:
    DeregisterOrganizationAdminAccountRequestPrivate(const AuditManagerRequest::Action action,
                                   DeregisterOrganizationAdminAccountRequest * const q);
    DeregisterOrganizationAdminAccountRequestPrivate(const DeregisterOrganizationAdminAccountRequestPrivate &other,
                                   DeregisterOrganizationAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterOrganizationAdminAccountRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
