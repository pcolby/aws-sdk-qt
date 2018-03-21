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

#include "getinstancemetricdatarequest.h"
#include "getinstancemetricdatarequest_p.h"
#include "getinstancemetricdataresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceMetricDataRequest
 *
 * @brief  Implements Lightsail GetInstanceMetricData requests.
 *
 * @see    LightsailClient::getInstanceMetricData
 */

/**
 * @brief  Constructs a new GetInstanceMetricDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceMetricDataRequest::GetInstanceMetricDataRequest(const GetInstanceMetricDataRequest &other)
    : LightsailRequest(new GetInstanceMetricDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceMetricDataRequest object.
 */
GetInstanceMetricDataRequest::GetInstanceMetricDataRequest()
    : LightsailRequest(new GetInstanceMetricDataRequestPrivate(LightsailRequest::GetInstanceMetricDataAction, this))
{

}

bool GetInstanceMetricDataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceMetricDataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceMetricDataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstanceMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceMetricDataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceMetricDataRequestPrivate
 *
 * @brief  Private implementation for GetInstanceMetricDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceMetricDataRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstanceMetricDataRequest instance.
 */
GetInstanceMetricDataRequestPrivate::GetInstanceMetricDataRequestPrivate(
    const LightsailRequest::Action action, GetInstanceMetricDataRequest * const q)
    : GetInstanceMetricDataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceMetricDataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceMetricDataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceMetricDataRequest instance.
 */
GetInstanceMetricDataRequestPrivate::GetInstanceMetricDataRequestPrivate(
    const GetInstanceMetricDataRequestPrivate &other, GetInstanceMetricDataRequest * const q)
    : GetInstanceMetricDataPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
