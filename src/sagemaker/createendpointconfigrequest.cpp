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

#include "createendpointconfigrequest.h"
#include "createendpointconfigrequest_p.h"
#include "createendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  CreateEndpointConfigRequest
 *
 * @brief  Implements SageMaker CreateEndpointConfig requests.
 *
 * @see    SageMakerClient::createEndpointConfig
 */

/**
 * @brief  Constructs a new CreateEndpointConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest(const CreateEndpointConfigRequest &other)
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEndpointConfigRequest object.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest()
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(SageMakerRequest::CreateEndpointConfigAction, this))
{

}

bool CreateEndpointConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEndpointConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEndpointConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * CreateEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEndpointConfigRequestPrivate
 *
 * @brief  Private implementation for CreateEndpointConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEndpointConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreateEndpointConfigRequest instance.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateEndpointConfigRequest * const q)
    : CreateEndpointConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEndpointConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEndpointConfigRequest instance.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const CreateEndpointConfigRequestPrivate &other, CreateEndpointConfigRequest * const q)
    : CreateEndpointConfigPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
