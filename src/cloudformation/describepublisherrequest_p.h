// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHERREQUEST_P_H
#define QTAWS_DESCRIBEPUBLISHERREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describepublisherrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribePublisherRequest;

class DescribePublisherRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribePublisherRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribePublisherRequest * const q);
    DescribePublisherRequestPrivate(const DescribePublisherRequestPrivate &other,
                                   DescribePublisherRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePublisherRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
