// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeAccountAttributesRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeAccountAttributesRequest : public ElasticBeanstalkRequest {

public:
    DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other);
    DescribeAccountAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAttributesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
