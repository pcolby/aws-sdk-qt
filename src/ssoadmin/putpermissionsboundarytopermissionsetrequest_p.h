// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETREQUEST_P_H
#define QTAWS_PUTPERMISSIONSBOUNDARYTOPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "putpermissionsboundarytopermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class PutPermissionsBoundaryToPermissionSetRequest;

class PutPermissionsBoundaryToPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    PutPermissionsBoundaryToPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   PutPermissionsBoundaryToPermissionSetRequest * const q);
    PutPermissionsBoundaryToPermissionSetRequestPrivate(const PutPermissionsBoundaryToPermissionSetRequestPrivate &other,
                                   PutPermissionsBoundaryToPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPermissionsBoundaryToPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
