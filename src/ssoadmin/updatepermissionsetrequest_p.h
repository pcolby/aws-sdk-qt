// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSETREQUEST_P_H
#define QTAWS_UPDATEPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "updatepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class UpdatePermissionSetRequest;

class UpdatePermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    UpdatePermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   UpdatePermissionSetRequest * const q);
    UpdatePermissionSetRequestPrivate(const UpdatePermissionSetRequestPrivate &other,
                                   UpdatePermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
