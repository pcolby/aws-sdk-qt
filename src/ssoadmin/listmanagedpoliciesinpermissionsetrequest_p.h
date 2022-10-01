// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETREQUEST_P_H
#define QTAWS_LISTMANAGEDPOLICIESINPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listmanagedpoliciesinpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListManagedPoliciesInPermissionSetRequest;

class ListManagedPoliciesInPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListManagedPoliciesInPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   ListManagedPoliciesInPermissionSetRequest * const q);
    ListManagedPoliciesInPermissionSetRequestPrivate(const ListManagedPoliciesInPermissionSetRequestPrivate &other,
                                   ListManagedPoliciesInPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedPoliciesInPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
