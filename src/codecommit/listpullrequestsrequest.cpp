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

#include "listpullrequestsrequest.h"
#include "listpullrequestsrequest_p.h"
#include "listpullrequestsresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  ListPullRequestsRequest
 *
 * @brief  Implements CodeCommit ListPullRequests requests.
 *
 * @see    CodeCommitClient::listPullRequests
 */

/**
 * @brief  Constructs a new ListPullRequestsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPullRequestsRequest::ListPullRequestsRequest(const ListPullRequestsRequest &other)
    : CodeCommitRequest(new ListPullRequestsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPullRequestsRequest object.
 */
ListPullRequestsRequest::ListPullRequestsRequest()
    : CodeCommitRequest(new ListPullRequestsRequestPrivate(CodeCommitRequest::ListPullRequestsAction, this))
{

}

bool ListPullRequestsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPullRequestsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPullRequestsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPullRequestsRequest::response(QNetworkReply * const reply) const
{
    return new ListPullRequestsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPullRequestsRequestPrivate
 *
 * @brief  Private implementation for ListPullRequestsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPullRequestsRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public ListPullRequestsRequest instance.
 */
ListPullRequestsRequestPrivate::ListPullRequestsRequestPrivate(
    const CodeCommitRequest::Action action, ListPullRequestsRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPullRequestsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPullRequestsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPullRequestsRequest instance.
 */
ListPullRequestsRequestPrivate::ListPullRequestsRequestPrivate(
    const ListPullRequestsRequestPrivate &other, ListPullRequestsRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
