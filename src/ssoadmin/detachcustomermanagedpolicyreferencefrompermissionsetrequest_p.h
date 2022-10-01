// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETREQUEST_P_H
#define QTAWS_DETACHCUSTOMERMANAGEDPOLICYREFERENCEFROMPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "detachcustomermanagedpolicyreferencefrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachCustomerManagedPolicyReferenceFromPermissionSetRequest;

class DetachCustomerManagedPolicyReferenceFromPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DetachCustomerManagedPolicyReferenceFromPermissionSetRequest * const q);
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequestPrivate(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequestPrivate &other,
                                   DetachCustomerManagedPolicyReferenceFromPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachCustomerManagedPolicyReferenceFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
