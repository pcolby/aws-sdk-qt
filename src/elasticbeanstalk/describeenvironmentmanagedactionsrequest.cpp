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

#include "describeenvironmentmanagedactionsrequest.h"
#include "describeenvironmentmanagedactionsrequest_p.h"
#include "describeenvironmentmanagedactionsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentManagedActionsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeEnvironmentManagedActions requests.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentManagedActions
 */

/**
 * @brief  Constructs a new DescribeEnvironmentManagedActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentManagedActionsRequest::DescribeEnvironmentManagedActionsRequest(const DescribeEnvironmentManagedActionsRequest &other)
    : ElasticBeanstalkRequest(new DescribeEnvironmentManagedActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentManagedActionsRequest object.
 */
DescribeEnvironmentManagedActionsRequest::DescribeEnvironmentManagedActionsRequest()
    : ElasticBeanstalkRequest(new DescribeEnvironmentManagedActionsRequestPrivate(ElasticBeanstalkRequest::DescribeEnvironmentManagedActionsAction, this))
{

}

bool DescribeEnvironmentManagedActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentManagedActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentManagedActionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEnvironmentManagedActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentManagedActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentManagedActionsRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentManagedActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentManagedActionsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentManagedActionsRequest instance.
 */
DescribeEnvironmentManagedActionsRequestPrivate::DescribeEnvironmentManagedActionsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeEnvironmentManagedActionsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentManagedActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentManagedActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentManagedActionsRequest instance.
 */
DescribeEnvironmentManagedActionsRequestPrivate::DescribeEnvironmentManagedActionsRequestPrivate(
    const DescribeEnvironmentManagedActionsRequestPrivate &other, DescribeEnvironmentManagedActionsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
