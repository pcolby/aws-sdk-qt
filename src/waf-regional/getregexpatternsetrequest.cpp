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

#include "getregexpatternsetrequest.h"
#include "getregexpatternsetrequest_p.h"
#include "getregexpatternsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetRegexPatternSetRequest
 *
 * @brief  Implements WAFRegional GetRegexPatternSet requests.
 *
 * @see    WAFRegionalClient::getRegexPatternSet
 */

/**
 * @brief  Constructs a new GetRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexPatternSetResponse::GetRegexPatternSetResponse(

/**
 * @brief  Constructs a new GetRegexPatternSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRegexPatternSetRequest::GetRegexPatternSetRequest(const GetRegexPatternSetRequest &other)
    : WAFRegionalRequest(new GetRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRegexPatternSetRequest object.
 */
GetRegexPatternSetRequest::GetRegexPatternSetRequest()
    : WAFRegionalRequest(new GetRegexPatternSetRequestPrivate(WAFRegionalRequest::GetRegexPatternSetAction, this))
{

}

bool GetRegexPatternSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRegexPatternSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRegexPatternSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new GetRegexPatternSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRegexPatternSetRequestPrivate
 *
 * @brief  Private implementation for GetRegexPatternSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexPatternSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetRegexPatternSetRequest instance.
 */
GetRegexPatternSetRequestPrivate::GetRegexPatternSetRequestPrivate(
    const WAFRegionalRequest::Action action, GetRegexPatternSetRequest * const q)
    : GetRegexPatternSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexPatternSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRegexPatternSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRegexPatternSetRequest instance.
 */
GetRegexPatternSetRequestPrivate::GetRegexPatternSetRequestPrivate(
    const GetRegexPatternSetRequestPrivate &other, GetRegexPatternSetRequest * const q)
    : GetRegexPatternSetPrivate(other, q)
{

}
