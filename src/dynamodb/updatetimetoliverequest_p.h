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

#ifndef QTAWS_UPDATETIMETOLIVEREQUEST_P_H
#define QTAWS_UPDATETIMETOLIVEREQUEST_P_H

#include "dynamodb_p.h"
#include "updatetimetoliverequest.h"

namespace AWS {

namespace DynamoDB {

class UpdateTimeToLiveRequest;

class QTAWS_EXPORT UpdateTimeToLiveRequestPrivate : public DynamoDBPrivate {

public:
    UpdateTimeToLiveRequestPrivate(const DynamoDB::Action action,
                                   UpdateTimeToLiveRequest * const q);
    UpdateTimeToLiveRequestPrivate(const UpdateTimeToLiveRequestPrivate &other,
                                   UpdateTimeToLiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTimeToLiveRequest)

};

} // namespace DynamoDB
} // namespace AWS

#endif
