// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTMANAGEDACTIONSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeenvironmentmanagedactionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentManagedActionsRequest;

class DescribeEnvironmentManagedActionsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeEnvironmentManagedActionsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeEnvironmentManagedActionsRequest * const q);
    DescribeEnvironmentManagedActionsRequestPrivate(const DescribeEnvironmentManagedActionsRequestPrivate &other,
                                   DescribeEnvironmentManagedActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentManagedActionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
