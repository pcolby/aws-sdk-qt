// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeenvironmentsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentsRequest;

class DescribeEnvironmentsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeEnvironmentsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeEnvironmentsRequest * const q);
    DescribeEnvironmentsRequestPrivate(const DescribeEnvironmentsRequestPrivate &other,
                                   DescribeEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
