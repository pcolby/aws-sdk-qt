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

#include "createenvironmentrequest.h"
#include "createenvironmentrequest_p.h"
#include "createenvironmentresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreateEnvironmentRequest
 *
 * @brief  Implements ElasticBeanstalk CreateEnvironment requests.
 *
 * @see    ElasticBeanstalkClient::createEnvironment
 */

/**
 * @brief  Constructs a new CreateEnvironmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEnvironmentResponse::CreateEnvironmentResponse(

/**
 * @brief  Constructs a new CreateEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest(const CreateEnvironmentRequest &other)
    : ElasticBeanstalkRequest(new CreateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEnvironmentRequest object.
 */
CreateEnvironmentRequest::CreateEnvironmentRequest()
    : ElasticBeanstalkRequest(new CreateEnvironmentRequestPrivate(ElasticBeanstalkRequest::CreateEnvironmentAction, this))
{

}

bool CreateEnvironmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEnvironmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CreateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEnvironmentRequestPrivate
 *
 * @brief  Private implementation for CreateEnvironmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CreateEnvironmentRequest instance.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CreateEnvironmentRequest * const q)
    : CreateEnvironmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEnvironmentRequest instance.
 */
CreateEnvironmentRequestPrivate::CreateEnvironmentRequestPrivate(
    const CreateEnvironmentRequestPrivate &other, CreateEnvironmentRequest * const q)
    : CreateEnvironmentPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
