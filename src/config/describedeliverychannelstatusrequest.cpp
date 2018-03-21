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

#include "describedeliverychannelstatusrequest.h"
#include "describedeliverychannelstatusrequest_p.h"
#include "describedeliverychannelstatusresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeDeliveryChannelStatusRequest
 *
 * @brief  Implements ConfigService DescribeDeliveryChannelStatus requests.
 *
 * @see    ConfigServiceClient::describeDeliveryChannelStatus
 */

/**
 * @brief  Constructs a new DescribeDeliveryChannelStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDeliveryChannelStatusRequest::DescribeDeliveryChannelStatusRequest(const DescribeDeliveryChannelStatusRequest &other)
    : ConfigServiceRequest(new DescribeDeliveryChannelStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDeliveryChannelStatusRequest object.
 */
DescribeDeliveryChannelStatusRequest::DescribeDeliveryChannelStatusRequest()
    : ConfigServiceRequest(new DescribeDeliveryChannelStatusRequestPrivate(ConfigServiceRequest::DescribeDeliveryChannelStatusAction, this))
{

}

bool DescribeDeliveryChannelStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDeliveryChannelStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDeliveryChannelStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DescribeDeliveryChannelStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeliveryChannelStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDeliveryChannelStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeDeliveryChannelStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelStatusRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeDeliveryChannelStatusRequest instance.
 */
DescribeDeliveryChannelStatusRequestPrivate::DescribeDeliveryChannelStatusRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeDeliveryChannelStatusRequest * const q)
    : DescribeDeliveryChannelStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeliveryChannelStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDeliveryChannelStatusRequest instance.
 */
DescribeDeliveryChannelStatusRequestPrivate::DescribeDeliveryChannelStatusRequestPrivate(
    const DescribeDeliveryChannelStatusRequestPrivate &other, DescribeDeliveryChannelStatusRequest * const q)
    : DescribeDeliveryChannelStatusPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
