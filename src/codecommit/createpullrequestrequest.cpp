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

#include "createpullrequestrequest.h"
#include "createpullrequestrequest_p.h"
#include "createpullrequestresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  CreatePullRequestRequest
 *
 * @brief  Implements CodeCommit CreatePullRequest requests.
 *
 * @see    CodeCommitClient::createPullRequest
 */

/**
 * @brief  Constructs a new CreatePullRequestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePullRequestRequest::CreatePullRequestRequest(const CreatePullRequestRequest &other)
    : CodeCommitRequest(new CreatePullRequestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePullRequestRequest object.
 */
CreatePullRequestRequest::CreatePullRequestRequest()
    : CodeCommitRequest(new CreatePullRequestRequestPrivate(CodeCommitRequest::CreatePullRequestAction, this))
{

}

bool CreatePullRequestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePullRequestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePullRequestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * CreatePullRequestRequest::response(QNetworkReply * const reply) const
{
    return new CreatePullRequestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePullRequestRequestPrivate
 *
 * @brief  Private implementation for CreatePullRequestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePullRequestRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public CreatePullRequestRequest instance.
 */
CreatePullRequestRequestPrivate::CreatePullRequestRequestPrivate(
    const CodeCommitRequest::Action action, CreatePullRequestRequest * const q)
    : CreatePullRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePullRequestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePullRequestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePullRequestRequest instance.
 */
CreatePullRequestRequestPrivate::CreatePullRequestRequestPrivate(
    const CreatePullRequestRequestPrivate &other, CreatePullRequestRequest * const q)
    : CreatePullRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
