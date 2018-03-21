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

#include "modifyvpcendpointconnectionnotificationrequest.h"
#include "modifyvpcendpointconnectionnotificationrequest_p.h"
#include "modifyvpcendpointconnectionnotificationresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointConnectionNotificationRequest
 *
 * @brief  Implements EC2 ModifyVpcEndpointConnectionNotification requests.
 *
 * @see    EC2Client::modifyVpcEndpointConnectionNotification
 */

/**
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointConnectionNotificationResponse::ModifyVpcEndpointConnectionNotificationResponse(

/**
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcEndpointConnectionNotificationRequest::ModifyVpcEndpointConnectionNotificationRequest(const ModifyVpcEndpointConnectionNotificationRequest &other)
    : EC2Request(new ModifyVpcEndpointConnectionNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationRequest object.
 */
ModifyVpcEndpointConnectionNotificationRequest::ModifyVpcEndpointConnectionNotificationRequest()
    : EC2Request(new ModifyVpcEndpointConnectionNotificationRequestPrivate(EC2Request::ModifyVpcEndpointConnectionNotificationAction, this))
{

}

bool ModifyVpcEndpointConnectionNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcEndpointConnectionNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcEndpointConnectionNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyVpcEndpointConnectionNotificationRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointConnectionNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointConnectionNotificationRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointConnectionNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcEndpointConnectionNotificationRequest instance.
 */
ModifyVpcEndpointConnectionNotificationRequestPrivate::ModifyVpcEndpointConnectionNotificationRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointConnectionNotificationRequest * const q)
    : ModifyVpcEndpointConnectionNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcEndpointConnectionNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcEndpointConnectionNotificationRequest instance.
 */
ModifyVpcEndpointConnectionNotificationRequestPrivate::ModifyVpcEndpointConnectionNotificationRequestPrivate(
    const ModifyVpcEndpointConnectionNotificationRequestPrivate &other, ModifyVpcEndpointConnectionNotificationRequest * const q)
    : ModifyVpcEndpointConnectionNotificationPrivate(other, q)
{

}
