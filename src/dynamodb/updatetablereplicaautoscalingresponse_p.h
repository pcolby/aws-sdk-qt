// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREPLICAAUTOSCALINGRESPONSE_P_H
#define QTAWS_UPDATETABLEREPLICAAUTOSCALINGRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTableReplicaAutoScalingResponse;

class UpdateTableReplicaAutoScalingResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit UpdateTableReplicaAutoScalingResponsePrivate(UpdateTableReplicaAutoScalingResponse * const q);

    void parseUpdateTableReplicaAutoScalingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTableReplicaAutoScalingResponse)
    Q_DISABLE_COPY(UpdateTableReplicaAutoScalingResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
