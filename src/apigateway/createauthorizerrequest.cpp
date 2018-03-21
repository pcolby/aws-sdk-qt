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

#include "createauthorizerrequest.h"
#include "createauthorizerrequest_p.h"
#include "createauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateAuthorizerRequest
 *
 * @brief  Implements APIGateway CreateAuthorizer requests.
 *
 * @see    APIGatewayClient::createAuthorizer
 */

/**
 * @brief  Constructs a new CreateAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest(const CreateAuthorizerRequest &other)
    : APIGatewayRequest(new CreateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAuthorizerRequest object.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest()
    : APIGatewayRequest(new CreateAuthorizerRequestPrivate(APIGatewayRequest::CreateAuthorizerAction, this))
{

}

bool CreateAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAuthorizerRequestPrivate
 *
 * @brief  Private implementation for CreateAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAuthorizerRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateAuthorizerRequest instance.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const APIGatewayRequest::Action action, CreateAuthorizerRequest * const q)
    : CreateAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAuthorizerRequest instance.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const CreateAuthorizerRequestPrivate &other, CreateAuthorizerRequest * const q)
    : CreateAuthorizerPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
