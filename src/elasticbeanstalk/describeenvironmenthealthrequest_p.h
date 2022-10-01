// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTHEALTHREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeenvironmenthealthrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentHealthRequest;

class DescribeEnvironmentHealthRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeEnvironmentHealthRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeEnvironmentHealthRequest * const q);
    DescribeEnvironmentHealthRequestPrivate(const DescribeEnvironmentHealthRequestPrivate &other,
                                   DescribeEnvironmentHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentHealthRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
