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

#include "postcommentforcomparedcommitrequest.h"
#include "postcommentforcomparedcommitrequest_p.h"
#include "postcommentforcomparedcommitresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PostCommentForComparedCommitRequest
 *
 * @brief  Implements CodeCommit PostCommentForComparedCommit requests.
 *
 * @see    CodeCommitClient::postCommentForComparedCommit
 */

/**
 * @brief  Constructs a new PostCommentForComparedCommitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PostCommentForComparedCommitRequest::PostCommentForComparedCommitRequest(const PostCommentForComparedCommitRequest &other)
    : CodeCommitRequest(new PostCommentForComparedCommitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PostCommentForComparedCommitRequest object.
 */
PostCommentForComparedCommitRequest::PostCommentForComparedCommitRequest()
    : CodeCommitRequest(new PostCommentForComparedCommitRequestPrivate(CodeCommitRequest::PostCommentForComparedCommitAction, this))
{

}

bool PostCommentForComparedCommitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PostCommentForComparedCommitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PostCommentForComparedCommitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * PostCommentForComparedCommitRequest::response(QNetworkReply * const reply) const
{
    return new PostCommentForComparedCommitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PostCommentForComparedCommitRequestPrivate
 *
 * @brief  Private implementation for PostCommentForComparedCommitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForComparedCommitRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public PostCommentForComparedCommitRequest instance.
 */
PostCommentForComparedCommitRequestPrivate::PostCommentForComparedCommitRequestPrivate(
    const CodeCommitRequest::Action action, PostCommentForComparedCommitRequest * const q)
    : PostCommentForComparedCommitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForComparedCommitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PostCommentForComparedCommitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PostCommentForComparedCommitRequest instance.
 */
PostCommentForComparedCommitRequestPrivate::PostCommentForComparedCommitRequestPrivate(
    const PostCommentForComparedCommitRequestPrivate &other, PostCommentForComparedCommitRequest * const q)
    : PostCommentForComparedCommitPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
