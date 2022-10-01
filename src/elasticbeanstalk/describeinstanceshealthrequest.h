// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESHEALTHREQUEST_H
#define QTAWS_DESCRIBEINSTANCESHEALTHREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeInstancesHealthRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeInstancesHealthRequest : public ElasticBeanstalkRequest {

public:
    DescribeInstancesHealthRequest(const DescribeInstancesHealthRequest &other);
    DescribeInstancesHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesHealthRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
