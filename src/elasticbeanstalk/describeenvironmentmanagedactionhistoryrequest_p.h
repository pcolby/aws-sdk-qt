// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONHISTORYREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeenvironmentmanagedactionhistoryrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionHistoryRequest;

class DescribeEnvironmentManagedActionHistoryRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeEnvironmentManagedActionHistoryRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeEnvironmentManagedActionHistoryRequest * const q);
    DescribeEnvironmentManagedActionHistoryRequestPrivate(const DescribeEnvironmentManagedActionHistoryRequestPrivate &other,
                                   DescribeEnvironmentManagedActionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentManagedActionHistoryRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
