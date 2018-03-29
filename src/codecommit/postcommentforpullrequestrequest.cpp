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

#include "postcommentforpullrequestrequest.h"
#include "postcommentforpullrequestrequest_p.h"
#include "postcommentforpullrequestresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  PostCommentForPullRequestRequest
 *
 * @brief  Implements CodeCommit PostCommentForPullRequest requests.
 *
 * @see    CodeCommitClient::postCommentForPullRequest
 */

/**
 * @brief  Constructs a new PostCommentForPullRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostCommentForPullRequestRequest::PostCommentForPullRequestRequest(const PostCommentForPullRequestRequest &other)
    : CodeCommitRequest(new PostCommentForPullRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PostCommentForPullRequestRequest object.
 */
PostCommentForPullRequestRequest::PostCommentForPullRequestRequest()
    : CodeCommitRequest(new PostCommentForPullRequestRequestPrivate(CodeCommitRequest::PostCommentForPullRequestAction, this))
{

}

bool PostCommentForPullRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PostCommentForPullRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostCommentForPullRequestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * PostCommentForPullRequestRequest::response(QNetworkReply * const reply) const
{
    return new PostCommentForPullRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PostCommentForPullRequestRequestPrivate
 *
 * @brief  Private implementation for PostCommentForPullRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForPullRequestRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public PostCommentForPullRequestRequest instance.
 */
PostCommentForPullRequestRequestPrivate::PostCommentForPullRequestRequestPrivate(
    const CodeCommitRequest::Action action, PostCommentForPullRequestRequest * const q)
    : PostCommentForPullRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForPullRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostCommentForPullRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostCommentForPullRequestRequest instance.
 */
PostCommentForPullRequestRequestPrivate::PostCommentForPullRequestRequestPrivate(
    const PostCommentForPullRequestRequestPrivate &other, PostCommentForPullRequestRequest * const q)
    : PostCommentForPullRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
