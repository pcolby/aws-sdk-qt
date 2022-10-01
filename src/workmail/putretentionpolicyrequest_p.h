// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYREQUEST_P_H
#define QTAWS_PUTRETENTIONPOLICYREQUEST_P_H

#include "workmailrequest_p.h"
#include "putretentionpolicyrequest.h"

namespace QtAws {
namespace WorkMail {

class PutRetentionPolicyRequest;

class PutRetentionPolicyRequestPrivate : public WorkMailRequestPrivate {

public:
    PutRetentionPolicyRequestPrivate(const WorkMailRequest::Action action,
                                   PutRetentionPolicyRequest * const q);
    PutRetentionPolicyRequestPrivate(const PutRetentionPolicyRequestPrivate &other,
                                   PutRetentionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRetentionPolicyRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
