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

#ifndef QTAWS_DESCRIBESESSIONSREQUEST_P_H
#define QTAWS_DESCRIBESESSIONSREQUEST_P_H

#include "appstream_p.h"
#include "describesessionsrequest.h"

namespace AWS {

namespace AppStream {

class DescribeSessionsRequest;

class QTAWS_EXPORT DescribeSessionsRequestPrivate : public AppStreamPrivate {

public:
    DescribeSessionsRequestPrivate(const AppStream::Action action,
                                   DescribeSessionsRequest * const q);
    DescribeSessionsRequestPrivate(const DescribeSessionsRequestPrivate &other,
                                   DescribeSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSessionsRequest)

};

} // namespace AppStream
} // namespace AWS

#endif
