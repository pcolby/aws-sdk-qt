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

#include "deletebranchrequest.h"
#include "deletebranchrequest_p.h"
#include "deletebranchresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DeleteBranchRequest
 *
 * @brief  Implements CodeCommit DeleteBranch requests.
 *
 * @see    CodeCommitClient::deleteBranch
 */

/**
 * @brief  Constructs a new DeleteBranchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBranchRequest::DeleteBranchRequest(const DeleteBranchRequest &other)
    : CodeCommitRequest(new DeleteBranchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBranchRequest object.
 */
DeleteBranchRequest::DeleteBranchRequest()
    : CodeCommitRequest(new DeleteBranchRequestPrivate(CodeCommitRequest::DeleteBranchAction, this))
{

}

bool DeleteBranchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBranchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBranchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBranchRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBranchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBranchRequestPrivate
 *
 * @brief  Private implementation for DeleteBranchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBranchRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public DeleteBranchRequest instance.
 */
DeleteBranchRequestPrivate::DeleteBranchRequestPrivate(
    const CodeCommitRequest::Action action, DeleteBranchRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBranchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBranchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBranchRequest instance.
 */
DeleteBranchRequestPrivate::DeleteBranchRequestPrivate(
    const DeleteBranchRequestPrivate &other, DeleteBranchRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
