// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREPLICAAUTOSCALINGRESPONSE_H
#define QTAWS_UPDATETABLEREPLICAAUTOSCALINGRESPONSE_H

#include "dynamodbresponse.h"
#include "updatetablereplicaautoscalingrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTableReplicaAutoScalingResponsePrivate;

class QTAWSDYNAMODB_EXPORT UpdateTableReplicaAutoScalingResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    UpdateTableReplicaAutoScalingResponse(const UpdateTableReplicaAutoScalingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTableReplicaAutoScalingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableReplicaAutoScalingResponse)
    Q_DISABLE_COPY(UpdateTableReplicaAutoScalingResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
