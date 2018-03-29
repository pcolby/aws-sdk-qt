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

#include "getrepositorytriggersrequest.h"
#include "getrepositorytriggersrequest_p.h"
#include "getrepositorytriggersresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetRepositoryTriggersRequest
 *
 * @brief  Implements CodeCommit GetRepositoryTriggers requests.
 *
 * @see    CodeCommitClient::getRepositoryTriggers
 */

/**
 * @brief  Constructs a new GetRepositoryTriggersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRepositoryTriggersRequest::GetRepositoryTriggersRequest(const GetRepositoryTriggersRequest &other)
    : CodeCommitRequest(new GetRepositoryTriggersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRepositoryTriggersRequest object.
 */
GetRepositoryTriggersRequest::GetRepositoryTriggersRequest()
    : CodeCommitRequest(new GetRepositoryTriggersRequestPrivate(CodeCommitRequest::GetRepositoryTriggersAction, this))
{

}

bool GetRepositoryTriggersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRepositoryTriggersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRepositoryTriggersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetRepositoryTriggersRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryTriggersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRepositoryTriggersRequestPrivate
 *
 * @brief  Private implementation for GetRepositoryTriggersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryTriggersRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetRepositoryTriggersRequest instance.
 */
GetRepositoryTriggersRequestPrivate::GetRepositoryTriggersRequestPrivate(
    const CodeCommitRequest::Action action, GetRepositoryTriggersRequest * const q)
    : GetRepositoryTriggersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryTriggersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryTriggersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRepositoryTriggersRequest instance.
 */
GetRepositoryTriggersRequestPrivate::GetRepositoryTriggersRequestPrivate(
    const GetRepositoryTriggersRequestPrivate &other, GetRepositoryTriggersRequest * const q)
    : GetRepositoryTriggersPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
