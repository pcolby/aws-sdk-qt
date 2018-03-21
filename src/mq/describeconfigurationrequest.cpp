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

#include "describeconfigurationrequest.h"
#include "describeconfigurationrequest_p.h"
#include "describeconfigurationresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  DescribeConfigurationRequest
 *
 * @brief  Implements MQ DescribeConfiguration requests.
 *
 * @see    MQClient::describeConfiguration
 */

/**
 * @brief  Constructs a new DescribeConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationResponse::DescribeConfigurationResponse(

/**
 * @brief  Constructs a new DescribeConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest(const DescribeConfigurationRequest &other)
    : MQRequest(new DescribeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationRequest object.
 */
DescribeConfigurationRequest::DescribeConfigurationRequest()
    : MQRequest(new DescribeConfigurationRequestPrivate(MQRequest::DescribeConfigurationAction, this))
{

}

bool DescribeConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * DescribeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationRequest instance.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const MQRequest::Action action, DescribeConfigurationRequest * const q)
    : DescribeConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationRequest instance.
 */
DescribeConfigurationRequestPrivate::DescribeConfigurationRequestPrivate(
    const DescribeConfigurationRequestPrivate &other, DescribeConfigurationRequest * const q)
    : DescribeConfigurationPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
