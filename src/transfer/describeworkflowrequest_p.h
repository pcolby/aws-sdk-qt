// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWREQUEST_P_H
#define QTAWS_DESCRIBEWORKFLOWREQUEST_P_H

#include "transferrequest_p.h"
#include "describeworkflowrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeWorkflowRequest;

class DescribeWorkflowRequestPrivate : public TransferRequestPrivate {

public:
    DescribeWorkflowRequestPrivate(const TransferRequest::Action action,
                                   DescribeWorkflowRequest * const q);
    DescribeWorkflowRequestPrivate(const DescribeWorkflowRequestPrivate &other,
                                   DescribeWorkflowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkflowRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
