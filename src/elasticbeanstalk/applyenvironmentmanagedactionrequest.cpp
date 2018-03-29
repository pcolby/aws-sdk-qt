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

#include "applyenvironmentmanagedactionrequest.h"
#include "applyenvironmentmanagedactionrequest_p.h"
#include "applyenvironmentmanagedactionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ApplyEnvironmentManagedActionRequest
 *
 * @brief  Implements ElasticBeanstalk ApplyEnvironmentManagedAction requests.
 *
 * @see    ElasticBeanstalkClient::applyEnvironmentManagedAction
 */

/**
 * @brief  Constructs a new ApplyEnvironmentManagedActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ApplyEnvironmentManagedActionRequest::ApplyEnvironmentManagedActionRequest(const ApplyEnvironmentManagedActionRequest &other)
    : ElasticBeanstalkRequest(new ApplyEnvironmentManagedActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ApplyEnvironmentManagedActionRequest object.
 */
ApplyEnvironmentManagedActionRequest::ApplyEnvironmentManagedActionRequest()
    : ElasticBeanstalkRequest(new ApplyEnvironmentManagedActionRequestPrivate(ElasticBeanstalkRequest::ApplyEnvironmentManagedActionAction, this))
{

}

bool ApplyEnvironmentManagedActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ApplyEnvironmentManagedActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ApplyEnvironmentManagedActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * ApplyEnvironmentManagedActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyEnvironmentManagedActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ApplyEnvironmentManagedActionRequestPrivate
 *
 * @brief  Private implementation for ApplyEnvironmentManagedActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplyEnvironmentManagedActionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public ApplyEnvironmentManagedActionRequest instance.
 */
ApplyEnvironmentManagedActionRequestPrivate::ApplyEnvironmentManagedActionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ApplyEnvironmentManagedActionRequest * const q)
    : ApplyEnvironmentManagedActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ApplyEnvironmentManagedActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ApplyEnvironmentManagedActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ApplyEnvironmentManagedActionRequest instance.
 */
ApplyEnvironmentManagedActionRequestPrivate::ApplyEnvironmentManagedActionRequestPrivate(
    const ApplyEnvironmentManagedActionRequestPrivate &other, ApplyEnvironmentManagedActionRequest * const q)
    : ApplyEnvironmentManagedActionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
