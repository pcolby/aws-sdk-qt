// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONREQUEST_P_H

#include "sfnrequest_p.h"
#include "describestatemachineforexecutionrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineForExecutionRequest;

class DescribeStateMachineForExecutionRequestPrivate : public SfnRequestPrivate {

public:
    DescribeStateMachineForExecutionRequestPrivate(const SfnRequest::Action action,
                                   DescribeStateMachineForExecutionRequest * const q);
    DescribeStateMachineForExecutionRequestPrivate(const DescribeStateMachineForExecutionRequestPrivate &other,
                                   DescribeStateMachineForExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStateMachineForExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
