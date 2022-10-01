// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETREQUEST_P_H
#define QTAWS_ATTACHCUSTOMERMANAGEDPOLICYREFERENCETOPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "attachcustomermanagedpolicyreferencetopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachCustomerManagedPolicyReferenceToPermissionSetRequest;

class AttachCustomerManagedPolicyReferenceToPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    AttachCustomerManagedPolicyReferenceToPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   AttachCustomerManagedPolicyReferenceToPermissionSetRequest * const q);
    AttachCustomerManagedPolicyReferenceToPermissionSetRequestPrivate(const AttachCustomerManagedPolicyReferenceToPermissionSetRequestPrivate &other,
                                   AttachCustomerManagedPolicyReferenceToPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachCustomerManagedPolicyReferenceToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
