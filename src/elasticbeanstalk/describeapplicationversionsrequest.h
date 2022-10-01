// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONSREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeApplicationVersionsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeApplicationVersionsRequest : public ElasticBeanstalkRequest {

public:
    DescribeApplicationVersionsRequest(const DescribeApplicationVersionsRequest &other);
    DescribeApplicationVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationVersionsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
