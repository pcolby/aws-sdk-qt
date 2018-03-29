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

#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartrequest_p.h"
#include "updatedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateDocumentationPartRequest
 *
 * @brief  Implements APIGateway UpdateDocumentationPart requests.
 *
 * @see    APIGatewayClient::updateDocumentationPart
 */

/**
 * @brief  Constructs a new UpdateDocumentationPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest(const UpdateDocumentationPartRequest &other)
    : APIGatewayRequest(new UpdateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDocumentationPartRequest object.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest()
    : APIGatewayRequest(new UpdateDocumentationPartRequestPrivate(APIGatewayRequest::UpdateDocumentationPartAction, this))
{

}

bool UpdateDocumentationPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDocumentationPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDocumentationPartResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDocumentationPartRequestPrivate
 *
 * @brief  Private implementation for UpdateDocumentationPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationPartRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateDocumentationPartRequest instance.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, UpdateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDocumentationPartRequest instance.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const UpdateDocumentationPartRequestPrivate &other, UpdateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
