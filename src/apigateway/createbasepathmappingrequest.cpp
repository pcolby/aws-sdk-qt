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

#include "createbasepathmappingrequest.h"
#include "createbasepathmappingrequest_p.h"
#include "createbasepathmappingresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateBasePathMappingRequest
 *
 * @brief  Implements APIGateway CreateBasePathMapping requests.
 *
 * @see    APIGatewayClient::createBasePathMapping
 */

/**
 * @brief  Constructs a new CreateBasePathMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBasePathMappingRequest::CreateBasePathMappingRequest(const CreateBasePathMappingRequest &other)
    : APIGatewayRequest(new CreateBasePathMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBasePathMappingRequest object.
 */
CreateBasePathMappingRequest::CreateBasePathMappingRequest()
    : APIGatewayRequest(new CreateBasePathMappingRequestPrivate(APIGatewayRequest::CreateBasePathMappingAction, this))
{

}

bool CreateBasePathMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBasePathMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBasePathMappingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBasePathMappingRequest::response(QNetworkReply * const reply) const
{
    return new CreateBasePathMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBasePathMappingRequestPrivate
 *
 * @brief  Private implementation for CreateBasePathMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBasePathMappingRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateBasePathMappingRequest instance.
 */
CreateBasePathMappingRequestPrivate::CreateBasePathMappingRequestPrivate(
    const APIGatewayRequest::Action action, CreateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBasePathMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBasePathMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBasePathMappingRequest instance.
 */
CreateBasePathMappingRequestPrivate::CreateBasePathMappingRequestPrivate(
    const CreateBasePathMappingRequestPrivate &other, CreateBasePathMappingRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
