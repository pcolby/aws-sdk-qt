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

#include "getcommentrequest.h"
#include "getcommentrequest_p.h"
#include "getcommentresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetCommentRequest
 *
 * @brief  Implements CodeCommit GetComment requests.
 *
 * @see    CodeCommitClient::getComment
 */

/**
 * @brief  Constructs a new GetCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentResponse::GetCommentResponse(

/**
 * @brief  Constructs a new GetCommentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCommentRequest::GetCommentRequest(const GetCommentRequest &other)
    : CodeCommitRequest(new GetCommentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCommentRequest object.
 */
GetCommentRequest::GetCommentRequest()
    : CodeCommitRequest(new GetCommentRequestPrivate(CodeCommitRequest::GetCommentAction, this))
{

}

bool GetCommentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCommentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCommentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * GetCommentRequest::response(QNetworkReply * const reply) const
{
    return new GetCommentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCommentRequestPrivate
 *
 * @brief  Private implementation for GetCommentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public GetCommentRequest instance.
 */
GetCommentRequestPrivate::GetCommentRequestPrivate(
    const CodeCommitRequest::Action action, GetCommentRequest * const q)
    : GetCommentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCommentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCommentRequest instance.
 */
GetCommentRequestPrivate::GetCommentRequestPrivate(
    const GetCommentRequestPrivate &other, GetCommentRequest * const q)
    : GetCommentPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
