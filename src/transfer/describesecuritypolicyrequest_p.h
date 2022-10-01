// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPOLICYREQUEST_P_H
#define QTAWS_DESCRIBESECURITYPOLICYREQUEST_P_H

#include "transferrequest_p.h"
#include "describesecuritypolicyrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeSecurityPolicyRequest;

class DescribeSecurityPolicyRequestPrivate : public TransferRequestPrivate {

public:
    DescribeSecurityPolicyRequestPrivate(const TransferRequest::Action action,
                                   DescribeSecurityPolicyRequest * const q);
    DescribeSecurityPolicyRequestPrivate(const DescribeSecurityPolicyRequestPrivate &other,
                                   DescribeSecurityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityPolicyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
