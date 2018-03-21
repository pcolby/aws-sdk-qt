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

#include "createvpngatewayrequest.h"
#include "createvpngatewayrequest_p.h"
#include "createvpngatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnGatewayRequest
 *
 * @brief  Implements EC2 CreateVpnGateway requests.
 *
 * @see    EC2Client::createVpnGateway
 */

/**
 * @brief  Constructs a new CreateVpnGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpnGatewayResponse::CreateVpnGatewayResponse(

/**
 * @brief  Constructs a new CreateVpnGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpnGatewayRequest::CreateVpnGatewayRequest(const CreateVpnGatewayRequest &other)
    : EC2Request(new CreateVpnGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpnGatewayRequest object.
 */
CreateVpnGatewayRequest::CreateVpnGatewayRequest()
    : EC2Request(new CreateVpnGatewayRequestPrivate(EC2Request::CreateVpnGatewayAction, this))
{

}

bool CreateVpnGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpnGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpnGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpnGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpnGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpnGatewayRequestPrivate
 *
 * @brief  Private implementation for CreateVpnGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpnGatewayRequest instance.
 */
CreateVpnGatewayRequestPrivate::CreateVpnGatewayRequestPrivate(
    const EC2Request::Action action, CreateVpnGatewayRequest * const q)
    : CreateVpnGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpnGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpnGatewayRequest instance.
 */
CreateVpnGatewayRequestPrivate::CreateVpnGatewayRequestPrivate(
    const CreateVpnGatewayRequestPrivate &other, CreateVpnGatewayRequest * const q)
    : CreateVpnGatewayPrivate(other, q)
{

}
