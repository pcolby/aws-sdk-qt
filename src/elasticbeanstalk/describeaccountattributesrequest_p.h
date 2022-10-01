// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "describeaccountattributesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DescribeAccountAttributesRequest;

class DescribeAccountAttributesRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    DescribeAccountAttributesRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   DescribeAccountAttributesRequest * const q);
    DescribeAccountAttributesRequestPrivate(const DescribeAccountAttributesRequestPrivate &other,
                                   DescribeAccountAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAttributesRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
