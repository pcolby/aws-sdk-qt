// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeapplicationversionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationVersionsRequest;

class DescribeApplicationVersionsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeApplicationVersionsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeApplicationVersionsRequest * const q);
    DescribeApplicationVersionsRequestPrivate(const DescribeApplicationVersionsRequestPrivate &other,
                                   DescribeApplicationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationVersionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
