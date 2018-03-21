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

#include "describeenvironmentresourcesrequest.h"
#include "describeenvironmentresourcesrequest_p.h"
#include "describeenvironmentresourcesresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentResourcesRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeEnvironmentResources requests.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentResources
 */

/**
 * @brief  Constructs a new DescribeEnvironmentResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentResourcesResponse::DescribeEnvironmentResourcesResponse(

/**
 * @brief  Constructs a new DescribeEnvironmentResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEnvironmentResourcesRequest::DescribeEnvironmentResourcesRequest(const DescribeEnvironmentResourcesRequest &other)
    : ElasticBeanstalkRequest(new DescribeEnvironmentResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEnvironmentResourcesRequest object.
 */
DescribeEnvironmentResourcesRequest::DescribeEnvironmentResourcesRequest()
    : ElasticBeanstalkRequest(new DescribeEnvironmentResourcesRequestPrivate(ElasticBeanstalkRequest::DescribeEnvironmentResourcesAction, this))
{

}

bool DescribeEnvironmentResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEnvironmentResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEnvironmentResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribeEnvironmentResourcesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEnvironmentResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentResourcesRequestPrivate
 *
 * @brief  Private implementation for DescribeEnvironmentResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentResourcesRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeEnvironmentResourcesRequest instance.
 */
DescribeEnvironmentResourcesRequestPrivate::DescribeEnvironmentResourcesRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeEnvironmentResourcesRequest * const q)
    : DescribeEnvironmentResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEnvironmentResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEnvironmentResourcesRequest instance.
 */
DescribeEnvironmentResourcesRequestPrivate::DescribeEnvironmentResourcesRequestPrivate(
    const DescribeEnvironmentResourcesRequestPrivate &other, DescribeEnvironmentResourcesRequest * const q)
    : DescribeEnvironmentResourcesPrivate(other, q)
{

}
