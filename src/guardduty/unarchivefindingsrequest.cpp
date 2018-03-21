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

#include "unarchivefindingsrequest.h"
#include "unarchivefindingsrequest_p.h"
#include "unarchivefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  UnarchiveFindingsRequest
 *
 * @brief  Implements GuardDuty UnarchiveFindings requests.
 *
 * @see    GuardDutyClient::unarchiveFindings
 */

/**
 * @brief  Constructs a new UnarchiveFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnarchiveFindingsResponse::UnarchiveFindingsResponse(

/**
 * @brief  Constructs a new UnarchiveFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnarchiveFindingsRequest::UnarchiveFindingsRequest(const UnarchiveFindingsRequest &other)
    : GuardDutyRequest(new UnarchiveFindingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnarchiveFindingsRequest object.
 */
UnarchiveFindingsRequest::UnarchiveFindingsRequest()
    : GuardDutyRequest(new UnarchiveFindingsRequestPrivate(GuardDutyRequest::UnarchiveFindingsAction, this))
{

}

bool UnarchiveFindingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnarchiveFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnarchiveFindingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * UnarchiveFindingsRequest::response(QNetworkReply * const reply) const
{
    return new UnarchiveFindingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnarchiveFindingsRequestPrivate
 *
 * @brief  Private implementation for UnarchiveFindingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnarchiveFindingsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public UnarchiveFindingsRequest instance.
 */
UnarchiveFindingsRequestPrivate::UnarchiveFindingsRequestPrivate(
    const GuardDutyRequest::Action action, UnarchiveFindingsRequest * const q)
    : UnarchiveFindingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnarchiveFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnarchiveFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnarchiveFindingsRequest instance.
 */
UnarchiveFindingsRequestPrivate::UnarchiveFindingsRequestPrivate(
    const UnarchiveFindingsRequestPrivate &other, UnarchiveFindingsRequest * const q)
    : UnarchiveFindingsPrivate(other, q)
{

}
