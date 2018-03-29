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

#include "updatecommentrequest.h"
#include "updatecommentrequest_p.h"
#include "updatecommentresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateCommentRequest
 *
 * @brief  Implements CodeCommit UpdateComment requests.
 *
 * @see    CodeCommitClient::updateComment
 */

/**
 * @brief  Constructs a new UpdateCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCommentRequest::UpdateCommentRequest(const UpdateCommentRequest &other)
    : CodeCommitRequest(new UpdateCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCommentRequest object.
 */
UpdateCommentRequest::UpdateCommentRequest()
    : CodeCommitRequest(new UpdateCommentRequestPrivate(CodeCommitRequest::UpdateCommentAction, this))
{

}

bool UpdateCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * UpdateCommentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCommentRequestPrivate
 *
 * @brief  Private implementation for UpdateCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCommentRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdateCommentRequest instance.
 */
UpdateCommentRequestPrivate::UpdateCommentRequestPrivate(
    const CodeCommitRequest::Action action, UpdateCommentRequest * const q)
    : UpdateCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCommentRequest instance.
 */
UpdateCommentRequestPrivate::UpdateCommentRequestPrivate(
    const UpdateCommentRequestPrivate &other, UpdateCommentRequest * const q)
    : UpdateCommentPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
