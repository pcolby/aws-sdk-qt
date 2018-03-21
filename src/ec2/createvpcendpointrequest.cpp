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

#include "createvpcendpointrequest.h"
#include "createvpcendpointrequest_p.h"
#include "createvpcendpointresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcEndpointRequest
 *
 * @brief  Implements EC2 CreateVpcEndpoint requests.
 *
 * @see    EC2Client::createVpcEndpoint
 */

/**
 * @brief  Constructs a new CreateVpcEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcEndpointResponse::CreateVpcEndpointResponse(

/**
 * @brief  Constructs a new CreateVpcEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcEndpointRequest::CreateVpcEndpointRequest(const CreateVpcEndpointRequest &other)
    : EC2Request(new CreateVpcEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcEndpointRequest object.
 */
CreateVpcEndpointRequest::CreateVpcEndpointRequest()
    : EC2Request(new CreateVpcEndpointRequestPrivate(EC2Request::CreateVpcEndpointAction, this))
{

}

bool CreateVpcEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpcEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcEndpointRequestPrivate
 *
 * @brief  Private implementation for CreateVpcEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpcEndpointRequest instance.
 */
CreateVpcEndpointRequestPrivate::CreateVpcEndpointRequestPrivate(
    const EC2Request::Action action, CreateVpcEndpointRequest * const q)
    : CreateVpcEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcEndpointRequest instance.
 */
CreateVpcEndpointRequestPrivate::CreateVpcEndpointRequestPrivate(
    const CreateVpcEndpointRequestPrivate &other, CreateVpcEndpointRequest * const q)
    : CreateVpcEndpointPrivate(other, q)
{

}
