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

#include "mergepullrequestbyfastforwardrequest.h"
#include "mergepullrequestbyfastforwardrequest_p.h"
#include "mergepullrequestbyfastforwardresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  MergePullRequestByFastForwardRequest
 *
 * @brief  Implements CodeCommit MergePullRequestByFastForward requests.
 *
 * @see    CodeCommitClient::mergePullRequestByFastForward
 */

/**
 * @brief  Constructs a new MergePullRequestByFastForwardRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MergePullRequestByFastForwardRequest::MergePullRequestByFastForwardRequest(const MergePullRequestByFastForwardRequest &other)
    : CodeCommitRequest(new MergePullRequestByFastForwardRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MergePullRequestByFastForwardRequest object.
 */
MergePullRequestByFastForwardRequest::MergePullRequestByFastForwardRequest()
    : CodeCommitRequest(new MergePullRequestByFastForwardRequestPrivate(CodeCommitRequest::MergePullRequestByFastForwardAction, this))
{

}

bool MergePullRequestByFastForwardRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MergePullRequestByFastForwardResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MergePullRequestByFastForwardResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * MergePullRequestByFastForwardRequest::response(QNetworkReply * const reply) const
{
    return new MergePullRequestByFastForwardResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MergePullRequestByFastForwardRequestPrivate
 *
 * @brief  Private implementation for MergePullRequestByFastForwardRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergePullRequestByFastForwardRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public MergePullRequestByFastForwardRequest instance.
 */
MergePullRequestByFastForwardRequestPrivate::MergePullRequestByFastForwardRequestPrivate(
    const CodeCommitRequest::Action action, MergePullRequestByFastForwardRequest * const q)
    : MergePullRequestByFastForwardPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MergePullRequestByFastForwardRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MergePullRequestByFastForwardRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MergePullRequestByFastForwardRequest instance.
 */
MergePullRequestByFastForwardRequestPrivate::MergePullRequestByFastForwardRequestPrivate(
    const MergePullRequestByFastForwardRequestPrivate &other, MergePullRequestByFastForwardRequest * const q)
    : MergePullRequestByFastForwardPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
