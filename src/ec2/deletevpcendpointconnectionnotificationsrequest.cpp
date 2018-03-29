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

#include "deletevpcendpointconnectionnotificationsrequest.h"
#include "deletevpcendpointconnectionnotificationsrequest_p.h"
#include "deletevpcendpointconnectionnotificationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointConnectionNotificationsRequest
 *
 * @brief  Implements EC2 DeleteVpcEndpointConnectionNotifications requests.
 *
 * @see    EC2Client::deleteVpcEndpointConnectionNotifications
 */

/**
 * @brief  Constructs a new DeleteVpcEndpointConnectionNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcEndpointConnectionNotificationsRequest::DeleteVpcEndpointConnectionNotificationsRequest(const DeleteVpcEndpointConnectionNotificationsRequest &other)
    : EC2Request(new DeleteVpcEndpointConnectionNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcEndpointConnectionNotificationsRequest object.
 */
DeleteVpcEndpointConnectionNotificationsRequest::DeleteVpcEndpointConnectionNotificationsRequest()
    : EC2Request(new DeleteVpcEndpointConnectionNotificationsRequestPrivate(EC2Request::DeleteVpcEndpointConnectionNotificationsAction, this))
{

}

bool DeleteVpcEndpointConnectionNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcEndpointConnectionNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcEndpointConnectionNotificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpcEndpointConnectionNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcEndpointConnectionNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointConnectionNotificationsRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointConnectionNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointConnectionNotificationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpcEndpointConnectionNotificationsRequest instance.
 */
DeleteVpcEndpointConnectionNotificationsRequestPrivate::DeleteVpcEndpointConnectionNotificationsRequestPrivate(
    const EC2Request::Action action, DeleteVpcEndpointConnectionNotificationsRequest * const q)
    : DeleteVpcEndpointConnectionNotificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointConnectionNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcEndpointConnectionNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcEndpointConnectionNotificationsRequest instance.
 */
DeleteVpcEndpointConnectionNotificationsRequestPrivate::DeleteVpcEndpointConnectionNotificationsRequestPrivate(
    const DeleteVpcEndpointConnectionNotificationsRequestPrivate &other, DeleteVpcEndpointConnectionNotificationsRequest * const q)
    : DeleteVpcEndpointConnectionNotificationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
