// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWEXECUTIONRECORDSREQUEST_P_H
#define QTAWS_DESCRIBEFLOWEXECUTIONRECORDSREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeflowexecutionrecordsrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowExecutionRecordsRequest;

class DescribeFlowExecutionRecordsRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeFlowExecutionRecordsRequestPrivate(const AppflowRequest::Action action,
                                   DescribeFlowExecutionRecordsRequest * const q);
    DescribeFlowExecutionRecordsRequestPrivate(const DescribeFlowExecutionRecordsRequestPrivate &other,
                                   DescribeFlowExecutionRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFlowExecutionRecordsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
