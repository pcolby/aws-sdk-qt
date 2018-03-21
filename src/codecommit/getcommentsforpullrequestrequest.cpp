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

#include "getcommentsforpullrequestrequest.h"
#include "getcommentsforpullrequestrequest_p.h"
#include "getcommentsforpullrequestresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetCommentsForPullRequestRequest
 *
 * @brief  Implements CodeCommit GetCommentsForPullRequest requests.
 *
 * @see    CodeCommitClient::getCommentsForPullRequest
 */

/**
 * @brief  Constructs a new GetCommentsForPullRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentsForPullRequestResponse::GetCommentsForPullRequestResponse(

/**
 * @brief  Constructs a new GetCommentsForPullRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCommentsForPullRequestRequest::GetCommentsForPullRequestRequest(const GetCommentsForPullRequestRequest &other)
    : CodeCommitRequest(new GetCommentsForPullRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCommentsForPullRequestRequest object.
 */
GetCommentsForPullRequestRequest::GetCommentsForPullRequestRequest()
    : CodeCommitRequest(new GetCommentsForPullRequestRequestPrivate(CodeCommitRequest::GetCommentsForPullRequestAction, this))
{

}

bool GetCommentsForPullRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCommentsForPullRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCommentsForPullRequestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetCommentsForPullRequestRequest::response(QNetworkReply * const reply) const
{
    return new GetCommentsForPullRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCommentsForPullRequestRequestPrivate
 *
 * @brief  Private implementation for GetCommentsForPullRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForPullRequestRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetCommentsForPullRequestRequest instance.
 */
GetCommentsForPullRequestRequestPrivate::GetCommentsForPullRequestRequestPrivate(
    const CodeCommitRequest::Action action, GetCommentsForPullRequestRequest * const q)
    : GetCommentsForPullRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForPullRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCommentsForPullRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCommentsForPullRequestRequest instance.
 */
GetCommentsForPullRequestRequestPrivate::GetCommentsForPullRequestRequestPrivate(
    const GetCommentsForPullRequestRequestPrivate &other, GetCommentsForPullRequestRequest * const q)
    : GetCommentsForPullRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
