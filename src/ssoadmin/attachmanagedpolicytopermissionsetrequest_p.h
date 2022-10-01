// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETREQUEST_P_H
#define QTAWS_ATTACHMANAGEDPOLICYTOPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "attachmanagedpolicytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class AttachManagedPolicyToPermissionSetRequest;

class AttachManagedPolicyToPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    AttachManagedPolicyToPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   AttachManagedPolicyToPermissionSetRequest * const q);
    AttachManagedPolicyToPermissionSetRequestPrivate(const AttachManagedPolicyToPermissionSetRequestPrivate &other,
                                   AttachManagedPolicyToPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachManagedPolicyToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
