// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLEREPLICAAUTOSCALINGREQUEST_P_H
#define QTAWS_UPDATETABLEREPLICAAUTOSCALINGREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "updatetablereplicaautoscalingrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateTableReplicaAutoScalingRequest;

class UpdateTableReplicaAutoScalingRequestPrivate : public DynamoDbRequestPrivate {

public:
    UpdateTableReplicaAutoScalingRequestPrivate(const DynamoDbRequest::Action action,
                                   UpdateTableReplicaAutoScalingRequest * const q);
    UpdateTableReplicaAutoScalingRequestPrivate(const UpdateTableReplicaAutoScalingRequestPrivate &other,
                                   UpdateTableReplicaAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTableReplicaAutoScalingRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
