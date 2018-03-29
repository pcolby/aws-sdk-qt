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

#include "updateendpointrequest.h"
#include "updateendpointrequest_p.h"
#include "updateendpointresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  UpdateEndpointRequest
 *
 * @brief  Implements SageMaker UpdateEndpoint requests.
 *
 * @see    SageMakerClient::updateEndpoint
 */

/**
 * @brief  Constructs a new UpdateEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEndpointRequest::UpdateEndpointRequest(const UpdateEndpointRequest &other)
    : SageMakerRequest(new UpdateEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEndpointRequest object.
 */
UpdateEndpointRequest::UpdateEndpointRequest()
    : SageMakerRequest(new UpdateEndpointRequestPrivate(SageMakerRequest::UpdateEndpointAction, this))
{

}

bool UpdateEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEndpointRequestPrivate
 *
 * @brief  Private implementation for UpdateEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public UpdateEndpointRequest instance.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const SageMakerRequest::Action action, UpdateEndpointRequest * const q)
    : UpdateEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEndpointRequest instance.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const UpdateEndpointRequestPrivate &other, UpdateEndpointRequest * const q)
    : UpdateEndpointPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
