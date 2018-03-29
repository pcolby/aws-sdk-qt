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

#include "getbranchrequest.h"
#include "getbranchrequest_p.h"
#include "getbranchresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetBranchRequest
 *
 * @brief  Implements CodeCommit GetBranch requests.
 *
 * @see    CodeCommitClient::getBranch
 */

/**
 * @brief  Constructs a new GetBranchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBranchRequest::GetBranchRequest(const GetBranchRequest &other)
    : CodeCommitRequest(new GetBranchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBranchRequest object.
 */
GetBranchRequest::GetBranchRequest()
    : CodeCommitRequest(new GetBranchRequestPrivate(CodeCommitRequest::GetBranchAction, this))
{

}

bool GetBranchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBranchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBranchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBranchRequest::response(QNetworkReply * const reply) const
{
    return new GetBranchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBranchRequestPrivate
 *
 * @brief  Private implementation for GetBranchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBranchRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetBranchRequest instance.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const CodeCommitRequest::Action action, GetBranchRequest * const q)
    : GetBranchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBranchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBranchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBranchRequest instance.
 */
GetBranchRequestPrivate::GetBranchRequestPrivate(
    const GetBranchRequestPrivate &other, GetBranchRequest * const q)
    : GetBranchPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
