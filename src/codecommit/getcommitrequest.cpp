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

#include "getcommitrequest.h"
#include "getcommitrequest_p.h"
#include "getcommitresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetCommitRequest
 *
 * @brief  Implements CodeCommit GetCommit requests.
 *
 * @see    CodeCommitClient::getCommit
 */

/**
 * @brief  Constructs a new GetCommitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCommitRequest::GetCommitRequest(const GetCommitRequest &other)
    : CodeCommitRequest(new GetCommitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCommitRequest object.
 */
GetCommitRequest::GetCommitRequest()
    : CodeCommitRequest(new GetCommitRequestPrivate(CodeCommitRequest::GetCommitAction, this))
{

}

bool GetCommitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCommitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCommitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetCommitRequest::response(QNetworkReply * const reply) const
{
    return new GetCommitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCommitRequestPrivate
 *
 * @brief  Private implementation for GetCommitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommitRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetCommitRequest instance.
 */
GetCommitRequestPrivate::GetCommitRequestPrivate(
    const CodeCommitRequest::Action action, GetCommitRequest * const q)
    : GetCommitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCommitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCommitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCommitRequest instance.
 */
GetCommitRequestPrivate::GetCommitRequestPrivate(
    const GetCommitRequestPrivate &other, GetCommitRequest * const q)
    : GetCommitPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
