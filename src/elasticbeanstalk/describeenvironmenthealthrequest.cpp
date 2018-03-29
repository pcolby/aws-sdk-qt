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

#include "describeenvironmenthealthrequest.h"
#include "describeenvironmenthealthrequest_p.h"
#include "describeenvironmenthealthresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentHealthRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeEnvironmentHealth requests.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentHealth
 */

/**
 * @brief  Constructs a new DescribeEnvironmentHealthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentHealthRequest::DescribeEnvironmentHealthRequest(const DescribeEnvironmentHealthRequest &other)
    : ElasticBeanstalkRequest(new DescribeEnvironmentHealthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentHealthRequest object.
 */
DescribeEnvironmentHealthRequest::DescribeEnvironmentHealthRequest()
    : ElasticBeanstalkRequest(new DescribeEnvironmentHealthRequestPrivate(ElasticBeanstalkRequest::DescribeEnvironmentHealthAction, this))
{

}

bool DescribeEnvironmentHealthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentHealthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentHealthResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEnvironmentHealthRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentHealthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentHealthRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentHealthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentHealthRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentHealthRequest instance.
 */
DescribeEnvironmentHealthRequestPrivate::DescribeEnvironmentHealthRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeEnvironmentHealthRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentHealthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentHealthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentHealthRequest instance.
 */
DescribeEnvironmentHealthRequestPrivate::DescribeEnvironmentHealthRequestPrivate(
    const DescribeEnvironmentHealthRequestPrivate &other, DescribeEnvironmentHealthRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
