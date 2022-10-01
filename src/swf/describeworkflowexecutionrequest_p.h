// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEWORKFLOWEXECUTIONREQUEST_P_H

#include "swfrequest_p.h"
#include "describeworkflowexecutionrequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowExecutionRequest;

class DescribeWorkflowExecutionRequestPrivate : public SwfRequestPrivate {

public:
    DescribeWorkflowExecutionRequestPrivate(const SwfRequest::Action action,
                                   DescribeWorkflowExecutionRequest * const q);
    DescribeWorkflowExecutionRequestPrivate(const DescribeWorkflowExecutionRequestPrivate &other,
                                   DescribeWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
