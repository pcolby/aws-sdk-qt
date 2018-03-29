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

#include "getwebaclrequest.h"
#include "getwebaclrequest_p.h"
#include "getwebaclresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetWebACLRequest
 *
 * @brief  Implements WAFRegional GetWebACL requests.
 *
 * @see    WAFRegionalClient::getWebACL
 */

/**
 * @brief  Constructs a new GetWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetWebACLRequest::GetWebACLRequest(const GetWebACLRequest &other)
    : WAFRegionalRequest(new GetWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetWebACLRequest object.
 */
GetWebACLRequest::GetWebACLRequest()
    : WAFRegionalRequest(new GetWebACLRequestPrivate(WAFRegionalRequest::GetWebACLAction, this))
{

}

bool GetWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetWebACLResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWebACLRequest::response(QNetworkReply * const reply) const
{
    return new GetWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetWebACLRequestPrivate
 *
 * @brief  Private implementation for GetWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetWebACLRequest instance.
 */
GetWebACLRequestPrivate::GetWebACLRequestPrivate(
    const WAFRegionalRequest::Action action, GetWebACLRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetWebACLRequest instance.
 */
GetWebACLRequestPrivate::GetWebACLRequestPrivate(
    const GetWebACLRequestPrivate &other, GetWebACLRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
