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

#include "getipsetrequest.h"
#include "getipsetrequest_p.h"
#include "getipsetresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetIPSetRequest
 *
 * @brief  Implements GuardDuty GetIPSet requests.
 *
 * @see    GuardDutyClient::getIPSet
 */

/**
 * @brief  Constructs a new GetIPSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIPSetResponse::GetIPSetResponse(

/**
 * @brief  Constructs a new GetIPSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIPSetRequest::GetIPSetRequest(const GetIPSetRequest &other)
    : GuardDutyRequest(new GetIPSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIPSetRequest object.
 */
GetIPSetRequest::GetIPSetRequest()
    : GuardDutyRequest(new GetIPSetRequestPrivate(GuardDutyRequest::GetIPSetAction, this))
{

}

bool GetIPSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIPSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIPSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * GetIPSetRequest::response(QNetworkReply * const reply) const
{
    return new GetIPSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIPSetRequestPrivate
 *
 * @brief  Private implementation for GetIPSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIPSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetIPSetRequest instance.
 */
GetIPSetRequestPrivate::GetIPSetRequestPrivate(
    const GuardDutyRequest::Action action, GetIPSetRequest * const q)
    : GetIPSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIPSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIPSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIPSetRequest instance.
 */
GetIPSetRequestPrivate::GetIPSetRequestPrivate(
    const GetIPSetRequestPrivate &other, GetIPSetRequest * const q)
    : GetIPSetPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
