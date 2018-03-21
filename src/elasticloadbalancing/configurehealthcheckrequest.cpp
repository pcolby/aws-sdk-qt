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

#include "configurehealthcheckrequest.h"
#include "configurehealthcheckrequest_p.h"
#include "configurehealthcheckresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ConfigureHealthCheckRequest
 *
 * @brief  Implements ElasticLoadBalancing ConfigureHealthCheck requests.
 *
 * @see    ElasticLoadBalancingClient::configureHealthCheck
 */

/**
 * @brief  Constructs a new ConfigureHealthCheckResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfigureHealthCheckResponse::ConfigureHealthCheckResponse(

/**
 * @brief  Constructs a new ConfigureHealthCheckRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfigureHealthCheckRequest::ConfigureHealthCheckRequest(const ConfigureHealthCheckRequest &other)
    : ElasticLoadBalancingRequest(new ConfigureHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfigureHealthCheckRequest object.
 */
ConfigureHealthCheckRequest::ConfigureHealthCheckRequest()
    : ElasticLoadBalancingRequest(new ConfigureHealthCheckRequestPrivate(ElasticLoadBalancingRequest::ConfigureHealthCheckAction, this))
{

}

bool ConfigureHealthCheckRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfigureHealthCheckResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfigureHealthCheckResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * ConfigureHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new ConfigureHealthCheckResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfigureHealthCheckRequestPrivate
 *
 * @brief  Private implementation for ConfigureHealthCheckRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfigureHealthCheckRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public ConfigureHealthCheckRequest instance.
 */
ConfigureHealthCheckRequestPrivate::ConfigureHealthCheckRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, ConfigureHealthCheckRequest * const q)
    : ConfigureHealthCheckPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfigureHealthCheckRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfigureHealthCheckRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfigureHealthCheckRequest instance.
 */
ConfigureHealthCheckRequestPrivate::ConfigureHealthCheckRequestPrivate(
    const ConfigureHealthCheckRequestPrivate &other, ConfigureHealthCheckRequest * const q)
    : ConfigureHealthCheckPrivate(other, q)
{

}
