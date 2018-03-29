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

#include "getmembersrequest.h"
#include "getmembersrequest_p.h"
#include "getmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  GetMembersRequest
 *
 * @brief  Implements GuardDuty GetMembers requests.
 *
 * @see    GuardDutyClient::getMembers
 */

/**
 * @brief  Constructs a new GetMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMembersRequest::GetMembersRequest(const GetMembersRequest &other)
    : GuardDutyRequest(new GetMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMembersRequest object.
 */
GetMembersRequest::GetMembersRequest()
    : GuardDutyRequest(new GetMembersRequestPrivate(GuardDutyRequest::GetMembersAction, this))
{

}

bool GetMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMembersRequest::response(QNetworkReply * const reply) const
{
    return new GetMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMembersRequestPrivate
 *
 * @brief  Private implementation for GetMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetMembersRequest instance.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const GuardDutyRequest::Action action, GetMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMembersRequest instance.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const GetMembersRequestPrivate &other, GetMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
