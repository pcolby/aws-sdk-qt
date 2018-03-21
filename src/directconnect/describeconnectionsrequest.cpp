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

#include "describeconnectionsrequest.h"
#include "describeconnectionsrequest_p.h"
#include "describeconnectionsresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeConnectionsRequest
 *
 * @brief  Implements DirectConnect DescribeConnections requests.
 *
 * @see    DirectConnectClient::describeConnections
 */

/**
 * @brief  Constructs a new DescribeConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConnectionsResponse::DescribeConnectionsResponse(

/**
 * @brief  Constructs a new DescribeConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest(const DescribeConnectionsRequest &other)
    : DirectConnectRequest(new DescribeConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConnectionsRequest object.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest()
    : DirectConnectRequest(new DescribeConnectionsRequestPrivate(DirectConnectRequest::DescribeConnectionsAction, this))
{

}

bool DescribeConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConnectionsRequestPrivate
 *
 * @brief  Private implementation for DescribeConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeConnectionsRequest instance.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeConnectionsRequest * const q)
    : DescribeConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConnectionsRequest instance.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DescribeConnectionsRequestPrivate &other, DescribeConnectionsRequest * const q)
    : DescribeConnectionsPrivate(other, q)
{

}
