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

#include "getdocumentationversionrequest.h"
#include "getdocumentationversionrequest_p.h"
#include "getdocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDocumentationVersionRequest
 *
 * @brief  Implements APIGateway GetDocumentationVersion requests.
 *
 * @see    APIGatewayClient::getDocumentationVersion
 */

/**
 * @brief  Constructs a new GetDocumentationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest(const GetDocumentationVersionRequest &other)
    : APIGatewayRequest(new GetDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDocumentationVersionRequest object.
 */
GetDocumentationVersionRequest::GetDocumentationVersionRequest()
    : APIGatewayRequest(new GetDocumentationVersionRequestPrivate(APIGatewayRequest::GetDocumentationVersionAction, this))
{

}

bool GetDocumentationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDocumentationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDocumentationVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDocumentationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDocumentationVersionRequestPrivate
 *
 * @brief  Private implementation for GetDocumentationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDocumentationVersionRequest instance.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, GetDocumentationVersionRequest * const q)
    : GetDocumentationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDocumentationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDocumentationVersionRequest instance.
 */
GetDocumentationVersionRequestPrivate::GetDocumentationVersionRequestPrivate(
    const GetDocumentationVersionRequestPrivate &other, GetDocumentationVersionRequest * const q)
    : GetDocumentationVersionPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
