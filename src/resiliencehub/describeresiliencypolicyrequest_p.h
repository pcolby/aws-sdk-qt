// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESILIENCYPOLICYREQUEST_P_H
#define QTAWS_DESCRIBERESILIENCYPOLICYREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "describeresiliencypolicyrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeResiliencyPolicyRequest;

class DescribeResiliencyPolicyRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DescribeResiliencyPolicyRequestPrivate(const ResilienceHubRequest::Action action,
                                   DescribeResiliencyPolicyRequest * const q);
    DescribeResiliencyPolicyRequestPrivate(const DescribeResiliencyPolicyRequestPrivate &other,
                                   DescribeResiliencyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
