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

#include "describeconfigurationoptionsrequest.h"
#include "describeconfigurationoptionsrequest_p.h"
#include "describeconfigurationoptionsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeConfigurationOptionsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeConfigurationOptions requests.
 *
 * @see    ElasticBeanstalkClient::describeConfigurationOptions
 */

/**
 * @brief  Constructs a new DescribeConfigurationOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationOptionsResponse::DescribeConfigurationOptionsResponse(

/**
 * @brief  Constructs a new DescribeConfigurationOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationOptionsRequest::DescribeConfigurationOptionsRequest(const DescribeConfigurationOptionsRequest &other)
    : ElasticBeanstalkRequest(new DescribeConfigurationOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationOptionsRequest object.
 */
DescribeConfigurationOptionsRequest::DescribeConfigurationOptionsRequest()
    : ElasticBeanstalkRequest(new DescribeConfigurationOptionsRequestPrivate(ElasticBeanstalkRequest::DescribeConfigurationOptionsAction, this))
{

}

bool DescribeConfigurationOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribeConfigurationOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationOptionsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationOptionsRequest instance.
 */
DescribeConfigurationOptionsRequestPrivate::DescribeConfigurationOptionsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeConfigurationOptionsRequest * const q)
    : DescribeConfigurationOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationOptionsRequest instance.
 */
DescribeConfigurationOptionsRequestPrivate::DescribeConfigurationOptionsRequestPrivate(
    const DescribeConfigurationOptionsRequestPrivate &other, DescribeConfigurationOptionsRequest * const q)
    : DescribeConfigurationOptionsPrivate(other, q)
{

}
