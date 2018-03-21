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

#include "describeendpointconfigrequest.h"
#include "describeendpointconfigrequest_p.h"
#include "describeendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  DescribeEndpointConfigRequest
 *
 * @brief  Implements SageMaker DescribeEndpointConfig requests.
 *
 * @see    SageMakerClient::describeEndpointConfig
 */

/**
 * @brief  Constructs a new DescribeEndpointConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest(const DescribeEndpointConfigRequest &other)
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEndpointConfigRequest object.
 */
DescribeEndpointConfigRequest::DescribeEndpointConfigRequest()
    : SageMakerRequest(new DescribeEndpointConfigRequestPrivate(SageMakerRequest::DescribeEndpointConfigAction, this))
{

}

bool DescribeEndpointConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEndpointConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEndpointConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * DescribeEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEndpointConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEndpointConfigRequestPrivate
 *
 * @brief  Private implementation for DescribeEndpointConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DescribeEndpointConfigRequest instance.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeEndpointConfigRequest * const q)
    : DescribeEndpointConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEndpointConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEndpointConfigRequest instance.
 */
DescribeEndpointConfigRequestPrivate::DescribeEndpointConfigRequestPrivate(
    const DescribeEndpointConfigRequestPrivate &other, DescribeEndpointConfigRequest * const q)
    : DescribeEndpointConfigPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
