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

#include "updateintegrationresponserequest.h"
#include "updateintegrationresponserequest_p.h"
#include "updateintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateIntegrationResponseRequest
 *
 * @brief  Implements APIGateway UpdateIntegrationResponse requests.
 *
 * @see    APIGatewayClient::updateIntegrationResponse
 */

/**
 * @brief  Constructs a new UpdateIntegrationResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIntegrationResponseResponse::UpdateIntegrationResponseResponse(

/**
 * @brief  Constructs a new UpdateIntegrationResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest(const UpdateIntegrationResponseRequest &other)
    : APIGatewayRequest(new UpdateIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIntegrationResponseRequest object.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest()
    : APIGatewayRequest(new UpdateIntegrationResponseRequestPrivate(APIGatewayRequest::UpdateIntegrationResponseAction, this))
{

}

bool UpdateIntegrationResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIntegrationResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIntegrationResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIntegrationResponseRequestPrivate
 *
 * @brief  Private implementation for UpdateIntegrationResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateIntegrationResponseRequest instance.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const APIGatewayRequest::Action action, UpdateIntegrationResponseRequest * const q)
    : UpdateIntegrationResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIntegrationResponseRequest instance.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const UpdateIntegrationResponseRequestPrivate &other, UpdateIntegrationResponseRequest * const q)
    : UpdateIntegrationResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
