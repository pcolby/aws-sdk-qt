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

#include "updatedefaultbranchrequest.h"
#include "updatedefaultbranchrequest_p.h"
#include "updatedefaultbranchresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateDefaultBranchRequest
 *
 * @brief  Implements CodeCommit UpdateDefaultBranch requests.
 *
 * @see    CodeCommitClient::updateDefaultBranch
 */

/**
 * @brief  Constructs a new UpdateDefaultBranchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDefaultBranchRequest::UpdateDefaultBranchRequest(const UpdateDefaultBranchRequest &other)
    : CodeCommitRequest(new UpdateDefaultBranchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDefaultBranchRequest object.
 */
UpdateDefaultBranchRequest::UpdateDefaultBranchRequest()
    : CodeCommitRequest(new UpdateDefaultBranchRequestPrivate(CodeCommitRequest::UpdateDefaultBranchAction, this))
{

}

bool UpdateDefaultBranchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDefaultBranchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDefaultBranchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDefaultBranchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDefaultBranchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDefaultBranchRequestPrivate
 *
 * @brief  Private implementation for UpdateDefaultBranchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDefaultBranchRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public UpdateDefaultBranchRequest instance.
 */
UpdateDefaultBranchRequestPrivate::UpdateDefaultBranchRequestPrivate(
    const CodeCommitRequest::Action action, UpdateDefaultBranchRequest * const q)
    : UpdateDefaultBranchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDefaultBranchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDefaultBranchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDefaultBranchRequest instance.
 */
UpdateDefaultBranchRequestPrivate::UpdateDefaultBranchRequestPrivate(
    const UpdateDefaultBranchRequestPrivate &other, UpdateDefaultBranchRequest * const q)
    : UpdateDefaultBranchPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
