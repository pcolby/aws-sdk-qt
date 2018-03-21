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

#include "attachinternetgatewayrequest.h"
#include "attachinternetgatewayrequest_p.h"
#include "attachinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AttachInternetGatewayRequest
 *
 * @brief  Implements EC2 AttachInternetGateway requests.
 *
 * @see    EC2Client::attachInternetGateway
 */

/**
 * @brief  Constructs a new AttachInternetGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachInternetGatewayResponse::AttachInternetGatewayResponse(

/**
 * @brief  Constructs a new AttachInternetGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachInternetGatewayRequest::AttachInternetGatewayRequest(const AttachInternetGatewayRequest &other)
    : EC2Request(new AttachInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachInternetGatewayRequest object.
 */
AttachInternetGatewayRequest::AttachInternetGatewayRequest()
    : EC2Request(new AttachInternetGatewayRequestPrivate(EC2Request::AttachInternetGatewayAction, this))
{

}

bool AttachInternetGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachInternetGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachInternetGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AttachInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new AttachInternetGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachInternetGatewayRequestPrivate
 *
 * @brief  Private implementation for AttachInternetGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInternetGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AttachInternetGatewayRequest instance.
 */
AttachInternetGatewayRequestPrivate::AttachInternetGatewayRequestPrivate(
    const EC2Request::Action action, AttachInternetGatewayRequest * const q)
    : AttachInternetGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachInternetGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachInternetGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachInternetGatewayRequest instance.
 */
AttachInternetGatewayRequestPrivate::AttachInternetGatewayRequestPrivate(
    const AttachInternetGatewayRequestPrivate &other, AttachInternetGatewayRequest * const q)
    : AttachInternetGatewayPrivate(other, q)
{

}
