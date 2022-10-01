// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGRESPONSE_P_H
#define QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTableReplicaAutoScalingResponse;

class DescribeTableReplicaAutoScalingResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeTableReplicaAutoScalingResponsePrivate(DescribeTableReplicaAutoScalingResponse * const q);

    void parseDescribeTableReplicaAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableReplicaAutoScalingResponse)
    Q_DISABLE_COPY(DescribeTableReplicaAutoScalingResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
