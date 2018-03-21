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

#include "getrepositoryrequest.h"
#include "getrepositoryrequest_p.h"
#include "getrepositoryresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetRepositoryRequest
 *
 * @brief  Implements CodeCommit GetRepository requests.
 *
 * @see    CodeCommitClient::getRepository
 */

/**
 * @brief  Constructs a new GetRepositoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRepositoryResponse::GetRepositoryResponse(

/**
 * @brief  Constructs a new GetRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRepositoryRequest::GetRepositoryRequest(const GetRepositoryRequest &other)
    : CodeCommitRequest(new GetRepositoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRepositoryRequest object.
 */
GetRepositoryRequest::GetRepositoryRequest()
    : CodeCommitRequest(new GetRepositoryRequestPrivate(CodeCommitRequest::GetRepositoryAction, this))
{

}

bool GetRepositoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRepositoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRepositoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRepositoryRequestPrivate
 *
 * @brief  Private implementation for GetRepositoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetRepositoryRequest instance.
 */
GetRepositoryRequestPrivate::GetRepositoryRequestPrivate(
    const CodeCommitRequest::Action action, GetRepositoryRequest * const q)
    : GetRepositoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRepositoryRequest instance.
 */
GetRepositoryRequestPrivate::GetRepositoryRequestPrivate(
    const GetRepositoryRequestPrivate &other, GetRepositoryRequest * const q)
    : GetRepositoryPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
