// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGREQUEST_P_H
#define QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describetablereplicaautoscalingrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTableReplicaAutoScalingRequest;

class DescribeTableReplicaAutoScalingRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeTableReplicaAutoScalingRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeTableReplicaAutoScalingRequest * const q);
    DescribeTableReplicaAutoScalingRequestPrivate(const DescribeTableReplicaAutoScalingRequestPrivate &other,
                                   DescribeTableReplicaAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableReplicaAutoScalingRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
