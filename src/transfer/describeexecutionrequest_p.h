// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEEXECUTIONREQUEST_P_H

#include "transferrequest_p.h"
#include "describeexecutionrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeExecutionRequest;

class DescribeExecutionRequestPrivate : public TransferRequestPrivate {

public:
    DescribeExecutionRequestPrivate(const TransferRequest::Action action,
                                   DescribeExecutionRequest * const q);
    DescribeExecutionRequestPrivate(const DescribeExecutionRequestPrivate &other,
                                   DescribeExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExecutionRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
