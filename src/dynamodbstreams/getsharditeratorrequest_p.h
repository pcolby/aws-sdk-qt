/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETSHARDITERATORREQUEST_P_H
#define QTAWS_GETSHARDITERATORREQUEST_P_H

#include "dynamodbstreamsrequest_p.h"
#include "getsharditeratorrequest.h"

namespace QtAws {
namespace DynamoDBStreams {

class GetShardIteratorRequest;

class QTAWS_EXPORT GetShardIteratorRequestPrivate : public DynamoDBStreamsRequestPrivate {

public:
    GetShardIteratorRequestPrivate(const DynamoDBStreamsRequest::Action action,
                                   GetShardIteratorRequest * const q);
    GetShardIteratorRequestPrivate(const GetShardIteratorRequestPrivate &other,
                                   GetShardIteratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetShardIteratorRequest)

};

} // namespace DynamoDBStreams
} // namespace QtAws

#endif
