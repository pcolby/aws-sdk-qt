// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWREQUEST_P_H
#define QTAWS_DESCRIBECONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "describecontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowRequest;

class DescribeContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   DescribeContactFlowRequest * const q);
    DescribeContactFlowRequestPrivate(const DescribeContactFlowRequestPrivate &other,
                                   DescribeContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
