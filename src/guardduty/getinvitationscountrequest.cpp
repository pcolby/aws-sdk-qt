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

#include "getinvitationscountrequest.h"
#include "getinvitationscountrequest_p.h"
#include "getinvitationscountresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetInvitationsCountRequest
 *
 * @brief  Implements GuardDuty GetInvitationsCount requests.
 *
 * @see    GuardDutyClient::getInvitationsCount
 */

/**
 * @brief  Constructs a new GetInvitationsCountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInvitationsCountRequest::GetInvitationsCountRequest(const GetInvitationsCountRequest &other)
    : GuardDutyRequest(new GetInvitationsCountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInvitationsCountRequest object.
 */
GetInvitationsCountRequest::GetInvitationsCountRequest()
    : GuardDutyRequest(new GetInvitationsCountRequestPrivate(GuardDutyRequest::GetInvitationsCountAction, this))
{

}

bool GetInvitationsCountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInvitationsCountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInvitationsCountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * GetInvitationsCountRequest::response(QNetworkReply * const reply) const
{
    return new GetInvitationsCountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInvitationsCountRequestPrivate
 *
 * @brief  Private implementation for GetInvitationsCountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInvitationsCountRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetInvitationsCountRequest instance.
 */
GetInvitationsCountRequestPrivate::GetInvitationsCountRequestPrivate(
    const GuardDutyRequest::Action action, GetInvitationsCountRequest * const q)
    : GetInvitationsCountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInvitationsCountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInvitationsCountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInvitationsCountRequest instance.
 */
GetInvitationsCountRequestPrivate::GetInvitationsCountRequestPrivate(
    const GetInvitationsCountRequestPrivate &other, GetInvitationsCountRequest * const q)
    : GetInvitationsCountPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
