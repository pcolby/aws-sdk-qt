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

#include "describeconfigurationsettingsrequest.h"
#include "describeconfigurationsettingsrequest_p.h"
#include "describeconfigurationsettingsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeConfigurationSettingsRequest
 *
 * @brief  Implements ElasticBeanstalk DescribeConfigurationSettings requests.
 *
 * @see    ElasticBeanstalkClient::describeConfigurationSettings
 */

/**
 * @brief  Constructs a new DescribeConfigurationSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationSettingsRequest::DescribeConfigurationSettingsRequest(const DescribeConfigurationSettingsRequest &other)
    : ElasticBeanstalkRequest(new DescribeConfigurationSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationSettingsRequest object.
 */
DescribeConfigurationSettingsRequest::DescribeConfigurationSettingsRequest()
    : ElasticBeanstalkRequest(new DescribeConfigurationSettingsRequestPrivate(ElasticBeanstalkRequest::DescribeConfigurationSettingsAction, this))
{

}

bool DescribeConfigurationSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationSettingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationSettingsRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSettingsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationSettingsRequest instance.
 */
DescribeConfigurationSettingsRequestPrivate::DescribeConfigurationSettingsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribeConfigurationSettingsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationSettingsRequest instance.
 */
DescribeConfigurationSettingsRequestPrivate::DescribeConfigurationSettingsRequestPrivate(
    const DescribeConfigurationSettingsRequestPrivate &other, DescribeConfigurationSettingsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
