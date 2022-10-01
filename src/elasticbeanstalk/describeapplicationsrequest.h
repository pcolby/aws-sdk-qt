// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeApplicationsRequest : public ElasticBeanstalkRequest {

public:
    DescribeApplicationsRequest(const DescribeApplicationsRequest &other);
    DescribeApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
