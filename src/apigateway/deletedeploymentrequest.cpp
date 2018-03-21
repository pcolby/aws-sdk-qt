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

#include "deletedeploymentrequest.h"
#include "deletedeploymentrequest_p.h"
#include "deletedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteDeploymentRequest
 *
 * @brief  Implements APIGateway DeleteDeployment requests.
 *
 * @see    APIGatewayClient::deleteDeployment
 */

/**
 * @brief  Constructs a new DeleteDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeploymentResponse::DeleteDeploymentResponse(

/**
 * @brief  Constructs a new DeleteDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest(const DeleteDeploymentRequest &other)
    : APIGatewayRequest(new DeleteDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeploymentRequest object.
 */
DeleteDeploymentRequest::DeleteDeploymentRequest()
    : APIGatewayRequest(new DeleteDeploymentRequestPrivate(APIGatewayRequest::DeleteDeploymentAction, this))
{

}

bool DeleteDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeploymentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeploymentRequestPrivate
 *
 * @brief  Private implementation for DeleteDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteDeploymentRequest instance.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDeploymentRequest * const q)
    : DeleteDeploymentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeploymentRequest instance.
 */
DeleteDeploymentRequestPrivate::DeleteDeploymentRequestPrivate(
    const DeleteDeploymentRequestPrivate &other, DeleteDeploymentRequest * const q)
    : DeleteDeploymentPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
