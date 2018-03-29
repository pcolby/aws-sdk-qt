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

#include "postcommentreplyrequest.h"
#include "postcommentreplyrequest_p.h"
#include "postcommentreplyresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PostCommentReplyRequest
 *
 * @brief  Implements CodeCommit PostCommentReply requests.
 *
 * @see    CodeCommitClient::postCommentReply
 */

/**
 * @brief  Constructs a new PostCommentReplyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostCommentReplyRequest::PostCommentReplyRequest(const PostCommentReplyRequest &other)
    : CodeCommitRequest(new PostCommentReplyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PostCommentReplyRequest object.
 */
PostCommentReplyRequest::PostCommentReplyRequest()
    : CodeCommitRequest(new PostCommentReplyRequestPrivate(CodeCommitRequest::PostCommentReplyAction, this))
{

}

bool PostCommentReplyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PostCommentReplyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostCommentReplyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * PostCommentReplyRequest::response(QNetworkReply * const reply) const
{
    return new PostCommentReplyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PostCommentReplyRequestPrivate
 *
 * @brief  Private implementation for PostCommentReplyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentReplyRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public PostCommentReplyRequest instance.
 */
PostCommentReplyRequestPrivate::PostCommentReplyRequestPrivate(
    const CodeCommitRequest::Action action, PostCommentReplyRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentReplyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostCommentReplyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostCommentReplyRequest instance.
 */
PostCommentReplyRequestPrivate::PostCommentReplyRequestPrivate(
    const PostCommentReplyRequestPrivate &other, PostCommentReplyRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
