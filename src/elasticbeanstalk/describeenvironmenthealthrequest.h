// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTHEALTHREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTHEALTHREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentHealthRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentHealthRequest : public ElasticBeanstalkRequest {

public:
    DescribeEnvironmentHealthRequest(const DescribeEnvironmentHealthRequest &other);
    DescribeEnvironmentHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentHealthRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
