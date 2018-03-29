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

#include "getdocumentationpartrequest.h"
#include "getdocumentationpartrequest_p.h"
#include "getdocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDocumentationPartRequest
 *
 * @brief  Implements APIGateway GetDocumentationPart requests.
 *
 * @see    APIGatewayClient::getDocumentationPart
 */

/**
 * @brief  Constructs a new GetDocumentationPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest(const GetDocumentationPartRequest &other)
    : APIGatewayRequest(new GetDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentationPartRequest object.
 */
GetDocumentationPartRequest::GetDocumentationPartRequest()
    : APIGatewayRequest(new GetDocumentationPartRequestPrivate(APIGatewayRequest::GetDocumentationPartAction, this))
{

}

bool GetDocumentationPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentationPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentationPartResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentationPartRequestPrivate
 *
 * @brief  Private implementation for GetDocumentationPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDocumentationPartRequest instance.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationPartRequest * const q)
    : GetDocumentationPartPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentationPartRequest instance.
 */
GetDocumentationPartRequestPrivate::GetDocumentationPartRequestPrivate(
    const GetDocumentationPartRequestPrivate &other, GetDocumentationPartRequest * const q)
    : GetDocumentationPartPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
