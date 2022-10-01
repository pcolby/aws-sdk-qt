// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETTINGSREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeconfigurationsettingsrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationSettingsRequest;

class DescribeConfigurationSettingsRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeConfigurationSettingsRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeConfigurationSettingsRequest * const q);
    DescribeConfigurationSettingsRequestPrivate(const DescribeConfigurationSettingsRequestPrivate &other,
                                   DescribeConfigurationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSettingsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
