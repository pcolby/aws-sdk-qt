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

#include "deleteinternetgatewayrequest.h"
#include "deleteinternetgatewayrequest_p.h"
#include "deleteinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteInternetGatewayRequest
 *
 * @brief  Implements EC2 DeleteInternetGateway requests.
 *
 * @see    EC2Client::deleteInternetGateway
 */

/**
 * @brief  Constructs a new DeleteInternetGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInternetGatewayRequest::DeleteInternetGatewayRequest(const DeleteInternetGatewayRequest &other)
    : EC2Request(new DeleteInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInternetGatewayRequest object.
 */
DeleteInternetGatewayRequest::DeleteInternetGatewayRequest()
    : EC2Request(new DeleteInternetGatewayRequestPrivate(EC2Request::DeleteInternetGatewayAction, this))
{

}

bool DeleteInternetGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInternetGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInternetGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInternetGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInternetGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteInternetGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInternetGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteInternetGatewayRequest instance.
 */
DeleteInternetGatewayRequestPrivate::DeleteInternetGatewayRequestPrivate(
    const EC2Request::Action action, DeleteInternetGatewayRequest * const q)
    : DeleteInternetGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInternetGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInternetGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInternetGatewayRequest instance.
 */
DeleteInternetGatewayRequestPrivate::DeleteInternetGatewayRequestPrivate(
    const DeleteInternetGatewayRequestPrivate &other, DeleteInternetGatewayRequest * const q)
    : DeleteInternetGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
