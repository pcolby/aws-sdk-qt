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

#include "deletedocumentationversionrequest.h"
#include "deletedocumentationversionrequest_p.h"
#include "deletedocumentationversionresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteDocumentationVersionRequest
 *
 * @brief  Implements APIGateway DeleteDocumentationVersion requests.
 *
 * @see    APIGatewayClient::deleteDocumentationVersion
 */

/**
 * @brief  Constructs a new DeleteDocumentationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDocumentationVersionResponse::DeleteDocumentationVersionResponse(

/**
 * @brief  Constructs a new DeleteDocumentationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest(const DeleteDocumentationVersionRequest &other)
    : APIGatewayRequest(new DeleteDocumentationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDocumentationVersionRequest object.
 */
DeleteDocumentationVersionRequest::DeleteDocumentationVersionRequest()
    : APIGatewayRequest(new DeleteDocumentationVersionRequestPrivate(APIGatewayRequest::DeleteDocumentationVersionAction, this))
{

}

bool DeleteDocumentationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDocumentationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDocumentationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteDocumentationVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDocumentationVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteDocumentationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentationVersionRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteDocumentationVersionRequest instance.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDocumentationVersionRequest * const q)
    : DeleteDocumentationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDocumentationVersionRequest instance.
 */
DeleteDocumentationVersionRequestPrivate::DeleteDocumentationVersionRequestPrivate(
    const DeleteDocumentationVersionRequestPrivate &other, DeleteDocumentationVersionRequest * const q)
    : DeleteDocumentationVersionPrivate(other, q)
{

}
