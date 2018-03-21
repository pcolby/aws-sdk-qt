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

#include "describedirectconnectgatewayattachmentsrequest.h"
#include "describedirectconnectgatewayattachmentsrequest_p.h"
#include "describedirectconnectgatewayattachmentsresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeDirectConnectGatewayAttachmentsRequest
 *
 * @brief  Implements DirectConnect DescribeDirectConnectGatewayAttachments requests.
 *
 * @see    DirectConnectClient::describeDirectConnectGatewayAttachments
 */

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectConnectGatewayAttachmentsResponse::DescribeDirectConnectGatewayAttachmentsResponse(

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectConnectGatewayAttachmentsRequest::DescribeDirectConnectGatewayAttachmentsRequest(const DescribeDirectConnectGatewayAttachmentsRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewayAttachmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsRequest object.
 */
DescribeDirectConnectGatewayAttachmentsRequest::DescribeDirectConnectGatewayAttachmentsRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewayAttachmentsRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewayAttachmentsAction, this))
{

}

bool DescribeDirectConnectGatewayAttachmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDirectConnectGatewayAttachmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectConnectGatewayAttachmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeDirectConnectGatewayAttachmentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewayAttachmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDirectConnectGatewayAttachmentsRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectConnectGatewayAttachmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeDirectConnectGatewayAttachmentsRequest instance.
 */
DescribeDirectConnectGatewayAttachmentsRequestPrivate::DescribeDirectConnectGatewayAttachmentsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewayAttachmentsRequest * const q)
    : DescribeDirectConnectGatewayAttachmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectConnectGatewayAttachmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewayAttachmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectConnectGatewayAttachmentsRequest instance.
 */
DescribeDirectConnectGatewayAttachmentsRequestPrivate::DescribeDirectConnectGatewayAttachmentsRequestPrivate(
    const DescribeDirectConnectGatewayAttachmentsRequestPrivate &other, DescribeDirectConnectGatewayAttachmentsRequest * const q)
    : DescribeDirectConnectGatewayAttachmentsPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
