/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETSHARDITERATORREQUEST_P_H
#define QTAWS_GETSHARDITERATORREQUEST_P_H

#include "kinesis_p.h"
#include "getsharditeratorrequest.h"

namespace AWS {

namespace Kinesis {

class GetShardIteratorRequest;

class QTAWS_EXPORT GetShardIteratorRequestPrivate : public KinesisPrivate {

public:
    GetShardIteratorRequestPrivate(const Kinesis::Action action,
                                   GetShardIteratorRequest * const q);
    GetShardIteratorRequestPrivate(const GetShardIteratorRequestPrivate &other,
                                   GetShardIteratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetShardIteratorRequest)

};

} // namespace Kinesis
} // namespace AWS

#endif
