// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONSETREQUEST_P_H
#define QTAWS_DELETEPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "deletepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeletePermissionSetRequest;

class DeletePermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DeletePermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DeletePermissionSetRequest * const q);
    DeletePermissionSetRequestPrivate(const DeletePermissionSetRequestPrivate &other,
                                   DeletePermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
