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

#include "deleteplatformversionrequest.h"
#include "deleteplatformversionrequest_p.h"
#include "deleteplatformversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DeletePlatformVersionRequest
 *
 * @brief  Implements ElasticBeanstalk DeletePlatformVersion requests.
 *
 * @see    ElasticBeanstalkClient::deletePlatformVersion
 */

/**
 * @brief  Constructs a new DeletePlatformVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePlatformVersionRequest::DeletePlatformVersionRequest(const DeletePlatformVersionRequest &other)
    : ElasticBeanstalkRequest(new DeletePlatformVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePlatformVersionRequest object.
 */
DeletePlatformVersionRequest::DeletePlatformVersionRequest()
    : ElasticBeanstalkRequest(new DeletePlatformVersionRequestPrivate(ElasticBeanstalkRequest::DeletePlatformVersionAction, this))
{

}

bool DeletePlatformVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePlatformVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePlatformVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DeletePlatformVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlatformVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePlatformVersionRequestPrivate
 *
 * @brief  Private implementation for DeletePlatformVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DeletePlatformVersionRequest instance.
 */
DeletePlatformVersionRequestPrivate::DeletePlatformVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DeletePlatformVersionRequest * const q)
    : DeletePlatformVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePlatformVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePlatformVersionRequest instance.
 */
DeletePlatformVersionRequestPrivate::DeletePlatformVersionRequestPrivate(
    const DeletePlatformVersionRequestPrivate &other, DeletePlatformVersionRequest * const q)
    : DeletePlatformVersionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
