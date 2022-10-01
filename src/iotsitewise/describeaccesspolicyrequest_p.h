// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOLICYREQUEST_P_H
#define QTAWS_DESCRIBEACCESSPOLICYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describeaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAccessPolicyRequest;

class DescribeAccessPolicyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeAccessPolicyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeAccessPolicyRequest * const q);
    DescribeAccessPolicyRequestPrivate(const DescribeAccessPolicyRequestPrivate &other,
                                   DescribeAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
