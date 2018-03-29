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

#include "abortenvironmentupdaterequest.h"
#include "abortenvironmentupdaterequest_p.h"
#include "abortenvironmentupdateresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  AbortEnvironmentUpdateRequest
 *
 * @brief  Implements ElasticBeanstalk AbortEnvironmentUpdate requests.
 *
 * @see    ElasticBeanstalkClient::abortEnvironmentUpdate
 */

/**
 * @brief  Constructs a new AbortEnvironmentUpdateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AbortEnvironmentUpdateRequest::AbortEnvironmentUpdateRequest(const AbortEnvironmentUpdateRequest &other)
    : ElasticBeanstalkRequest(new AbortEnvironmentUpdateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AbortEnvironmentUpdateRequest object.
 */
AbortEnvironmentUpdateRequest::AbortEnvironmentUpdateRequest()
    : ElasticBeanstalkRequest(new AbortEnvironmentUpdateRequestPrivate(ElasticBeanstalkRequest::AbortEnvironmentUpdateAction, this))
{

}

bool AbortEnvironmentUpdateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AbortEnvironmentUpdateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AbortEnvironmentUpdateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * AbortEnvironmentUpdateRequest::response(QNetworkReply * const reply) const
{
    return new AbortEnvironmentUpdateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AbortEnvironmentUpdateRequestPrivate
 *
 * @brief  Private implementation for AbortEnvironmentUpdateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortEnvironmentUpdateRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public AbortEnvironmentUpdateRequest instance.
 */
AbortEnvironmentUpdateRequestPrivate::AbortEnvironmentUpdateRequestPrivate(
    const ElasticBeanstalkRequest::Action action, AbortEnvironmentUpdateRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AbortEnvironmentUpdateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AbortEnvironmentUpdateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AbortEnvironmentUpdateRequest instance.
 */
AbortEnvironmentUpdateRequestPrivate::AbortEnvironmentUpdateRequestPrivate(
    const AbortEnvironmentUpdateRequestPrivate &other, AbortEnvironmentUpdateRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
