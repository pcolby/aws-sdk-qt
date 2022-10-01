// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_DELETEPERMISSIONPOLICYREQUEST_P_H

#include "wafrequest_p.h"
#include "deletepermissionpolicyrequest.h"

namespace QtAws {
namespace Waf {

class DeletePermissionPolicyRequest;

class DeletePermissionPolicyRequestPrivate : public WafRequestPrivate {

public:
    DeletePermissionPolicyRequestPrivate(const WafRequest::Action action,
                                   DeletePermissionPolicyRequest * const q);
    DeletePermissionPolicyRequestPrivate(const DeletePermissionPolicyRequestPrivate &other,
                                   DeletePermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionPolicyRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
