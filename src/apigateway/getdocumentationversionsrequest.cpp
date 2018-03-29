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

#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsrequest_p.h"
#include "getdocumentationversionsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDocumentationVersionsRequest
 *
 * @brief  Implements APIGateway GetDocumentationVersions requests.
 *
 * @see    APIGatewayClient::getDocumentationVersions
 */

/**
 * @brief  Constructs a new GetDocumentationVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest(const GetDocumentationVersionsRequest &other)
    : APIGatewayRequest(new GetDocumentationVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentationVersionsRequest object.
 */
GetDocumentationVersionsRequest::GetDocumentationVersionsRequest()
    : APIGatewayRequest(new GetDocumentationVersionsRequestPrivate(APIGatewayRequest::GetDocumentationVersionsAction, this))
{

}

bool GetDocumentationVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentationVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentationVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentationVersionsRequestPrivate
 *
 * @brief  Private implementation for GetDocumentationVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDocumentationVersionsRequest instance.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationVersionsRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentationVersionsRequest instance.
 */
GetDocumentationVersionsRequestPrivate::GetDocumentationVersionsRequestPrivate(
    const GetDocumentationVersionsRequestPrivate &other, GetDocumentationVersionsRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
