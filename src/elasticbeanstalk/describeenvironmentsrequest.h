// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEnvironmentsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEnvironmentsRequest : public ElasticBeanstalkRequest {

public:
    DescribeEnvironmentsRequest(const DescribeEnvironmentsRequest &other);
    DescribeEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
