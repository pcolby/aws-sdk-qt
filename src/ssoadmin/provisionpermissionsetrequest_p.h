// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPERMISSIONSETREQUEST_P_H
#define QTAWS_PROVISIONPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "provisionpermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ProvisionPermissionSetRequest;

class ProvisionPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    ProvisionPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   ProvisionPermissionSetRequest * const q);
    ProvisionPermissionSetRequestPrivate(const ProvisionPermissionSetRequestPrivate &other,
                                   ProvisionPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
