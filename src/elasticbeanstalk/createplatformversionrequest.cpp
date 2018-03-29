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

#include "createplatformversionrequest.h"
#include "createplatformversionrequest_p.h"
#include "createplatformversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  CreatePlatformVersionRequest
 *
 * @brief  Implements ElasticBeanstalk CreatePlatformVersion requests.
 *
 * @see    ElasticBeanstalkClient::createPlatformVersion
 */

/**
 * @brief  Constructs a new CreatePlatformVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlatformVersionRequest::CreatePlatformVersionRequest(const CreatePlatformVersionRequest &other)
    : ElasticBeanstalkRequest(new CreatePlatformVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlatformVersionRequest object.
 */
CreatePlatformVersionRequest::CreatePlatformVersionRequest()
    : ElasticBeanstalkRequest(new CreatePlatformVersionRequestPrivate(ElasticBeanstalkRequest::CreatePlatformVersionAction, this))
{

}

bool CreatePlatformVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlatformVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlatformVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CreatePlatformVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlatformVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlatformVersionRequestPrivate
 *
 * @brief  Private implementation for CreatePlatformVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CreatePlatformVersionRequest instance.
 */
CreatePlatformVersionRequestPrivate::CreatePlatformVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreatePlatformVersionRequest * const q)
    : CreatePlatformVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlatformVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlatformVersionRequest instance.
 */
CreatePlatformVersionRequestPrivate::CreatePlatformVersionRequestPrivate(
    const CreatePlatformVersionRequestPrivate &other, CreatePlatformVersionRequest * const q)
    : CreatePlatformVersionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
