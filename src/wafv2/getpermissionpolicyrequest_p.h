// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_GETPERMISSIONPOLICYREQUEST_P_H

#include "wafv2request_p.h"
#include "getpermissionpolicyrequest.h"

namespace QtAws {
namespace Wafv2 {

class GetPermissionPolicyRequest;

class GetPermissionPolicyRequestPrivate : public Wafv2RequestPrivate {

public:
    GetPermissionPolicyRequestPrivate(const Wafv2Request::Action action,
                                   GetPermissionPolicyRequest * const q);
    GetPermissionPolicyRequestPrivate(const GetPermissionPolicyRequestPrivate &other,
                                   GetPermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPermissionPolicyRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
