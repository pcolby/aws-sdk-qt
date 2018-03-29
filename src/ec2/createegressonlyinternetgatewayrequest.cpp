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

#include "createegressonlyinternetgatewayrequest.h"
#include "createegressonlyinternetgatewayrequest_p.h"
#include "createegressonlyinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateEgressOnlyInternetGatewayRequest
 *
 * @brief  Implements EC2 CreateEgressOnlyInternetGateway requests.
 *
 * @see    EC2Client::createEgressOnlyInternetGateway
 */

/**
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEgressOnlyInternetGatewayRequest::CreateEgressOnlyInternetGatewayRequest(const CreateEgressOnlyInternetGatewayRequest &other)
    : EC2Request(new CreateEgressOnlyInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayRequest object.
 */
CreateEgressOnlyInternetGatewayRequest::CreateEgressOnlyInternetGatewayRequest()
    : EC2Request(new CreateEgressOnlyInternetGatewayRequestPrivate(EC2Request::CreateEgressOnlyInternetGatewayAction, this))
{

}

bool CreateEgressOnlyInternetGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEgressOnlyInternetGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEgressOnlyInternetGatewayResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateEgressOnlyInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateEgressOnlyInternetGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEgressOnlyInternetGatewayRequestPrivate
 *
 * @brief  Private implementation for CreateEgressOnlyInternetGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateEgressOnlyInternetGatewayRequest instance.
 */
CreateEgressOnlyInternetGatewayRequestPrivate::CreateEgressOnlyInternetGatewayRequestPrivate(
    const EC2Request::Action action, CreateEgressOnlyInternetGatewayRequest * const q)
    : CreateEgressOnlyInternetGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEgressOnlyInternetGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEgressOnlyInternetGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEgressOnlyInternetGatewayRequest instance.
 */
CreateEgressOnlyInternetGatewayRequestPrivate::CreateEgressOnlyInternetGatewayRequestPrivate(
    const CreateEgressOnlyInternetGatewayRequestPrivate &other, CreateEgressOnlyInternetGatewayRequest * const q)
    : CreateEgressOnlyInternetGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
