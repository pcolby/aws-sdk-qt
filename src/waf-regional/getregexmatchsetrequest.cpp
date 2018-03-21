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

#include "getregexmatchsetrequest.h"
#include "getregexmatchsetrequest_p.h"
#include "getregexmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRegexMatchSetRequest
 *
 * @brief  Implements WAFRegional GetRegexMatchSet requests.
 *
 * @see    WAFRegionalClient::getRegexMatchSet
 */

/**
 * @brief  Constructs a new GetRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexMatchSetResponse::GetRegexMatchSetResponse(

/**
 * @brief  Constructs a new GetRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRegexMatchSetRequest::GetRegexMatchSetRequest(const GetRegexMatchSetRequest &other)
    : WAFRegionalRequest(new GetRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRegexMatchSetRequest object.
 */
GetRegexMatchSetRequest::GetRegexMatchSetRequest()
    : WAFRegionalRequest(new GetRegexMatchSetRequestPrivate(WAFRegionalRequest::GetRegexMatchSetAction, this))
{

}

bool GetRegexMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRegexMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRegexMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetRegexMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRegexMatchSetRequestPrivate
 *
 * @brief  Private implementation for GetRegexMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetRegexMatchSetRequest instance.
 */
GetRegexMatchSetRequestPrivate::GetRegexMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, GetRegexMatchSetRequest * const q)
    : GetRegexMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRegexMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRegexMatchSetRequest instance.
 */
GetRegexMatchSetRequestPrivate::GetRegexMatchSetRequestPrivate(
    const GetRegexMatchSetRequestPrivate &other, GetRegexMatchSetRequest * const q)
    : GetRegexMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
