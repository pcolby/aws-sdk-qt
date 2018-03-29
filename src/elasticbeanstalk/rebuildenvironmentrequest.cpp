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

#include "rebuildenvironmentrequest.h"
#include "rebuildenvironmentrequest_p.h"
#include "rebuildenvironmentresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  RebuildEnvironmentRequest
 *
 * @brief  Implements ElasticBeanstalk RebuildEnvironment requests.
 *
 * @see    ElasticBeanstalkClient::rebuildEnvironment
 */

/**
 * @brief  Constructs a new RebuildEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebuildEnvironmentRequest::RebuildEnvironmentRequest(const RebuildEnvironmentRequest &other)
    : ElasticBeanstalkRequest(new RebuildEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebuildEnvironmentRequest object.
 */
RebuildEnvironmentRequest::RebuildEnvironmentRequest()
    : ElasticBeanstalkRequest(new RebuildEnvironmentRequestPrivate(ElasticBeanstalkRequest::RebuildEnvironmentAction, this))
{

}

bool RebuildEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebuildEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebuildEnvironmentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * RebuildEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new RebuildEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebuildEnvironmentRequestPrivate
 *
 * @brief  Private implementation for RebuildEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebuildEnvironmentRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public RebuildEnvironmentRequest instance.
 */
RebuildEnvironmentRequestPrivate::RebuildEnvironmentRequestPrivate(
    const ElasticBeanstalkRequest::Action action, RebuildEnvironmentRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebuildEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebuildEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebuildEnvironmentRequest instance.
 */
RebuildEnvironmentRequestPrivate::RebuildEnvironmentRequestPrivate(
    const RebuildEnvironmentRequestPrivate &other, RebuildEnvironmentRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
