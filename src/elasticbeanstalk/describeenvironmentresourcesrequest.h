// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTRESOURCESREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTRESOURCESREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentResourcesRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentResourcesRequest : public ElasticBeanstalkRequest {

public:
    DescribeEnvironmentResourcesRequest(const DescribeEnvironmentResourcesRequest &other);
    DescribeEnvironmentResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentResourcesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
