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

#include "getcommentsforcomparedcommitrequest.h"
#include "getcommentsforcomparedcommitrequest_p.h"
#include "getcommentsforcomparedcommitresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetCommentsForComparedCommitRequest
 *
 * @brief  Implements CodeCommit GetCommentsForComparedCommit requests.
 *
 * @see    CodeCommitClient::getCommentsForComparedCommit
 */

/**
 * @brief  Constructs a new GetCommentsForComparedCommitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentsForComparedCommitResponse::GetCommentsForComparedCommitResponse(

/**
 * @brief  Constructs a new GetCommentsForComparedCommitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCommentsForComparedCommitRequest::GetCommentsForComparedCommitRequest(const GetCommentsForComparedCommitRequest &other)
    : CodeCommitRequest(new GetCommentsForComparedCommitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCommentsForComparedCommitRequest object.
 */
GetCommentsForComparedCommitRequest::GetCommentsForComparedCommitRequest()
    : CodeCommitRequest(new GetCommentsForComparedCommitRequestPrivate(CodeCommitRequest::GetCommentsForComparedCommitAction, this))
{

}

bool GetCommentsForComparedCommitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCommentsForComparedCommitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCommentsForComparedCommitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetCommentsForComparedCommitRequest::response(QNetworkReply * const reply) const
{
    return new GetCommentsForComparedCommitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCommentsForComparedCommitRequestPrivate
 *
 * @brief  Private implementation for GetCommentsForComparedCommitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForComparedCommitRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetCommentsForComparedCommitRequest instance.
 */
GetCommentsForComparedCommitRequestPrivate::GetCommentsForComparedCommitRequestPrivate(
    const CodeCommitRequest::Action action, GetCommentsForComparedCommitRequest * const q)
    : GetCommentsForComparedCommitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForComparedCommitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCommentsForComparedCommitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCommentsForComparedCommitRequest instance.
 */
GetCommentsForComparedCommitRequestPrivate::GetCommentsForComparedCommitRequestPrivate(
    const GetCommentsForComparedCommitRequestPrivate &other, GetCommentsForComparedCommitRequest * const q)
    : GetCommentsForComparedCommitPrivate(other, q)
{

}
