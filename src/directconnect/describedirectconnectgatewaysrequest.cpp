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

#include "describedirectconnectgatewaysrequest.h"
#include "describedirectconnectgatewaysrequest_p.h"
#include "describedirectconnectgatewaysresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewaysRequest
 *
 * @brief  Implements DirectConnect DescribeDirectConnectGateways requests.
 *
 * @see    DirectConnectClient::describeDirectConnectGateways
 */

/**
 * @brief  Constructs a new DescribeDirectConnectGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewaysResponse::DescribeDirectConnectGatewaysResponse(

/**
 * @brief  Constructs a new DescribeDirectConnectGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectConnectGatewaysRequest::DescribeDirectConnectGatewaysRequest(const DescribeDirectConnectGatewaysRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDirectConnectGatewaysRequest object.
 */
DescribeDirectConnectGatewaysRequest::DescribeDirectConnectGatewaysRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewaysRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewaysAction, this))
{

}

bool DescribeDirectConnectGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDirectConnectGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectConnectGatewaysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeDirectConnectGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewaysRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewaysRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeDirectConnectGatewaysRequest instance.
 */
DescribeDirectConnectGatewaysRequestPrivate::DescribeDirectConnectGatewaysRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewaysRequest * const q)
    : DescribeDirectConnectGatewaysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectConnectGatewaysRequest instance.
 */
DescribeDirectConnectGatewaysRequestPrivate::DescribeDirectConnectGatewaysRequestPrivate(
    const DescribeDirectConnectGatewaysRequestPrivate &other, DescribeDirectConnectGatewaysRequest * const q)
    : DescribeDirectConnectGatewaysPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
