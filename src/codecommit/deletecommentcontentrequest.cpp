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

#include "deletecommentcontentrequest.h"
#include "deletecommentcontentrequest_p.h"
#include "deletecommentcontentresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DeleteCommentContentRequest
 *
 * @brief  Implements CodeCommit DeleteCommentContent requests.
 *
 * @see    CodeCommitClient::deleteCommentContent
 */

/**
 * @brief  Constructs a new DeleteCommentContentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCommentContentRequest::DeleteCommentContentRequest(const DeleteCommentContentRequest &other)
    : CodeCommitRequest(new DeleteCommentContentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCommentContentRequest object.
 */
DeleteCommentContentRequest::DeleteCommentContentRequest()
    : CodeCommitRequest(new DeleteCommentContentRequestPrivate(CodeCommitRequest::DeleteCommentContentAction, this))
{

}

bool DeleteCommentContentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCommentContentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCommentContentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCommentContentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCommentContentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCommentContentRequestPrivate
 *
 * @brief  Private implementation for DeleteCommentContentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentContentRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public DeleteCommentContentRequest instance.
 */
DeleteCommentContentRequestPrivate::DeleteCommentContentRequestPrivate(
    const CodeCommitRequest::Action action, DeleteCommentContentRequest * const q)
    : DeleteCommentContentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentContentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCommentContentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCommentContentRequest instance.
 */
DeleteCommentContentRequestPrivate::DeleteCommentContentRequestPrivate(
    const DeleteCommentContentRequestPrivate &other, DeleteCommentContentRequest * const q)
    : DeleteCommentContentPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
