// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINLINEPOLICYFORPERMISSIONSETREQUEST_P_H
#define QTAWS_GETINLINEPOLICYFORPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "getinlinepolicyforpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetInlinePolicyForPermissionSetRequest;

class GetInlinePolicyForPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    GetInlinePolicyForPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   GetInlinePolicyForPermissionSetRequest * const q);
    GetInlinePolicyForPermissionSetRequestPrivate(const GetInlinePolicyForPermissionSetRequestPrivate &other,
                                   GetInlinePolicyForPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInlinePolicyForPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
