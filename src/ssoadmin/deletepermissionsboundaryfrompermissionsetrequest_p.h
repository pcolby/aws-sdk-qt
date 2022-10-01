// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETREQUEST_P_H
#define QTAWS_DELETEPERMISSIONSBOUNDARYFROMPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "deletepermissionsboundaryfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionsBoundaryFromPermissionSetRequest;

class DeletePermissionsBoundaryFromPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DeletePermissionsBoundaryFromPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DeletePermissionsBoundaryFromPermissionSetRequest * const q);
    DeletePermissionsBoundaryFromPermissionSetRequestPrivate(const DeletePermissionsBoundaryFromPermissionSetRequestPrivate &other,
                                   DeletePermissionsBoundaryFromPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionsBoundaryFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
