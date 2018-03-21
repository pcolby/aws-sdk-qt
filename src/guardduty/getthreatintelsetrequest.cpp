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

#include "getthreatintelsetrequest.h"
#include "getthreatintelsetrequest_p.h"
#include "getthreatintelsetresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetThreatIntelSetRequest
 *
 * @brief  Implements GuardDuty GetThreatIntelSet requests.
 *
 * @see    GuardDutyClient::getThreatIntelSet
 */

/**
 * @brief  Constructs a new GetThreatIntelSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetThreatIntelSetResponse::GetThreatIntelSetResponse(

/**
 * @brief  Constructs a new GetThreatIntelSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetThreatIntelSetRequest::GetThreatIntelSetRequest(const GetThreatIntelSetRequest &other)
    : GuardDutyRequest(new GetThreatIntelSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetThreatIntelSetRequest object.
 */
GetThreatIntelSetRequest::GetThreatIntelSetRequest()
    : GuardDutyRequest(new GetThreatIntelSetRequestPrivate(GuardDutyRequest::GetThreatIntelSetAction, this))
{

}

bool GetThreatIntelSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetThreatIntelSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetThreatIntelSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * GetThreatIntelSetRequest::response(QNetworkReply * const reply) const
{
    return new GetThreatIntelSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetThreatIntelSetRequestPrivate
 *
 * @brief  Private implementation for GetThreatIntelSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetThreatIntelSetRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetThreatIntelSetRequest instance.
 */
GetThreatIntelSetRequestPrivate::GetThreatIntelSetRequestPrivate(
    const GuardDutyRequest::Action action, GetThreatIntelSetRequest * const q)
    : GetThreatIntelSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetThreatIntelSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetThreatIntelSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetThreatIntelSetRequest instance.
 */
GetThreatIntelSetRequestPrivate::GetThreatIntelSetRequestPrivate(
    const GetThreatIntelSetRequestPrivate &other, GetThreatIntelSetRequest * const q)
    : GetThreatIntelSetPrivate(other, q)
{

}
