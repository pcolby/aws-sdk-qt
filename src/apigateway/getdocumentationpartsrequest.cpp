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

#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsrequest_p.h"
#include "getdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDocumentationPartsRequest
 *
 * @brief  Implements APIGateway GetDocumentationParts requests.
 *
 * @see    APIGatewayClient::getDocumentationParts
 */

/**
 * @brief  Constructs a new GetDocumentationPartsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest(const GetDocumentationPartsRequest &other)
    : APIGatewayRequest(new GetDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentationPartsRequest object.
 */
GetDocumentationPartsRequest::GetDocumentationPartsRequest()
    : APIGatewayRequest(new GetDocumentationPartsRequestPrivate(APIGatewayRequest::GetDocumentationPartsAction, this))
{

}

bool GetDocumentationPartsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentationPartsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentationPartsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationPartsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentationPartsRequestPrivate
 *
 * @brief  Private implementation for GetDocumentationPartsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDocumentationPartsRequest instance.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationPartsRequest * const q)
    : GetDocumentationPartsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationPartsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentationPartsRequest instance.
 */
GetDocumentationPartsRequestPrivate::GetDocumentationPartsRequestPrivate(
    const GetDocumentationPartsRequestPrivate &other, GetDocumentationPartsRequest * const q)
    : GetDocumentationPartsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
