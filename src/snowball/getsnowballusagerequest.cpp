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

#include "getsnowballusagerequest.h"
#include "getsnowballusagerequest_p.h"
#include "getsnowballusageresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  GetSnowballUsageRequest
 *
 * @brief  Implements Snowball GetSnowballUsage requests.
 *
 * @see    SnowballClient::getSnowballUsage
 */

/**
 * @brief  Constructs a new GetSnowballUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSnowballUsageRequest::GetSnowballUsageRequest(const GetSnowballUsageRequest &other)
    : SnowballRequest(new GetSnowballUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSnowballUsageRequest object.
 */
GetSnowballUsageRequest::GetSnowballUsageRequest()
    : SnowballRequest(new GetSnowballUsageRequestPrivate(SnowballRequest::GetSnowballUsageAction, this))
{

}

bool GetSnowballUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSnowballUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSnowballUsageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSnowballUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetSnowballUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSnowballUsageRequestPrivate
 *
 * @brief  Private implementation for GetSnowballUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSnowballUsageRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public GetSnowballUsageRequest instance.
 */
GetSnowballUsageRequestPrivate::GetSnowballUsageRequestPrivate(
    const SnowballRequest::Action action, GetSnowballUsageRequest * const q)
    : GetSnowballUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSnowballUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSnowballUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSnowballUsageRequest instance.
 */
GetSnowballUsageRequestPrivate::GetSnowballUsageRequestPrivate(
    const GetSnowballUsageRequestPrivate &other, GetSnowballUsageRequest * const q)
    : GetSnowballUsagePrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
