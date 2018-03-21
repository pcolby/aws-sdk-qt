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

#include "importdocumentationpartsrequest.h"
#include "importdocumentationpartsrequest_p.h"
#include "importdocumentationpartsresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  ImportDocumentationPartsRequest
 *
 * @brief  Implements APIGateway ImportDocumentationParts requests.
 *
 * @see    APIGatewayClient::importDocumentationParts
 */

/**
 * @brief  Constructs a new ImportDocumentationPartsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest(const ImportDocumentationPartsRequest &other)
    : APIGatewayRequest(new ImportDocumentationPartsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportDocumentationPartsRequest object.
 */
ImportDocumentationPartsRequest::ImportDocumentationPartsRequest()
    : APIGatewayRequest(new ImportDocumentationPartsRequestPrivate(APIGatewayRequest::ImportDocumentationPartsAction, this))
{

}

bool ImportDocumentationPartsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportDocumentationPartsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportDocumentationPartsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * ImportDocumentationPartsRequest::response(QNetworkReply * const reply) const
{
    return new ImportDocumentationPartsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportDocumentationPartsRequestPrivate
 *
 * @brief  Private implementation for ImportDocumentationPartsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportDocumentationPartsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public ImportDocumentationPartsRequest instance.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const APIGatewayRequest::Action action, ImportDocumentationPartsRequest * const q)
    : ImportDocumentationPartsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportDocumentationPartsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportDocumentationPartsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportDocumentationPartsRequest instance.
 */
ImportDocumentationPartsRequestPrivate::ImportDocumentationPartsRequestPrivate(
    const ImportDocumentationPartsRequestPrivate &other, ImportDocumentationPartsRequest * const q)
    : ImportDocumentationPartsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
