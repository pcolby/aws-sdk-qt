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

#include "updategatewayinformationrequest.h"
#include "updategatewayinformationrequest_p.h"
#include "updategatewayinformationresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateGatewayInformationRequest
 *
 * @brief  Implements StorageGateway UpdateGatewayInformation requests.
 *
 * @see    StorageGatewayClient::updateGatewayInformation
 */

/**
 * @brief  Constructs a new UpdateGatewayInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGatewayInformationResponse::UpdateGatewayInformationResponse(

/**
 * @brief  Constructs a new UpdateGatewayInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGatewayInformationRequest::UpdateGatewayInformationRequest(const UpdateGatewayInformationRequest &other)
    : StorageGatewayRequest(new UpdateGatewayInformationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGatewayInformationRequest object.
 */
UpdateGatewayInformationRequest::UpdateGatewayInformationRequest()
    : StorageGatewayRequest(new UpdateGatewayInformationRequestPrivate(StorageGatewayRequest::UpdateGatewayInformationAction, this))
{

}

bool UpdateGatewayInformationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGatewayInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGatewayInformationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateGatewayInformationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayInformationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGatewayInformationRequestPrivate
 *
 * @brief  Private implementation for UpdateGatewayInformationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewayInformationRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateGatewayInformationRequest instance.
 */
UpdateGatewayInformationRequestPrivate::UpdateGatewayInformationRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateGatewayInformationRequest * const q)
    : UpdateGatewayInformationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGatewayInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGatewayInformationRequest instance.
 */
UpdateGatewayInformationRequestPrivate::UpdateGatewayInformationRequestPrivate(
    const UpdateGatewayInformationRequestPrivate &other, UpdateGatewayInformationRequest * const q)
    : UpdateGatewayInformationPrivate(other, q)
{

}
