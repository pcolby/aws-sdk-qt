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

#include "getbytematchsetrequest.h"
#include "getbytematchsetrequest_p.h"
#include "getbytematchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetByteMatchSetRequest
 *
 * @brief  Implements WAFRegional GetByteMatchSet requests.
 *
 * @see    WAFRegionalClient::getByteMatchSet
 */

/**
 * @brief  Constructs a new GetByteMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetByteMatchSetResponse::GetByteMatchSetResponse(

/**
 * @brief  Constructs a new GetByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetByteMatchSetRequest::GetByteMatchSetRequest(const GetByteMatchSetRequest &other)
    : WAFRegionalRequest(new GetByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetByteMatchSetRequest object.
 */
GetByteMatchSetRequest::GetByteMatchSetRequest()
    : WAFRegionalRequest(new GetByteMatchSetRequestPrivate(WAFRegionalRequest::GetByteMatchSetAction, this))
{

}

bool GetByteMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetByteMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetByteMatchSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new GetByteMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetByteMatchSetRequestPrivate
 *
 * @brief  Private implementation for GetByteMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetByteMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetByteMatchSetRequest instance.
 */
GetByteMatchSetRequestPrivate::GetByteMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, GetByteMatchSetRequest * const q)
    : GetByteMatchSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetByteMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetByteMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetByteMatchSetRequest instance.
 */
GetByteMatchSetRequestPrivate::GetByteMatchSetRequestPrivate(
    const GetByteMatchSetRequestPrivate &other, GetByteMatchSetRequest * const q)
    : GetByteMatchSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS
