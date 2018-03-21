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

#include "updategatewaysoftwarenowrequest.h"
#include "updategatewaysoftwarenowrequest_p.h"
#include "updategatewaysoftwarenowresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateGatewaySoftwareNowRequest
 *
 * @brief  Implements StorageGateway UpdateGatewaySoftwareNow requests.
 *
 * @see    StorageGatewayClient::updateGatewaySoftwareNow
 */

/**
 * @brief  Constructs a new UpdateGatewaySoftwareNowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGatewaySoftwareNowResponse::UpdateGatewaySoftwareNowResponse(

/**
 * @brief  Constructs a new UpdateGatewaySoftwareNowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGatewaySoftwareNowRequest::UpdateGatewaySoftwareNowRequest(const UpdateGatewaySoftwareNowRequest &other)
    : StorageGatewayRequest(new UpdateGatewaySoftwareNowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGatewaySoftwareNowRequest object.
 */
UpdateGatewaySoftwareNowRequest::UpdateGatewaySoftwareNowRequest()
    : StorageGatewayRequest(new UpdateGatewaySoftwareNowRequestPrivate(StorageGatewayRequest::UpdateGatewaySoftwareNowAction, this))
{

}

bool UpdateGatewaySoftwareNowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGatewaySoftwareNowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGatewaySoftwareNowResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateGatewaySoftwareNowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewaySoftwareNowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGatewaySoftwareNowRequestPrivate
 *
 * @brief  Private implementation for UpdateGatewaySoftwareNowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewaySoftwareNowRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateGatewaySoftwareNowRequest instance.
 */
UpdateGatewaySoftwareNowRequestPrivate::UpdateGatewaySoftwareNowRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateGatewaySoftwareNowRequest * const q)
    : UpdateGatewaySoftwareNowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewaySoftwareNowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewaySoftwareNowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGatewaySoftwareNowRequest instance.
 */
UpdateGatewaySoftwareNowRequestPrivate::UpdateGatewaySoftwareNowRequestPrivate(
    const UpdateGatewaySoftwareNowRequestPrivate &other, UpdateGatewaySoftwareNowRequest * const q)
    : UpdateGatewaySoftwareNowPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
