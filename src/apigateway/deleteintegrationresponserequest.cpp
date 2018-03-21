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

#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponserequest_p.h"
#include "deleteintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteIntegrationResponseRequest
 *
 * @brief  Implements APIGateway DeleteIntegrationResponse requests.
 *
 * @see    APIGatewayClient::deleteIntegrationResponse
 */

/**
 * @brief  Constructs a new DeleteIntegrationResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest(const DeleteIntegrationResponseRequest &other)
    : APIGatewayRequest(new DeleteIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIntegrationResponseRequest object.
 */
DeleteIntegrationResponseRequest::DeleteIntegrationResponseRequest()
    : APIGatewayRequest(new DeleteIntegrationResponseRequestPrivate(APIGatewayRequest::DeleteIntegrationResponseAction, this))
{

}

bool DeleteIntegrationResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIntegrationResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIntegrationResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIntegrationResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIntegrationResponseRequestPrivate
 *
 * @brief  Private implementation for DeleteIntegrationResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntegrationResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteIntegrationResponseRequest instance.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const APIGatewayRequest::Action action, DeleteIntegrationResponseRequest * const q)
    : DeleteIntegrationResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIntegrationResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIntegrationResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIntegrationResponseRequest instance.
 */
DeleteIntegrationResponseRequestPrivate::DeleteIntegrationResponseRequestPrivate(
    const DeleteIntegrationResponseRequestPrivate &other, DeleteIntegrationResponseRequest * const q)
    : DeleteIntegrationResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
