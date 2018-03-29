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

#include "createapplicationversionrequest.h"
#include "createapplicationversionrequest_p.h"
#include "createapplicationversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  CreateApplicationVersionRequest
 *
 * @brief  Implements ElasticBeanstalk CreateApplicationVersion requests.
 *
 * @see    ElasticBeanstalkClient::createApplicationVersion
 */

/**
 * @brief  Constructs a new CreateApplicationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other)
    : ElasticBeanstalkRequest(new CreateApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateApplicationVersionRequest object.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest()
    : ElasticBeanstalkRequest(new CreateApplicationVersionRequestPrivate(ElasticBeanstalkRequest::CreateApplicationVersionAction, this))
{

}

bool CreateApplicationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateApplicationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApplicationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CreateApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateApplicationVersionRequestPrivate
 *
 * @brief  Private implementation for CreateApplicationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CreateApplicationVersionRequest instance.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreateApplicationVersionRequest * const q)
    : CreateApplicationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApplicationVersionRequest instance.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const CreateApplicationVersionRequestPrivate &other, CreateApplicationVersionRequest * const q)
    : CreateApplicationVersionPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
