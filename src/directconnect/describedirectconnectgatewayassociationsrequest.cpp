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

#include "describedirectconnectgatewayassociationsrequest.h"
#include "describedirectconnectgatewayassociationsrequest_p.h"
#include "describedirectconnectgatewayassociationsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewayAssociationsRequest
 *
 * @brief  Implements DirectConnect DescribeDirectConnectGatewayAssociations requests.
 *
 * @see    DirectConnectClient::describeDirectConnectGatewayAssociations
 */

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectConnectGatewayAssociationsRequest::DescribeDirectConnectGatewayAssociationsRequest(const DescribeDirectConnectGatewayAssociationsRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewayAssociationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsRequest object.
 */
DescribeDirectConnectGatewayAssociationsRequest::DescribeDirectConnectGatewayAssociationsRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewayAssociationsRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewayAssociationsAction, this))
{

}

bool DescribeDirectConnectGatewayAssociationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDirectConnectGatewayAssociationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectConnectGatewayAssociationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectConnectGatewayAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewayAssociationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewayAssociationsRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewayAssociationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeDirectConnectGatewayAssociationsRequest instance.
 */
DescribeDirectConnectGatewayAssociationsRequestPrivate::DescribeDirectConnectGatewayAssociationsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewayAssociationsRequest * const q)
    : DescribeDirectConnectGatewayAssociationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAssociationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewayAssociationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectConnectGatewayAssociationsRequest instance.
 */
DescribeDirectConnectGatewayAssociationsRequestPrivate::DescribeDirectConnectGatewayAssociationsRequestPrivate(
    const DescribeDirectConnectGatewayAssociationsRequestPrivate &other, DescribeDirectConnectGatewayAssociationsRequest * const q)
    : DescribeDirectConnectGatewayAssociationsPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
