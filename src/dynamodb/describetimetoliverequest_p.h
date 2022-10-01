// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMETOLIVEREQUEST_P_H
#define QTAWS_DESCRIBETIMETOLIVEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describetimetoliverequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTimeToLiveRequest;

class DescribeTimeToLiveRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeTimeToLiveRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeTimeToLiveRequest * const q);
    DescribeTimeToLiveRequestPrivate(const DescribeTimeToLiveRequestPrivate &other,
                                   DescribeTimeToLiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTimeToLiveRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
