// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "restoretabletopointintimerequest.h"

namespace QtAws {
namespace DynamoDb {

class RestoreTableToPointInTimeRequest;

class RestoreTableToPointInTimeRequestPrivate : public DynamoDbRequestPrivate {

public:
    RestoreTableToPointInTimeRequestPrivate(const DynamoDbRequest::Action action,
                                   RestoreTableToPointInTimeRequest * const q);
    RestoreTableToPointInTimeRequestPrivate(const RestoreTableToPointInTimeRequestPrivate &other,
                                   RestoreTableToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreTableToPointInTimeRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
