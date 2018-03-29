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

#include "deleteauthorizerrequest.h"
#include "deleteauthorizerrequest_p.h"
#include "deleteauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteAuthorizerRequest
 *
 * @brief  Implements APIGateway DeleteAuthorizer requests.
 *
 * @see    APIGatewayClient::deleteAuthorizer
 */

/**
 * @brief  Constructs a new DeleteAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest(const DeleteAuthorizerRequest &other)
    : APIGatewayRequest(new DeleteAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAuthorizerRequest object.
 */
DeleteAuthorizerRequest::DeleteAuthorizerRequest()
    : APIGatewayRequest(new DeleteAuthorizerRequestPrivate(APIGatewayRequest::DeleteAuthorizerAction, this))
{

}

bool DeleteAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAuthorizerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAuthorizerRequestPrivate
 *
 * @brief  Private implementation for DeleteAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAuthorizerRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteAuthorizerRequest instance.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const APIGatewayRequest::Action action, DeleteAuthorizerRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAuthorizerRequest instance.
 */
DeleteAuthorizerRequestPrivate::DeleteAuthorizerRequestPrivate(
    const DeleteAuthorizerRequestPrivate &other, DeleteAuthorizerRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
