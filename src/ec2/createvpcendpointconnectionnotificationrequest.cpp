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

#include "createvpcendpointconnectionnotificationrequest.h"
#include "createvpcendpointconnectionnotificationrequest_p.h"
#include "createvpcendpointconnectionnotificationresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcEndpointConnectionNotificationRequest
 *
 * @brief  Implements EC2 CreateVpcEndpointConnectionNotification requests.
 *
 * @see    EC2Client::createVpcEndpointConnectionNotification
 */

/**
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcEndpointConnectionNotificationResponse::CreateVpcEndpointConnectionNotificationResponse(

/**
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcEndpointConnectionNotificationRequest::CreateVpcEndpointConnectionNotificationRequest(const CreateVpcEndpointConnectionNotificationRequest &other)
    : EC2Request(new CreateVpcEndpointConnectionNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationRequest object.
 */
CreateVpcEndpointConnectionNotificationRequest::CreateVpcEndpointConnectionNotificationRequest()
    : EC2Request(new CreateVpcEndpointConnectionNotificationRequestPrivate(EC2Request::CreateVpcEndpointConnectionNotificationAction, this))
{

}

bool CreateVpcEndpointConnectionNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcEndpointConnectionNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcEndpointConnectionNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVpcEndpointConnectionNotificationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcEndpointConnectionNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcEndpointConnectionNotificationRequestPrivate
 *
 * @brief  Private implementation for CreateVpcEndpointConnectionNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVpcEndpointConnectionNotificationRequest instance.
 */
CreateVpcEndpointConnectionNotificationRequestPrivate::CreateVpcEndpointConnectionNotificationRequestPrivate(
    const EC2Request::Action action, CreateVpcEndpointConnectionNotificationRequest * const q)
    : CreateVpcEndpointConnectionNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcEndpointConnectionNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcEndpointConnectionNotificationRequest instance.
 */
CreateVpcEndpointConnectionNotificationRequestPrivate::CreateVpcEndpointConnectionNotificationRequestPrivate(
    const CreateVpcEndpointConnectionNotificationRequestPrivate &other, CreateVpcEndpointConnectionNotificationRequest * const q)
    : CreateVpcEndpointConnectionNotificationPrivate(other, q)
{

}
