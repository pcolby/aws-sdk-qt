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

#include "updateapplicationversionrequest.h"
#include "updateapplicationversionrequest_p.h"
#include "updateapplicationversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateApplicationVersionRequest
 *
 * @brief  Implements ElasticBeanstalk UpdateApplicationVersion requests.
 *
 * @see    ElasticBeanstalkClient::updateApplicationVersion
 */

/**
 * @brief  Constructs a new UpdateApplicationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApplicationVersionRequest::UpdateApplicationVersionRequest(const UpdateApplicationVersionRequest &other)
    : ElasticBeanstalkRequest(new UpdateApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApplicationVersionRequest object.
 */
UpdateApplicationVersionRequest::UpdateApplicationVersionRequest()
    : ElasticBeanstalkRequest(new UpdateApplicationVersionRequestPrivate(ElasticBeanstalkRequest::UpdateApplicationVersionAction, this))
{

}

bool UpdateApplicationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApplicationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApplicationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * UpdateApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApplicationVersionRequestPrivate
 *
 * @brief  Private implementation for UpdateApplicationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public UpdateApplicationVersionRequest instance.
 */
UpdateApplicationVersionRequestPrivate::UpdateApplicationVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, UpdateApplicationVersionRequest * const q)
    : UpdateApplicationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApplicationVersionRequest instance.
 */
UpdateApplicationVersionRequestPrivate::UpdateApplicationVersionRequestPrivate(
    const UpdateApplicationVersionRequestPrivate &other, UpdateApplicationVersionRequest * const q)
    : UpdateApplicationVersionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
