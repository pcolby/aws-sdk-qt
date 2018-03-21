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

#include "describefleetsrequest.h"
#include "describefleetsrequest_p.h"
#include "describefleetsresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  DescribeFleetsRequest
 *
 * @brief  Implements AppStream DescribeFleets requests.
 *
 * @see    AppStreamClient::describeFleets
 */

/**
 * @brief  Constructs a new DescribeFleetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetsRequest::DescribeFleetsRequest(const DescribeFleetsRequest &other)
    : AppStreamRequest(new DescribeFleetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetsRequest object.
 */
DescribeFleetsRequest::DescribeFleetsRequest()
    : AppStreamRequest(new DescribeFleetsRequestPrivate(AppStreamRequest::DescribeFleetsAction, this))
{

}

bool DescribeFleetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DescribeFleetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetsRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetsRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeFleetsRequest instance.
 */
DescribeFleetsRequestPrivate::DescribeFleetsRequestPrivate(
    const AppStreamRequest::Action action, DescribeFleetsRequest * const q)
    : DescribeFleetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetsRequest instance.
 */
DescribeFleetsRequestPrivate::DescribeFleetsRequestPrivate(
    const DescribeFleetsRequestPrivate &other, DescribeFleetsRequest * const q)
    : DescribeFleetsPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
