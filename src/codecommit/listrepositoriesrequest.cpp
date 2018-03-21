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

#include "listrepositoriesrequest.h"
#include "listrepositoriesrequest_p.h"
#include "listrepositoriesresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  ListRepositoriesRequest
 *
 * @brief  Implements CodeCommit ListRepositories requests.
 *
 * @see    CodeCommitClient::listRepositories
 */

/**
 * @brief  Constructs a new ListRepositoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRepositoriesResponse::ListRepositoriesResponse(

/**
 * @brief  Constructs a new ListRepositoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRepositoriesRequest::ListRepositoriesRequest(const ListRepositoriesRequest &other)
    : CodeCommitRequest(new ListRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRepositoriesRequest object.
 */
ListRepositoriesRequest::ListRepositoriesRequest()
    : CodeCommitRequest(new ListRepositoriesRequestPrivate(CodeCommitRequest::ListRepositoriesAction, this))
{

}

bool ListRepositoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRepositoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRepositoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * ListRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListRepositoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRepositoriesRequestPrivate
 *
 * @brief  Private implementation for ListRepositoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRepositoriesRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public ListRepositoriesRequest instance.
 */
ListRepositoriesRequestPrivate::ListRepositoriesRequestPrivate(
    const CodeCommitRequest::Action action, ListRepositoriesRequest * const q)
    : ListRepositoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRepositoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRepositoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRepositoriesRequest instance.
 */
ListRepositoriesRequestPrivate::ListRepositoriesRequestPrivate(
    const ListRepositoriesRequestPrivate &other, ListRepositoriesRequest * const q)
    : ListRepositoriesPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
