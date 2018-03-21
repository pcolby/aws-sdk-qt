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

#include "createdocumentationversionrequest.h"
#include "createdocumentationversionrequest_p.h"
#include "createdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateDocumentationVersionRequest
 *
 * @brief  Implements APIGateway CreateDocumentationVersion requests.
 *
 * @see    APIGatewayClient::createDocumentationVersion
 */

/**
 * @brief  Constructs a new CreateDocumentationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest(const CreateDocumentationVersionRequest &other)
    : APIGatewayRequest(new CreateDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDocumentationVersionRequest object.
 */
CreateDocumentationVersionRequest::CreateDocumentationVersionRequest()
    : APIGatewayRequest(new CreateDocumentationVersionRequestPrivate(APIGatewayRequest::CreateDocumentationVersionAction, this))
{

}

bool CreateDocumentationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDocumentationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDocumentationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDocumentationVersionRequestPrivate
 *
 * @brief  Private implementation for CreateDocumentationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationVersionRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateDocumentationVersionRequest instance.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, CreateDocumentationVersionRequest * const q)
    : CreateDocumentationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDocumentationVersionRequest instance.
 */
CreateDocumentationVersionRequestPrivate::CreateDocumentationVersionRequestPrivate(
    const CreateDocumentationVersionRequestPrivate &other, CreateDocumentationVersionRequest * const q)
    : CreateDocumentationVersionPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
