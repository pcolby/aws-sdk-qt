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

#include "describeruntimeconfigurationrequest.h"
#include "describeruntimeconfigurationrequest_p.h"
#include "describeruntimeconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeRuntimeConfigurationRequest
 *
 * @brief  Implements GameLift DescribeRuntimeConfiguration requests.
 *
 * @see    GameLiftClient::describeRuntimeConfiguration
 */

/**
 * @brief  Constructs a new DescribeRuntimeConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRuntimeConfigurationResponse::DescribeRuntimeConfigurationResponse(

/**
 * @brief  Constructs a new DescribeRuntimeConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRuntimeConfigurationRequest::DescribeRuntimeConfigurationRequest(const DescribeRuntimeConfigurationRequest &other)
    : GameLiftRequest(new DescribeRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRuntimeConfigurationRequest object.
 */
DescribeRuntimeConfigurationRequest::DescribeRuntimeConfigurationRequest()
    : GameLiftRequest(new DescribeRuntimeConfigurationRequestPrivate(GameLiftRequest::DescribeRuntimeConfigurationAction, this))
{

}

bool DescribeRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRuntimeConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRuntimeConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRuntimeConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRuntimeConfigurationRequestPrivate
 *
 * @brief  Private implementation for DescribeRuntimeConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuntimeConfigurationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeRuntimeConfigurationRequest instance.
 */
DescribeRuntimeConfigurationRequestPrivate::DescribeRuntimeConfigurationRequestPrivate(
    const GameLiftRequest::Action action, DescribeRuntimeConfigurationRequest * const q)
    : DescribeRuntimeConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuntimeConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRuntimeConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRuntimeConfigurationRequest instance.
 */
DescribeRuntimeConfigurationRequestPrivate::DescribeRuntimeConfigurationRequestPrivate(
    const DescribeRuntimeConfigurationRequestPrivate &other, DescribeRuntimeConfigurationRequest * const q)
    : DescribeRuntimeConfigurationPrivate(other, q)
{

}
