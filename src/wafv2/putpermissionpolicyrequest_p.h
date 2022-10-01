// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_PUTPERMISSIONPOLICYREQUEST_P_H

#include "wafv2request_p.h"
#include "putpermissionpolicyrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutPermissionPolicyRequest;

class PutPermissionPolicyRequestPrivate : public Wafv2RequestPrivate {

public:
    PutPermissionPolicyRequestPrivate(const Wafv2Request::Action action,
                                   PutPermissionPolicyRequest * const q);
    PutPermissionPolicyRequestPrivate(const PutPermissionPolicyRequestPrivate &other,
                                   PutPermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPermissionPolicyRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
