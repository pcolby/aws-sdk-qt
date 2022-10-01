// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYREQUEST_P_H
#define QTAWS_DELETEPERMISSIONPOLICYREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deletepermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class DeletePermissionPolicyRequest;

class DeletePermissionPolicyRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeletePermissionPolicyRequestPrivate(const WafRegionalRequest::Action action,
                                   DeletePermissionPolicyRequest * const q);
    DeletePermissionPolicyRequestPrivate(const DeletePermissionPolicyRequestPrivate &other,
                                   DeletePermissionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePermissionPolicyRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
