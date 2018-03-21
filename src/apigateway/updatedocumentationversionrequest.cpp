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

#include "updatedocumentationversionrequest.h"
#include "updatedocumentationversionrequest_p.h"
#include "updatedocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateDocumentationVersionRequest
 *
 * @brief  Implements APIGateway UpdateDocumentationVersion requests.
 *
 * @see    APIGatewayClient::updateDocumentationVersion
 */

/**
 * @brief  Constructs a new UpdateDocumentationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDocumentationVersionRequest::UpdateDocumentationVersionRequest(const UpdateDocumentationVersionRequest &other)
    : APIGatewayRequest(new UpdateDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDocumentationVersionRequest object.
 */
UpdateDocumentationVersionRequest::UpdateDocumentationVersionRequest()
    : APIGatewayRequest(new UpdateDocumentationVersionRequestPrivate(APIGatewayRequest::UpdateDocumentationVersionAction, this))
{

}

bool UpdateDocumentationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDocumentationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDocumentationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDocumentationVersionRequestPrivate
 *
 * @brief  Private implementation for UpdateDocumentationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationVersionRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateDocumentationVersionRequest instance.
 */
UpdateDocumentationVersionRequestPrivate::UpdateDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, UpdateDocumentationVersionRequest * const q)
    : UpdateDocumentationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDocumentationVersionRequest instance.
 */
UpdateDocumentationVersionRequestPrivate::UpdateDocumentationVersionRequestPrivate(
    const UpdateDocumentationVersionRequestPrivate &other, UpdateDocumentationVersionRequest * const q)
    : UpdateDocumentationVersionPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
