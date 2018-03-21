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

#include "describeeventconfigurationsrequest.h"
#include "describeeventconfigurationsrequest_p.h"
#include "describeeventconfigurationsresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DescribeEventConfigurationsRequest
 *
 * @brief  Implements IoT DescribeEventConfigurations requests.
 *
 * @see    IoTClient::describeEventConfigurations
 */

/**
 * @brief  Constructs a new DescribeEventConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventConfigurationsResponse::DescribeEventConfigurationsResponse(

/**
 * @brief  Constructs a new DescribeEventConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventConfigurationsRequest::DescribeEventConfigurationsRequest(const DescribeEventConfigurationsRequest &other)
    : IoTRequest(new DescribeEventConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventConfigurationsRequest object.
 */
DescribeEventConfigurationsRequest::DescribeEventConfigurationsRequest()
    : IoTRequest(new DescribeEventConfigurationsRequestPrivate(IoTRequest::DescribeEventConfigurationsAction, this))
{

}

bool DescribeEventConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeEventConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventConfigurationsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeEventConfigurationsRequest instance.
 */
DescribeEventConfigurationsRequestPrivate::DescribeEventConfigurationsRequestPrivate(
    const IoTRequest::Action action, DescribeEventConfigurationsRequest * const q)
    : DescribeEventConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventConfigurationsRequest instance.
 */
DescribeEventConfigurationsRequestPrivate::DescribeEventConfigurationsRequestPrivate(
    const DescribeEventConfigurationsRequestPrivate &other, DescribeEventConfigurationsRequest * const q)
    : DescribeEventConfigurationsPrivate(other, q)
{

}
