// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBEJOBEXECUTIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describejobexecutionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobExecutionRequest;

class DescribeJobExecutionRequestPrivate : public IoTRequestPrivate {

public:
    DescribeJobExecutionRequestPrivate(const IoTRequest::Action action,
                                   DescribeJobExecutionRequest * const q);
    DescribeJobExecutionRequestPrivate(const DescribeJobExecutionRequestPrivate &other,
                                   DescribeJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobExecutionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
