// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTRETENTIONPOLICYREQUEST_P_H
#define QTAWS_GETDEFAULTRETENTIONPOLICYREQUEST_P_H

#include "workmailrequest_p.h"
#include "getdefaultretentionpolicyrequest.h"

namespace QtAws {
namespace WorkMail {

class GetDefaultRetentionPolicyRequest;

class GetDefaultRetentionPolicyRequestPrivate : public WorkMailRequestPrivate {

public:
    GetDefaultRetentionPolicyRequestPrivate(const WorkMailRequest::Action action,
                                   GetDefaultRetentionPolicyRequest * const q);
    GetDefaultRetentionPolicyRequestPrivate(const GetDefaultRetentionPolicyRequestPrivate &other,
                                   GetDefaultRetentionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDefaultRetentionPolicyRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
