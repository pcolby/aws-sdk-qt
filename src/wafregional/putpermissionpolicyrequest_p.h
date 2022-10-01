// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_PUTPERMISSIONPOLICYREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "putpermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class PutPermissionPolicyRequest;

class PutPermissionPolicyRequestPrivate : public WafRegionalRequestPrivate {

public:
    PutPermissionPolicyRequestPrivate(const WafRegionalRequest::Action action,
                                   PutPermissionPolicyRequest * const q);
    PutPermissionPolicyRequestPrivate(const PutPermissionPolicyRequestPrivate &other,
                                   PutPermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPermissionPolicyRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
