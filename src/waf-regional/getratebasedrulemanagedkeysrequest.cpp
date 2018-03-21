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
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRateBasedRuleManagedKeysRequest
 *
 * @brief  Implements WAFRegional GetRateBasedRuleManagedKeys requests.
 *
 * @see    WAFRegionalClient::getRateBasedRuleManagedKeys
 */

/**
 * @brief  Constructs a new GetRateBasedRuleManagedKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRateBasedRuleManagedKeysResponse::GetRateBasedRuleManagedKeysResponse(

/**
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest(const GetRateBasedRuleManagedKeysRequest &other)
    : WAFRegionalRequest(new GetRateBasedRuleManagedKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRateBasedRuleManagedKeysRequest object.
 */
GetRateBasedRuleManagedKeysRequest::GetRateBasedRuleManagedKeysRequest()
    : WAFRegionalRequest(new GetRateBasedRuleManagedKeysRequestPrivate(WAFRegionalRequest::GetRateBasedRuleManagedKeysAction, this))
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
 * @see  WAFRegionalClient::send
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
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetRateBasedRuleManagedKeysRequest instance.
 */
GetRateBasedRuleManagedKeysRequestPrivate::GetRateBasedRuleManagedKeysRequestPrivate(
    const WAFRegionalRequest::Action action, GetRateBasedRuleManagedKeysRequest * const q)
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

} // namespace WAFRegional
} // namespace AWS
