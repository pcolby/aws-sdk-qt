// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETREQUEST_P_H
#define QTAWS_DELETEINLINEPOLICYFROMPERMISSIONSETREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "deleteinlinepolicyfrompermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DeleteInlinePolicyFromPermissionSetRequest;

class DeleteInlinePolicyFromPermissionSetRequestPrivate : public SsoAdminRequestPrivate {

public:
    DeleteInlinePolicyFromPermissionSetRequestPrivate(const SsoAdminRequest::Action action,
                                   DeleteInlinePolicyFromPermissionSetRequest * const q);
    DeleteInlinePolicyFromPermissionSetRequestPrivate(const DeleteInlinePolicyFromPermissionSetRequestPrivate &other,
                                   DeleteInlinePolicyFromPermissionSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInlinePolicyFromPermissionSetRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
