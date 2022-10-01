// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTRESOURCESREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTRESOURCESREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeenvironmentresourcesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentResourcesRequest;

class DescribeEnvironmentResourcesRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeEnvironmentResourcesRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeEnvironmentResourcesRequest * const q);
    DescribeEnvironmentResourcesRequestPrivate(const DescribeEnvironmentResourcesRequestPrivate &other,
                                   DescribeEnvironmentResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentResourcesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
