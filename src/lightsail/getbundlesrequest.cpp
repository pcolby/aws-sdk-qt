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

#include "getbundlesrequest.h"
#include "getbundlesrequest_p.h"
#include "getbundlesresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetBundlesRequest
 *
 * @brief  Implements Lightsail GetBundles requests.
 *
 * @see    LightsailClient::getBundles
 */

/**
 * @brief  Constructs a new GetBundlesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBundlesRequest::GetBundlesRequest(const GetBundlesRequest &other)
    : LightsailRequest(new GetBundlesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBundlesRequest object.
 */
GetBundlesRequest::GetBundlesRequest()
    : LightsailRequest(new GetBundlesRequestPrivate(LightsailRequest::GetBundlesAction, this))
{

}

bool GetBundlesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBundlesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBundlesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBundlesRequest::response(QNetworkReply * const reply) const
{
    return new GetBundlesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBundlesRequestPrivate
 *
 * @brief  Private implementation for GetBundlesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBundlesRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetBundlesRequest instance.
 */
GetBundlesRequestPrivate::GetBundlesRequestPrivate(
    const LightsailRequest::Action action, GetBundlesRequest * const q)
    : GetBundlesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBundlesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBundlesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBundlesRequest instance.
 */
GetBundlesRequestPrivate::GetBundlesRequestPrivate(
    const GetBundlesRequestPrivate &other, GetBundlesRequest * const q)
    : GetBundlesPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
