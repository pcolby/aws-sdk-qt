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

#include "describeapplicationsrequest.h"
#include "describeapplicationsrequest_p.h"
#include "describeapplicationsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeApplicationsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeApplications requests.
 *
 * @see    ElasticBeanstalkClient::describeApplications
 */

/**
 * @brief  Constructs a new DescribeApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeApplicationsRequest::DescribeApplicationsRequest(const DescribeApplicationsRequest &other)
    : ElasticBeanstalkRequest(new DescribeApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeApplicationsRequest object.
 */
DescribeApplicationsRequest::DescribeApplicationsRequest()
    : ElasticBeanstalkRequest(new DescribeApplicationsRequestPrivate(ElasticBeanstalkRequest::DescribeApplicationsAction, this))
{

}

bool DescribeApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeApplicationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeApplicationsRequestPrivate
 *
 * @brief  Private implementation for DescribeApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeApplicationsRequest instance.
 */
DescribeApplicationsRequestPrivate::DescribeApplicationsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeApplicationsRequest * const q)
    : DescribeApplicationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeApplicationsRequest instance.
 */
DescribeApplicationsRequestPrivate::DescribeApplicationsRequestPrivate(
    const DescribeApplicationsRequestPrivate &other, DescribeApplicationsRequest * const q)
    : DescribeApplicationsPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
