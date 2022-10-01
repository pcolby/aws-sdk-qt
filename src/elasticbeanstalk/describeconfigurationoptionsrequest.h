// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONOPTIONSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONOPTIONSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeConfigurationOptionsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeConfigurationOptionsRequest : public ElasticBeanstalkRequest {

public:
    DescribeConfigurationOptionsRequest(const DescribeConfigurationOptionsRequest &other);
    DescribeConfigurationOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationOptionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
