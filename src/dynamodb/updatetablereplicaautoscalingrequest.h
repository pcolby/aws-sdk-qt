// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREPLICAAUTOSCALINGREQUEST_H
#define QTAWS_UPDATETABLEREPLICAAUTOSCALINGREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTableReplicaAutoScalingRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateTableReplicaAutoScalingRequest : public DynamoDbRequest {

public:
    UpdateTableReplicaAutoScalingRequest(const UpdateTableReplicaAutoScalingRequest &other);
    UpdateTableReplicaAutoScalingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTableReplicaAutoScalingRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
