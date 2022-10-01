// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETTINGSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONSETTINGSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationSettingsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeConfigurationSettingsRequest : public ElasticBeanstalkRequest {

public:
    DescribeConfigurationSettingsRequest(const DescribeConfigurationSettingsRequest &other);
    DescribeConfigurationSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationSettingsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
