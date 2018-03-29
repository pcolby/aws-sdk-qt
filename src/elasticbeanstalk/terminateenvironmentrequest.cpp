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

#include "terminateenvironmentrequest.h"
#include "terminateenvironmentrequest_p.h"
#include "terminateenvironmentresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  TerminateEnvironmentRequest
 *
 * @brief  Implements ElasticBeanstalk TerminateEnvironment requests.
 *
 * @see    ElasticBeanstalkClient::terminateEnvironment
 */

/**
 * @brief  Constructs a new TerminateEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateEnvironmentRequest::TerminateEnvironmentRequest(const TerminateEnvironmentRequest &other)
    : ElasticBeanstalkRequest(new TerminateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateEnvironmentRequest object.
 */
TerminateEnvironmentRequest::TerminateEnvironmentRequest()
    : ElasticBeanstalkRequest(new TerminateEnvironmentRequestPrivate(ElasticBeanstalkRequest::TerminateEnvironmentAction, this))
{

}

bool TerminateEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * TerminateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new TerminateEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateEnvironmentRequestPrivate
 *
 * @brief  Private implementation for TerminateEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateEnvironmentRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public TerminateEnvironmentRequest instance.
 */
TerminateEnvironmentRequestPrivate::TerminateEnvironmentRequestPrivate(
    const ElasticBeanstalkRequest::Action action, TerminateEnvironmentRequest * const q)
    : TerminateEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateEnvironmentRequest instance.
 */
TerminateEnvironmentRequestPrivate::TerminateEnvironmentRequestPrivate(
    const TerminateEnvironmentRequestPrivate &other, TerminateEnvironmentRequest * const q)
    : TerminateEnvironmentPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
