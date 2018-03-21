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

#include "getinstancesrequest.h"
#include "getinstancesrequest_p.h"
#include "getinstancesresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstancesRequest
 *
 * @brief  Implements Lightsail GetInstances requests.
 *
 * @see    LightsailClient::getInstances
 */

/**
 * @brief  Constructs a new GetInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstancesRequest::GetInstancesRequest(const GetInstancesRequest &other)
    : LightsailRequest(new GetInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstancesRequest object.
 */
GetInstancesRequest::GetInstancesRequest()
    : LightsailRequest(new GetInstancesRequestPrivate(LightsailRequest::GetInstancesAction, this))
{

}

bool GetInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstancesRequest::response(QNetworkReply * const reply) const
{
    return new GetInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstancesRequestPrivate
 *
 * @brief  Private implementation for GetInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancesRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstancesRequest instance.
 */
GetInstancesRequestPrivate::GetInstancesRequestPrivate(
    const LightsailRequest::Action action, GetInstancesRequest * const q)
    : GetInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstancesRequest instance.
 */
GetInstancesRequestPrivate::GetInstancesRequestPrivate(
    const GetInstancesRequestPrivate &other, GetInstancesRequest * const q)
    : GetInstancesPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
