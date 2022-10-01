// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWREQUEST_P_H
#define QTAWS_DESCRIBEFLOWREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "describeflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class DescribeFlowRequest;

class DescribeFlowRequestPrivate : public MediaConnectRequestPrivate {

public:
    DescribeFlowRequestPrivate(const MediaConnectRequest::Action action,
                                   DescribeFlowRequest * const q);
    DescribeFlowRequestPrivate(const DescribeFlowRequestPrivate &other,
                                   DescribeFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
