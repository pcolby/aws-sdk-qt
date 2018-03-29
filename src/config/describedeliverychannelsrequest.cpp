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

#include "describedeliverychannelsrequest.h"
#include "describedeliverychannelsrequest_p.h"
#include "describedeliverychannelsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeDeliveryChannelsRequest
 *
 * @brief  Implements ConfigService DescribeDeliveryChannels requests.
 *
 * @see    ConfigServiceClient::describeDeliveryChannels
 */

/**
 * @brief  Constructs a new DescribeDeliveryChannelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDeliveryChannelsRequest::DescribeDeliveryChannelsRequest(const DescribeDeliveryChannelsRequest &other)
    : ConfigServiceRequest(new DescribeDeliveryChannelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDeliveryChannelsRequest object.
 */
DescribeDeliveryChannelsRequest::DescribeDeliveryChannelsRequest()
    : ConfigServiceRequest(new DescribeDeliveryChannelsRequestPrivate(ConfigServiceRequest::DescribeDeliveryChannelsAction, this))
{

}

bool DescribeDeliveryChannelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDeliveryChannelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDeliveryChannelsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeliveryChannelsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeliveryChannelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDeliveryChannelsRequestPrivate
 *
 * @brief  Private implementation for DescribeDeliveryChannelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelsRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeDeliveryChannelsRequest instance.
 */
DescribeDeliveryChannelsRequestPrivate::DescribeDeliveryChannelsRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeDeliveryChannelsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeliveryChannelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDeliveryChannelsRequest instance.
 */
DescribeDeliveryChannelsRequestPrivate::DescribeDeliveryChannelsRequestPrivate(
    const DescribeDeliveryChannelsRequestPrivate &other, DescribeDeliveryChannelsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
