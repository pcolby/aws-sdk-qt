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

#ifndef QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_P_H

#include "directconnect_p.h"
#include "describehostedconnectionsrequest.h"

namespace AWS {

namespace DirectConnect {

class DescribeHostedConnectionsRequest;

class QTAWS_EXPORT DescribeHostedConnectionsRequestPrivate : public DirectConnectPrivate {

public:
    DescribeHostedConnectionsRequestPrivate(const DirectConnect::Action action,
                                   DescribeHostedConnectionsRequest * const q);
    DescribeHostedConnectionsRequestPrivate(const DescribeHostedConnectionsRequestPrivate &other,
                                   DescribeHostedConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostedConnectionsRequest)

};

} // namespace DirectConnect
} // namespace AWS

#endif
