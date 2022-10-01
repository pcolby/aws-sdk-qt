// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGRESPONSE_H
#define QTAWS_DESCRIBETABLEREPLICAAUTOSCALINGRESPONSE_H

#include "dynamodbresponse.h"
#include "describetablereplicaautoscalingrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTableReplicaAutoScalingResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeTableReplicaAutoScalingResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeTableReplicaAutoScalingResponse(const DescribeTableReplicaAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTableReplicaAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTableReplicaAutoScalingResponse)
    Q_DISABLE_COPY(DescribeTableReplicaAutoScalingResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
