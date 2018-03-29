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

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteModelRequest
 *
 * @brief  Implements APIGateway DeleteModel requests.
 *
 * @see    APIGatewayClient::deleteModel
 */

/**
 * @brief  Constructs a new DeleteModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : APIGatewayRequest(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : APIGatewayRequest(new DeleteModelRequestPrivate(APIGatewayRequest::DeleteModelAction, this))
{

}

bool DeleteModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteModelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteModelRequestPrivate
 *
 * @brief  Private implementation for DeleteModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteModelRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteModelRequest instance.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const APIGatewayRequest::Action action, DeleteModelRequest * const q)
    : DeleteModelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteModelRequest instance.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : DeleteModelPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
