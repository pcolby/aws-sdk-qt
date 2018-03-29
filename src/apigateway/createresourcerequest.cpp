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

#include "createresourcerequest.h"
#include "createresourcerequest_p.h"
#include "createresourceresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateResourceRequest
 *
 * @brief  Implements APIGateway CreateResource requests.
 *
 * @see    APIGatewayClient::createResource
 */

/**
 * @brief  Constructs a new CreateResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceRequest::CreateResourceRequest(const CreateResourceRequest &other)
    : APIGatewayRequest(new CreateResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceRequest object.
 */
CreateResourceRequest::CreateResourceRequest()
    : APIGatewayRequest(new CreateResourceRequestPrivate(APIGatewayRequest::CreateResourceAction, this))
{

}

bool CreateResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceRequestPrivate
 *
 * @brief  Private implementation for CreateResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateResourceRequest instance.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const APIGatewayRequest::Action action, CreateResourceRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceRequest instance.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CreateResourceRequestPrivate &other, CreateResourceRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
