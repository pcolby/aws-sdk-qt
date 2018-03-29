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

#include "deletedocumentationpartrequest.h"
#include "deletedocumentationpartrequest_p.h"
#include "deletedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteDocumentationPartRequest
 *
 * @brief  Implements APIGateway DeleteDocumentationPart requests.
 *
 * @see    APIGatewayClient::deleteDocumentationPart
 */

/**
 * @brief  Constructs a new DeleteDocumentationPartRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest(const DeleteDocumentationPartRequest &other)
    : APIGatewayRequest(new DeleteDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDocumentationPartRequest object.
 */
DeleteDocumentationPartRequest::DeleteDocumentationPartRequest()
    : APIGatewayRequest(new DeleteDocumentationPartRequestPrivate(APIGatewayRequest::DeleteDocumentationPartAction, this))
{

}

bool DeleteDocumentationPartRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDocumentationPartResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDocumentationPartResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationPartResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDocumentationPartRequestPrivate
 *
 * @brief  Private implementation for DeleteDocumentationPartRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentationPartRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteDocumentationPartRequest instance.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentationPartRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationPartRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDocumentationPartRequest instance.
 */
DeleteDocumentationPartRequestPrivate::DeleteDocumentationPartRequestPrivate(
    const DeleteDocumentationPartRequestPrivate &other, DeleteDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
