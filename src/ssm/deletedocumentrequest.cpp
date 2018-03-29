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

#include "deletedocumentrequest.h"
#include "deletedocumentrequest_p.h"
#include "deletedocumentresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeleteDocumentRequest
 *
 * @brief  Implements SSM DeleteDocument requests.
 *
 * @see    SSMClient::deleteDocument
 */

/**
 * @brief  Constructs a new DeleteDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDocumentRequest::DeleteDocumentRequest(const DeleteDocumentRequest &other)
    : SSMRequest(new DeleteDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDocumentRequest object.
 */
DeleteDocumentRequest::DeleteDocumentRequest()
    : SSMRequest(new DeleteDocumentRequestPrivate(SSMRequest::DeleteDocumentAction, this))
{

}

bool DeleteDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDocumentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeleteDocumentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDocumentRequestPrivate
 *
 * @brief  Private implementation for DeleteDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeleteDocumentRequest instance.
 */
DeleteDocumentRequestPrivate::DeleteDocumentRequestPrivate(
    const SSMRequest::Action action, DeleteDocumentRequest * const q)
    : DeleteDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDocumentRequest instance.
 */
DeleteDocumentRequestPrivate::DeleteDocumentRequestPrivate(
    const DeleteDocumentRequestPrivate &other, DeleteDocumentRequest * const q)
    : DeleteDocumentPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
