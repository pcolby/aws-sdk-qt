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

#include "deleteapplicationversionrequest.h"
#include "deleteapplicationversionrequest_p.h"
#include "deleteapplicationversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DeleteApplicationVersionRequest
 *
 * @brief  Implements ElasticBeanstalk DeleteApplicationVersion requests.
 *
 * @see    ElasticBeanstalkClient::deleteApplicationVersion
 */

/**
 * @brief  Constructs a new DeleteApplicationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationVersionRequest::DeleteApplicationVersionRequest(const DeleteApplicationVersionRequest &other)
    : ElasticBeanstalkRequest(new DeleteApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationVersionRequest object.
 */
DeleteApplicationVersionRequest::DeleteApplicationVersionRequest()
    : ElasticBeanstalkRequest(new DeleteApplicationVersionRequestPrivate(ElasticBeanstalkRequest::DeleteApplicationVersionAction, this))
{

}

bool DeleteApplicationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DeleteApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationVersionRequest instance.
 */
DeleteApplicationVersionRequestPrivate::DeleteApplicationVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DeleteApplicationVersionRequest * const q)
    : DeleteApplicationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationVersionRequest instance.
 */
DeleteApplicationVersionRequestPrivate::DeleteApplicationVersionRequestPrivate(
    const DeleteApplicationVersionRequestPrivate &other, DeleteApplicationVersionRequest * const q)
    : DeleteApplicationVersionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
