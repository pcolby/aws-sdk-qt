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

#include "deleteendpointconfigrequest.h"
#include "deleteendpointconfigrequest_p.h"
#include "deleteendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  DeleteEndpointConfigRequest
 *
 * @brief  Implements SageMaker DeleteEndpointConfig requests.
 *
 * @see    SageMakerClient::deleteEndpointConfig
 */

/**
 * @brief  Constructs a new DeleteEndpointConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEndpointConfigResponse::DeleteEndpointConfigResponse(

/**
 * @brief  Constructs a new DeleteEndpointConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest(const DeleteEndpointConfigRequest &other)
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEndpointConfigRequest object.
 */
DeleteEndpointConfigRequest::DeleteEndpointConfigRequest()
    : SageMakerRequest(new DeleteEndpointConfigRequestPrivate(SageMakerRequest::DeleteEndpointConfigAction, this))
{

}

bool DeleteEndpointConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEndpointConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEndpointConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * DeleteEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEndpointConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEndpointConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteEndpointConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteEndpointConfigRequest instance.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteEndpointConfigRequest * const q)
    : DeleteEndpointConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEndpointConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEndpointConfigRequest instance.
 */
DeleteEndpointConfigRequestPrivate::DeleteEndpointConfigRequestPrivate(
    const DeleteEndpointConfigRequestPrivate &other, DeleteEndpointConfigRequest * const q)
    : DeleteEndpointConfigPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
