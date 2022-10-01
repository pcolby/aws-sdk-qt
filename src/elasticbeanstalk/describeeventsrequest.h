// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_H
#define QTAWS_DESCRIBEEVENTSREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeEventsRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT DescribeEventsRequest : public ElasticBeanstalkRequest {

public:
    DescribeEventsRequest(const DescribeEventsRequest &other);
    DescribeEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
