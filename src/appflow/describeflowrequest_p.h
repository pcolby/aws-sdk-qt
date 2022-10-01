// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWREQUEST_P_H
#define QTAWS_DESCRIBEFLOWREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowRequest;

class DescribeFlowRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeFlowRequestPrivate(const AppflowRequest::Action action,
                                   DescribeFlowRequest * const q);
    DescribeFlowRequestPrivate(const DescribeFlowRequestPrivate &other,
                                   DescribeFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
