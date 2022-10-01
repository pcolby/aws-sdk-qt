// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONOPTIONSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeconfigurationoptionsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationOptionsRequest;

class DescribeConfigurationOptionsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeConfigurationOptionsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeConfigurationOptionsRequest * const q);
    DescribeConfigurationOptionsRequestPrivate(const DescribeConfigurationOptionsRequestPrivate &other,
                                   DescribeConfigurationOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationOptionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
