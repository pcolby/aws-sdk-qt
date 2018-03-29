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

#include "describehostedconnectionsrequest.h"
#include "describehostedconnectionsrequest_p.h"
#include "describehostedconnectionsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeHostedConnectionsRequest
 *
 * @brief  Implements DirectConnect DescribeHostedConnections requests.
 *
 * @see    DirectConnectClient::describeHostedConnections
 */

/**
 * @brief  Constructs a new DescribeHostedConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHostedConnectionsRequest::DescribeHostedConnectionsRequest(const DescribeHostedConnectionsRequest &other)
    : DirectConnectRequest(new DescribeHostedConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHostedConnectionsRequest object.
 */
DescribeHostedConnectionsRequest::DescribeHostedConnectionsRequest()
    : DirectConnectRequest(new DescribeHostedConnectionsRequestPrivate(DirectConnectRequest::DescribeHostedConnectionsAction, this))
{

}

bool DescribeHostedConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHostedConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHostedConnectionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHostedConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostedConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHostedConnectionsRequestPrivate
 *
 * @brief  Private implementation for DescribeHostedConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostedConnectionsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeHostedConnectionsRequest instance.
 */
DescribeHostedConnectionsRequestPrivate::DescribeHostedConnectionsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeHostedConnectionsRequest * const q)
    : DescribeHostedConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostedConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostedConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHostedConnectionsRequest instance.
 */
DescribeHostedConnectionsRequestPrivate::DescribeHostedConnectionsRequestPrivate(
    const DescribeHostedConnectionsRequestPrivate &other, DescribeHostedConnectionsRequest * const q)
    : DescribeHostedConnectionsPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
