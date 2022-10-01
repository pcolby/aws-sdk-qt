// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONVERSIONTASKSREQUEST_P_H
#define QTAWS_DESCRIBECONVERSIONTASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeconversiontasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeConversionTasksRequest;

class DescribeConversionTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeConversionTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeConversionTasksRequest * const q);
    DescribeConversionTasksRequestPrivate(const DescribeConversionTasksRequestPrivate &other,
                                   DescribeConversionTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConversionTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
