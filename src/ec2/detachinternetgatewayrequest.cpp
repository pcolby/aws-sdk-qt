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

#include "detachinternetgatewayrequest.h"
#include "detachinternetgatewayrequest_p.h"
#include "detachinternetgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DetachInternetGatewayRequest
 *
 * @brief  Implements EC2 DetachInternetGateway requests.
 *
 * @see    EC2Client::detachInternetGateway
 */

/**
 * @brief  Constructs a new DetachInternetGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachInternetGatewayRequest::DetachInternetGatewayRequest(const DetachInternetGatewayRequest &other)
    : EC2Request(new DetachInternetGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachInternetGatewayRequest object.
 */
DetachInternetGatewayRequest::DetachInternetGatewayRequest()
    : EC2Request(new DetachInternetGatewayRequestPrivate(EC2Request::DetachInternetGatewayAction, this))
{

}

bool DetachInternetGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachInternetGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachInternetGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DetachInternetGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DetachInternetGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachInternetGatewayRequestPrivate
 *
 * @brief  Private implementation for DetachInternetGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInternetGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DetachInternetGatewayRequest instance.
 */
DetachInternetGatewayRequestPrivate::DetachInternetGatewayRequestPrivate(
    const EC2Request::Action action, DetachInternetGatewayRequest * const q)
    : DetachInternetGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachInternetGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachInternetGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachInternetGatewayRequest instance.
 */
DetachInternetGatewayRequestPrivate::DetachInternetGatewayRequestPrivate(
    const DetachInternetGatewayRequestPrivate &other, DetachInternetGatewayRequest * const q)
    : DetachInternetGatewayPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
