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

#include "approveassignmentrequest.h"
#include "approveassignmentrequest_p.h"
#include "approveassignmentresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  ApproveAssignmentRequest
 *
 * @brief  Implements MTurk ApproveAssignment requests.
 *
 * @see    MTurkClient::approveAssignment
 */

/**
 * @brief  Constructs a new ApproveAssignmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ApproveAssignmentRequest::ApproveAssignmentRequest(const ApproveAssignmentRequest &other)
    : MTurkRequest(new ApproveAssignmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ApproveAssignmentRequest object.
 */
ApproveAssignmentRequest::ApproveAssignmentRequest()
    : MTurkRequest(new ApproveAssignmentRequestPrivate(MTurkRequest::ApproveAssignmentAction, this))
{

}

bool ApproveAssignmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ApproveAssignmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ApproveAssignmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * ApproveAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new ApproveAssignmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ApproveAssignmentRequestPrivate
 *
 * @brief  Private implementation for ApproveAssignmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApproveAssignmentRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ApproveAssignmentRequest instance.
 */
ApproveAssignmentRequestPrivate::ApproveAssignmentRequestPrivate(
    const MTurkRequest::Action action, ApproveAssignmentRequest * const q)
    : ApproveAssignmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ApproveAssignmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ApproveAssignmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ApproveAssignmentRequest instance.
 */
ApproveAssignmentRequestPrivate::ApproveAssignmentRequestPrivate(
    const ApproveAssignmentRequestPrivate &other, ApproveAssignmentRequest * const q)
    : ApproveAssignmentPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
