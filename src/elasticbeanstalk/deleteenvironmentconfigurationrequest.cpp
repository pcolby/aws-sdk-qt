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

#include "deleteenvironmentconfigurationrequest.h"
#include "deleteenvironmentconfigurationrequest_p.h"
#include "deleteenvironmentconfigurationresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DeleteEnvironmentConfigurationRequest
 *
 * @brief  Implements ElasticBeanstalk DeleteEnvironmentConfiguration requests.
 *
 * @see    ElasticBeanstalkClient::deleteEnvironmentConfiguration
 */

/**
 * @brief  Constructs a new DeleteEnvironmentConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEnvironmentConfigurationResponse::DeleteEnvironmentConfigurationResponse(

/**
 * @brief  Constructs a new DeleteEnvironmentConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEnvironmentConfigurationRequest::DeleteEnvironmentConfigurationRequest(const DeleteEnvironmentConfigurationRequest &other)
    : ElasticBeanstalkRequest(new DeleteEnvironmentConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEnvironmentConfigurationRequest object.
 */
DeleteEnvironmentConfigurationRequest::DeleteEnvironmentConfigurationRequest()
    : ElasticBeanstalkRequest(new DeleteEnvironmentConfigurationRequestPrivate(ElasticBeanstalkRequest::DeleteEnvironmentConfigurationAction, this))
{

}

bool DeleteEnvironmentConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEnvironmentConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEnvironmentConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DeleteEnvironmentConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEnvironmentConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteEnvironmentConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentConfigurationRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DeleteEnvironmentConfigurationRequest instance.
 */
DeleteEnvironmentConfigurationRequestPrivate::DeleteEnvironmentConfigurationRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DeleteEnvironmentConfigurationRequest * const q)
    : DeleteEnvironmentConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEnvironmentConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEnvironmentConfigurationRequest instance.
 */
DeleteEnvironmentConfigurationRequestPrivate::DeleteEnvironmentConfigurationRequestPrivate(
    const DeleteEnvironmentConfigurationRequestPrivate &other, DeleteEnvironmentConfigurationRequest * const q)
    : DeleteEnvironmentConfigurationPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
