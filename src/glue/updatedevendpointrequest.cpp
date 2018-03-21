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

#include "updatedevendpointrequest.h"
#include "updatedevendpointrequest_p.h"
#include "updatedevendpointresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  UpdateDevEndpointRequest
 *
 * @brief  Implements Glue UpdateDevEndpoint requests.
 *
 * @see    GlueClient::updateDevEndpoint
 */

/**
 * @brief  Constructs a new UpdateDevEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDevEndpointResponse::UpdateDevEndpointResponse(

/**
 * @brief  Constructs a new UpdateDevEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest(const UpdateDevEndpointRequest &other)
    : GlueRequest(new UpdateDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDevEndpointRequest object.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest()
    : GlueRequest(new UpdateDevEndpointRequestPrivate(GlueRequest::UpdateDevEndpointAction, this))
{

}

bool UpdateDevEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDevEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDevEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdateDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDevEndpointRequestPrivate
 *
 * @brief  Private implementation for UpdateDevEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDevEndpointRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateDevEndpointRequest instance.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const GlueRequest::Action action, UpdateDevEndpointRequest * const q)
    : UpdateDevEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDevEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDevEndpointRequest instance.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const UpdateDevEndpointRequestPrivate &other, UpdateDevEndpointRequest * const q)
    : UpdateDevEndpointPrivate(other, q)
{

}
