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

#include "listbranchesrequest.h"
#include "listbranchesrequest_p.h"
#include "listbranchesresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  ListBranchesRequest
 *
 * @brief  Implements CodeCommit ListBranches requests.
 *
 * @see    CodeCommitClient::listBranches
 */

/**
 * @brief  Constructs a new ListBranchesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBranchesRequest::ListBranchesRequest(const ListBranchesRequest &other)
    : CodeCommitRequest(new ListBranchesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBranchesRequest object.
 */
ListBranchesRequest::ListBranchesRequest()
    : CodeCommitRequest(new ListBranchesRequestPrivate(CodeCommitRequest::ListBranchesAction, this))
{

}

bool ListBranchesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBranchesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBranchesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * ListBranchesRequest::response(QNetworkReply * const reply) const
{
    return new ListBranchesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBranchesRequestPrivate
 *
 * @brief  Private implementation for ListBranchesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBranchesRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public ListBranchesRequest instance.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const CodeCommitRequest::Action action, ListBranchesRequest * const q)
    : ListBranchesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBranchesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBranchesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBranchesRequest instance.
 */
ListBranchesRequestPrivate::ListBranchesRequestPrivate(
    const ListBranchesRequestPrivate &other, ListBranchesRequest * const q)
    : ListBranchesPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
