// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETREQUEST_P_H
#define QTAWS_DETACHMANAGEDPOLICYFROMPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "detachmanagedpolicyfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DetachManagedPolicyFromPermissionSetRequest;

class DetachManagedPolicyFromPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DetachManagedPolicyFromPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DetachManagedPolicyFromPermissionSetRequest * const q);
    DetachManagedPolicyFromPermissionSetRequestPrivate(const DetachManagedPolicyFromPermissionSetRequestPrivate &other,
                                   DetachManagedPolicyFromPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachManagedPolicyFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
