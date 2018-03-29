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

#include "getgeomatchsetrequest.h"
#include "getgeomatchsetrequest_p.h"
#include "getgeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  GetGeoMatchSetRequest
 *
 * @brief  Implements WAF GetGeoMatchSet requests.
 *
 * @see    WAFClient::getGeoMatchSet
 */

/**
 * @brief  Constructs a new GetGeoMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest(const GetGeoMatchSetRequest &other)
    : WAFRequest(new GetGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGeoMatchSetRequest object.
 */
GetGeoMatchSetRequest::GetGeoMatchSetRequest()
    : WAFRequest(new GetGeoMatchSetRequestPrivate(WAFRequest::GetGeoMatchSetAction, this))
{

}

bool GetGeoMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGeoMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGeoMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetGeoMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGeoMatchSetRequestPrivate
 *
 * @brief  Private implementation for GetGeoMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetGeoMatchSetRequest instance.
 */
GetGeoMatchSetRequestPrivate::GetGeoMatchSetRequestPrivate(
    const WAFRequest::Action action, GetGeoMatchSetRequest * const q)
    : GetGeoMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGeoMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGeoMatchSetRequest instance.
 */
GetGeoMatchSetRequestPrivate::GetGeoMatchSetRequestPrivate(
    const GetGeoMatchSetRequestPrivate &other, GetGeoMatchSetRequest * const q)
    : GetGeoMatchSetPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
