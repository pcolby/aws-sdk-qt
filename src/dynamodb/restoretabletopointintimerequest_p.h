/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTORETABLETOPOINTINTIMEREQUEST_P_H

#include "dynamodb_p.h"
#include "restoretabletopointintimerequest.h"

namespace AWS {

namespace DynamoDB {

class RestoreTableToPointInTimeRequest;

class QTAWS_EXPORT RestoreTableToPointInTimeRequestPrivate : public DynamoDBPrivate {

public:
    RestoreTableToPointInTimeRequestPrivate(const DynamoDB::Action action,
                                   RestoreTableToPointInTimeRequest * const q);
    RestoreTableToPointInTimeRequestPrivate(const RestoreTableToPointInTimeRequestPrivate &other,
                                   RestoreTableToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreTableToPointInTimeRequest)

};

} // namespace DynamoDB
} // namespace AWS

#endif
