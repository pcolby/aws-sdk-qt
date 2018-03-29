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

#include "describeconnectionsoninterconnectrequest.h"
#include "describeconnectionsoninterconnectrequest_p.h"
#include "describeconnectionsoninterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeConnectionsOnInterconnectRequest
 *
 * @brief  Implements DirectConnect DescribeConnectionsOnInterconnect requests.
 *
 * @see    DirectConnectClient::describeConnectionsOnInterconnect
 */

/**
 * @brief  Constructs a new DescribeConnectionsOnInterconnectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConnectionsOnInterconnectRequest::DescribeConnectionsOnInterconnectRequest(const DescribeConnectionsOnInterconnectRequest &other)
    : DirectConnectRequest(new DescribeConnectionsOnInterconnectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConnectionsOnInterconnectRequest object.
 */
DescribeConnectionsOnInterconnectRequest::DescribeConnectionsOnInterconnectRequest()
    : DirectConnectRequest(new DescribeConnectionsOnInterconnectRequestPrivate(DirectConnectRequest::DescribeConnectionsOnInterconnectAction, this))
{

}

bool DescribeConnectionsOnInterconnectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConnectionsOnInterconnectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConnectionsOnInterconnectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeConnectionsOnInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionsOnInterconnectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConnectionsOnInterconnectRequestPrivate
 *
 * @brief  Private implementation for DescribeConnectionsOnInterconnectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsOnInterconnectRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeConnectionsOnInterconnectRequest instance.
 */
DescribeConnectionsOnInterconnectRequestPrivate::DescribeConnectionsOnInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, DescribeConnectionsOnInterconnectRequest * const q)
    : DescribeConnectionsOnInterconnectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsOnInterconnectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionsOnInterconnectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConnectionsOnInterconnectRequest instance.
 */
DescribeConnectionsOnInterconnectRequestPrivate::DescribeConnectionsOnInterconnectRequestPrivate(
    const DescribeConnectionsOnInterconnectRequestPrivate &other, DescribeConnectionsOnInterconnectRequest * const q)
    : DescribeConnectionsOnInterconnectPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
