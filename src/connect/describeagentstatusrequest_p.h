// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEAGENTSTATUSREQUEST_P_H

#include "connectrequest_p.h"
#include "describeagentstatusrequest.h"

namespace QtAws {
namespace Connect {

class DescribeAgentStatusRequest;

class DescribeAgentStatusRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeAgentStatusRequestPrivate(const ConnectRequest::Action action,
                                   DescribeAgentStatusRequest * const q);
    DescribeAgentStatusRequestPrivate(const DescribeAgentStatusRequestPrivate &other,
                                   DescribeAgentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAgentStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
