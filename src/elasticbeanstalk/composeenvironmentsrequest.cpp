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

#include "composeenvironmentsrequest.h"
#include "composeenvironmentsrequest_p.h"
#include "composeenvironmentsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ComposeEnvironmentsRequest
 *
 * @brief  Implements ElasticBeanstalk ComposeEnvironments requests.
 *
 * @see    ElasticBeanstalkClient::composeEnvironments
 */

/**
 * @brief  Constructs a new ComposeEnvironmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ComposeEnvironmentsRequest::ComposeEnvironmentsRequest(const ComposeEnvironmentsRequest &other)
    : ElasticBeanstalkRequest(new ComposeEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ComposeEnvironmentsRequest object.
 */
ComposeEnvironmentsRequest::ComposeEnvironmentsRequest()
    : ElasticBeanstalkRequest(new ComposeEnvironmentsRequestPrivate(ElasticBeanstalkRequest::ComposeEnvironmentsAction, this))
{

}

bool ComposeEnvironmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ComposeEnvironmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ComposeEnvironmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * ComposeEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ComposeEnvironmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ComposeEnvironmentsRequestPrivate
 *
 * @brief  Private implementation for ComposeEnvironmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ComposeEnvironmentsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public ComposeEnvironmentsRequest instance.
 */
ComposeEnvironmentsRequestPrivate::ComposeEnvironmentsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ComposeEnvironmentsRequest * const q)
    : ComposeEnvironmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ComposeEnvironmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ComposeEnvironmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ComposeEnvironmentsRequest instance.
 */
ComposeEnvironmentsRequestPrivate::ComposeEnvironmentsRequestPrivate(
    const ComposeEnvironmentsRequestPrivate &other, ComposeEnvironmentsRequest * const q)
    : ComposeEnvironmentsPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
