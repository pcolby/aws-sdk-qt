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

#include "describeinstanceshealthrequest.h"
#include "describeinstanceshealthrequest_p.h"
#include "describeinstanceshealthresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeInstancesHealthRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeInstancesHealth requests.
 *
 * @see    ElasticBeanstalkClient::describeInstancesHealth
 */

/**
 * @brief  Constructs a new DescribeInstancesHealthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstancesHealthRequest::DescribeInstancesHealthRequest(const DescribeInstancesHealthRequest &other)
    : ElasticBeanstalkRequest(new DescribeInstancesHealthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstancesHealthRequest object.
 */
DescribeInstancesHealthRequest::DescribeInstancesHealthRequest()
    : ElasticBeanstalkRequest(new DescribeInstancesHealthRequestPrivate(ElasticBeanstalkRequest::DescribeInstancesHealthAction, this))
{

}

bool DescribeInstancesHealthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstancesHealthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstancesHealthResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribeInstancesHealthRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstancesHealthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstancesHealthRequestPrivate
 *
 * @brief  Private implementation for DescribeInstancesHealthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesHealthRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeInstancesHealthRequest instance.
 */
DescribeInstancesHealthRequestPrivate::DescribeInstancesHealthRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeInstancesHealthRequest * const q)
    : DescribeInstancesHealthPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesHealthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstancesHealthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstancesHealthRequest instance.
 */
DescribeInstancesHealthRequestPrivate::DescribeInstancesHealthRequestPrivate(
    const DescribeInstancesHealthRequestPrivate &other, DescribeInstancesHealthRequest * const q)
    : DescribeInstancesHealthPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
