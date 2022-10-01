// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETREQUEST_P_H
#define QTAWS_LISTCUSTOMERMANAGEDPOLICYREFERENCESINPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listcustomermanagedpolicyreferencesinpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListCustomerManagedPolicyReferencesInPermissionSetRequest;

class ListCustomerManagedPolicyReferencesInPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListCustomerManagedPolicyReferencesInPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   ListCustomerManagedPolicyReferencesInPermissionSetRequest * const q);
    ListCustomerManagedPolicyReferencesInPermissionSetRequestPrivate(const ListCustomerManagedPolicyReferencesInPermissionSetRequestPrivate &other,
                                   ListCustomerManagedPolicyReferencesInPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomerManagedPolicyReferencesInPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
