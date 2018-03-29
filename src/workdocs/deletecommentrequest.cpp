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

#include "deletecommentrequest.h"
#include "deletecommentrequest_p.h"
#include "deletecommentresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteCommentRequest
 *
 * @brief  Implements WorkDocs DeleteComment requests.
 *
 * @see    WorkDocsClient::deleteComment
 */

/**
 * @brief  Constructs a new DeleteCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCommentRequest::DeleteCommentRequest(const DeleteCommentRequest &other)
    : WorkDocsRequest(new DeleteCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCommentRequest object.
 */
DeleteCommentRequest::DeleteCommentRequest()
    : WorkDocsRequest(new DeleteCommentRequestPrivate(WorkDocsRequest::DeleteCommentAction, this))
{

}

bool DeleteCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteCommentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCommentRequestPrivate
 *
 * @brief  Private implementation for DeleteCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteCommentRequest instance.
 */
DeleteCommentRequestPrivate::DeleteCommentRequestPrivate(
    const WorkDocsRequest::Action action, DeleteCommentRequest * const q)
    : DeleteCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCommentRequest instance.
 */
DeleteCommentRequestPrivate::DeleteCommentRequestPrivate(
    const DeleteCommentRequestPrivate &other, DeleteCommentRequest * const q)
    : DeleteCommentPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
