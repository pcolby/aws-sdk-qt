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

#include "deleteintegrationrequest.h"
#include "deleteintegrationrequest_p.h"
#include "deleteintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteIntegrationRequest
 *
 * @brief  Implements APIGateway DeleteIntegration requests.
 *
 * @see    APIGatewayClient::deleteIntegration
 */

/**
 * @brief  Constructs a new DeleteIntegrationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIntegrationResponse::DeleteIntegrationResponse(

/**
 * @brief  Constructs a new DeleteIntegrationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest(const DeleteIntegrationRequest &other)
    : APIGatewayRequest(new DeleteIntegrationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIntegrationRequest object.
 */
DeleteIntegrationRequest::DeleteIntegrationRequest()
    : APIGatewayRequest(new DeleteIntegrationRequestPrivate(APIGatewayRequest::DeleteIntegrationAction, this))
{

}

bool DeleteIntegrationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIntegrationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIntegrationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIntegrationRequestPrivate
 *
 * @brief  Private implementation for DeleteIntegrationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntegrationRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteIntegrationRequest instance.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, DeleteIntegrationRequest * const q)
    : DeleteIntegrationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntegrationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIntegrationRequest instance.
 */
DeleteIntegrationRequestPrivate::DeleteIntegrationRequestPrivate(
    const DeleteIntegrationRequestPrivate &other, DeleteIntegrationRequest * const q)
    : DeleteIntegrationPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
