// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESHEALTHREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeinstanceshealthrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeInstancesHealthRequest;

class DescribeInstancesHealthRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeInstancesHealthRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeInstancesHealthRequest * const q);
    DescribeInstancesHealthRequestPrivate(const DescribeInstancesHealthRequestPrivate &other,
                                   DescribeInstancesHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstancesHealthRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
