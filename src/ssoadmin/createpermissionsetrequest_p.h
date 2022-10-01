// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONSETREQUEST_P_H
#define QTAWS_CREATEPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "createpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class CreatePermissionSetRequest;

class CreatePermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    CreatePermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   CreatePermissionSetRequest * const q);
    CreatePermissionSetRequestPrivate(const CreatePermissionSetRequestPrivate &other,
                                   CreatePermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
