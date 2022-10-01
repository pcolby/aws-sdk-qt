// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEEXECUTIONREQUEST_P_H

#include "sfnrequest_p.h"
#include "describeexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeExecutionRequest;

class DescribeExecutionRequestPrivate : public SfnRequestPrivate {

public:
    DescribeExecutionRequestPrivate(const SfnRequest::Action action,
                                   DescribeExecutionRequest * const q);
    DescribeExecutionRequestPrivate(const DescribeExecutionRequestPrivate &other,
                                   DescribeExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
