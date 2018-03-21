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

#include "getmasteraccountrequest.h"
#include "getmasteraccountrequest_p.h"
#include "getmasteraccountresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  GetMasterAccountRequest
 *
 * @brief  Implements GuardDuty GetMasterAccount requests.
 *
 * @see    GuardDutyClient::getMasterAccount
 */

/**
 * @brief  Constructs a new GetMasterAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMasterAccountResponse::GetMasterAccountResponse(

/**
 * @brief  Constructs a new GetMasterAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMasterAccountRequest::GetMasterAccountRequest(const GetMasterAccountRequest &other)
    : GuardDutyRequest(new GetMasterAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMasterAccountRequest object.
 */
GetMasterAccountRequest::GetMasterAccountRequest()
    : GuardDutyRequest(new GetMasterAccountRequestPrivate(GuardDutyRequest::GetMasterAccountAction, this))
{

}

bool GetMasterAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMasterAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMasterAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * GetMasterAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetMasterAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMasterAccountRequestPrivate
 *
 * @brief  Private implementation for GetMasterAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMasterAccountRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetMasterAccountRequest instance.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const GuardDutyRequest::Action action, GetMasterAccountRequest * const q)
    : GetMasterAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMasterAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMasterAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMasterAccountRequest instance.
 */
GetMasterAccountRequestPrivate::GetMasterAccountRequestPrivate(
    const GetMasterAccountRequestPrivate &other, GetMasterAccountRequest * const q)
    : GetMasterAccountPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
