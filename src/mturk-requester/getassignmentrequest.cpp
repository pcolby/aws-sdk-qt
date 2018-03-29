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

#include "getassignmentrequest.h"
#include "getassignmentrequest_p.h"
#include "getassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  GetAssignmentRequest
 *
 * @brief  Implements MTurk GetAssignment requests.
 *
 * @see    MTurkClient::getAssignment
 */

/**
 * @brief  Constructs a new GetAssignmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAssignmentRequest::GetAssignmentRequest(const GetAssignmentRequest &other)
    : MTurkRequest(new GetAssignmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAssignmentRequest object.
 */
GetAssignmentRequest::GetAssignmentRequest()
    : MTurkRequest(new GetAssignmentRequestPrivate(MTurkRequest::GetAssignmentAction, this))
{

}

bool GetAssignmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAssignmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAssignmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * GetAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new GetAssignmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAssignmentRequestPrivate
 *
 * @brief  Private implementation for GetAssignmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAssignmentRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public GetAssignmentRequest instance.
 */
GetAssignmentRequestPrivate::GetAssignmentRequestPrivate(
    const MTurkRequest::Action action, GetAssignmentRequest * const q)
    : GetAssignmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAssignmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAssignmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAssignmentRequest instance.
 */
GetAssignmentRequestPrivate::GetAssignmentRequestPrivate(
    const GetAssignmentRequestPrivate &other, GetAssignmentRequest * const q)
    : GetAssignmentPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
