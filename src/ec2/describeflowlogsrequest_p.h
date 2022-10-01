// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWLOGSREQUEST_P_H
#define QTAWS_DESCRIBEFLOWLOGSREQUEST_P_H

#include "ec2request_p.h"
#include "describeflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFlowLogsRequest;

class DescribeFlowLogsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFlowLogsRequestPrivate(const Ec2Request::Action action,
                                   DescribeFlowLogsRequest * const q);
    DescribeFlowLogsRequestPrivate(const DescribeFlowLogsRequestPrivate &other,
                                   DescribeFlowLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFlowLogsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
