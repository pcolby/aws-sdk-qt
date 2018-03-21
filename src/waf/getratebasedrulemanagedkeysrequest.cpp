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

#include "getratebasedrulemanagedkeysrequest.h"
#include "getratebasedrulemanagedkeysrequest_p.h"
#include "getratebasedrulemanagedkeysresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  GetRateBasedRuleManagedKeysRequest
 *
 * @brief  Implements WAF GetRateBasedRuleManagedKeys requests.
 *
 * @see    WAFClient::getRateBasedRuleManagedKeys
 */

/**
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest(const GetRateBasedRuleManagedKeysRequest &other)
    : WAFRequest(new GetRateBasedRuleManagedKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequest object.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest()
    : WAFRequest(new GetRateBasedRuleManagedKeysRequestPrivate(WAFRequest::GetRateBasedRuleManagedKeysAction, this))
{

}

bool GetRateBasedRuleManagedKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRateBasedRuleManagedKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRateBasedRuleManagedKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetRateBasedRuleManagedKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetRateBasedRuleManagedKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRateBasedRuleManagedKeysRequestPrivate
 *
 * @brief  Private implementation for GetRateBasedRuleManagedKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetRateBasedRuleManagedKeysRequest instance.
 */
GetRateBasedRuleManagedKeysRequestPrivate::GetRateBasedRuleManagedKeysRequestPrivate(
    const WAFRequest::Action action, GetRateBasedRuleManagedKeysRequest * const q)
    : GetRateBasedRuleManagedKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRateBasedRuleManagedKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRateBasedRuleManagedKeysRequest instance.
 */
GetRateBasedRuleManagedKeysRequestPrivate::GetRateBasedRuleManagedKeysRequestPrivate(
    const GetRateBasedRuleManagedKeysRequestPrivate &other, GetRateBasedRuleManagedKeysRequest * const q)
    : GetRateBasedRuleManagedKeysPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
