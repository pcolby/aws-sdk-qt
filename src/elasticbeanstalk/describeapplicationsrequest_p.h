// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeapplicationsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationsRequest;

class DescribeApplicationsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeApplicationsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeApplicationsRequest * const q);
    DescribeApplicationsRequestPrivate(const DescribeApplicationsRequestPrivate &other,
                                   DescribeApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
