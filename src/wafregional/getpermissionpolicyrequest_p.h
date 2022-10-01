// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_GETPERMISSIONPOLICYREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "getpermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class GetPermissionPolicyRequest;

class GetPermissionPolicyRequestPrivate : public WafRegionalRequestPrivate {

public:
    GetPermissionPolicyRequestPrivate(const WafRegionalRequest::Action action,
                                   GetPermissionPolicyRequest * const q);
    GetPermissionPolicyRequestPrivate(const GetPermissionPolicyRequestPrivate &other,
                                   GetPermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPermissionPolicyRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
