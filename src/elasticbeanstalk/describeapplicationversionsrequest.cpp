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

#include "describeapplicationversionsrequest.h"
#include "describeapplicationversionsrequest_p.h"
#include "describeapplicationversionsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeApplicationVersionsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeApplicationVersions requests.
 *
 * @see    ElasticBeanstalkClient::describeApplicationVersions
 */

/**
 * @brief  Constructs a new DescribeApplicationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeApplicationVersionsResponse::DescribeApplicationVersionsResponse(

/**
 * @brief  Constructs a new DescribeApplicationVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeApplicationVersionsRequest::DescribeApplicationVersionsRequest(const DescribeApplicationVersionsRequest &other)
    : ElasticBeanstalkRequest(new DescribeApplicationVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeApplicationVersionsRequest object.
 */
DescribeApplicationVersionsRequest::DescribeApplicationVersionsRequest()
    : ElasticBeanstalkRequest(new DescribeApplicationVersionsRequestPrivate(ElasticBeanstalkRequest::DescribeApplicationVersionsAction, this))
{

}

bool DescribeApplicationVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeApplicationVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeApplicationVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribeApplicationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeApplicationVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeApplicationVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationVersionsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeApplicationVersionsRequest instance.
 */
DescribeApplicationVersionsRequestPrivate::DescribeApplicationVersionsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeApplicationVersionsRequest * const q)
    : DescribeApplicationVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeApplicationVersionsRequest instance.
 */
DescribeApplicationVersionsRequestPrivate::DescribeApplicationVersionsRequestPrivate(
    const DescribeApplicationVersionsRequestPrivate &other, DescribeApplicationVersionsRequest * const q)
    : DescribeApplicationVersionsPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
