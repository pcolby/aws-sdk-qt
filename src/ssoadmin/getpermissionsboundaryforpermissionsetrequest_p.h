// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETREQUEST_P_H
#define QTAWS_GETPERMISSIONSBOUNDARYFORPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "getpermissionsboundaryforpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class GetPermissionsBoundaryForPermissionSetRequest;

class GetPermissionsBoundaryForPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    GetPermissionsBoundaryForPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   GetPermissionsBoundaryForPermissionSetRequest * const q);
    GetPermissionsBoundaryForPermissionSetRequestPrivate(const GetPermissionsBoundaryForPermissionSetRequestPrivate &other,
                                   GetPermissionsBoundaryForPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPermissionsBoundaryForPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
