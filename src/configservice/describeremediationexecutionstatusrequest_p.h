// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeremediationexecutionstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExecutionStatusRequest;

class DescribeRemediationExecutionStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeRemediationExecutionStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeRemediationExecutionStatusRequest * const q);
    DescribeRemediationExecutionStatusRequestPrivate(const DescribeRemediationExecutionStatusRequestPrivate &other,
                                   DescribeRemediationExecutionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationExecutionStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
