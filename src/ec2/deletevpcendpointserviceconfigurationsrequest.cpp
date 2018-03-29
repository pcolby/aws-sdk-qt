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

#include "deletevpcendpointserviceconfigurationsrequest.h"
#include "deletevpcendpointserviceconfigurationsrequest_p.h"
#include "deletevpcendpointserviceconfigurationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointServiceConfigurationsRequest
 *
 * @brief  Implements EC2 DeleteVpcEndpointServiceConfigurations requests.
 *
 * @see    EC2Client::deleteVpcEndpointServiceConfigurations
 */

/**
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcEndpointServiceConfigurationsRequest::DeleteVpcEndpointServiceConfigurationsRequest(const DeleteVpcEndpointServiceConfigurationsRequest &other)
    : EC2Request(new DeleteVpcEndpointServiceConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsRequest object.
 */
DeleteVpcEndpointServiceConfigurationsRequest::DeleteVpcEndpointServiceConfigurationsRequest()
    : EC2Request(new DeleteVpcEndpointServiceConfigurationsRequestPrivate(EC2Request::DeleteVpcEndpointServiceConfigurationsAction, this))
{

}

bool DeleteVpcEndpointServiceConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcEndpointServiceConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcEndpointServiceConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteVpcEndpointServiceConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcEndpointServiceConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointServiceConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointServiceConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteVpcEndpointServiceConfigurationsRequest instance.
 */
DeleteVpcEndpointServiceConfigurationsRequestPrivate::DeleteVpcEndpointServiceConfigurationsRequestPrivate(
    const EC2Request::Action action, DeleteVpcEndpointServiceConfigurationsRequest * const q)
    : DeleteVpcEndpointServiceConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcEndpointServiceConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcEndpointServiceConfigurationsRequest instance.
 */
DeleteVpcEndpointServiceConfigurationsRequestPrivate::DeleteVpcEndpointServiceConfigurationsRequestPrivate(
    const DeleteVpcEndpointServiceConfigurationsRequestPrivate &other, DeleteVpcEndpointServiceConfigurationsRequest * const q)
    : DeleteVpcEndpointServiceConfigurationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
