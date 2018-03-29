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

#include "deletedevendpointrequest.h"
#include "deletedevendpointrequest_p.h"
#include "deletedevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  DeleteDevEndpointRequest
 *
 * @brief  Implements Glue DeleteDevEndpoint requests.
 *
 * @see    GlueClient::deleteDevEndpoint
 */

/**
 * @brief  Constructs a new DeleteDevEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDevEndpointRequest::DeleteDevEndpointRequest(const DeleteDevEndpointRequest &other)
    : GlueRequest(new DeleteDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDevEndpointRequest object.
 */
DeleteDevEndpointRequest::DeleteDevEndpointRequest()
    : GlueRequest(new DeleteDevEndpointRequestPrivate(GlueRequest::DeleteDevEndpointAction, this))
{

}

bool DeleteDevEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDevEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDevEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDevEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDevEndpointRequestPrivate
 *
 * @brief  Private implementation for DeleteDevEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDevEndpointRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteDevEndpointRequest instance.
 */
DeleteDevEndpointRequestPrivate::DeleteDevEndpointRequestPrivate(
    const GlueRequest::Action action, DeleteDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDevEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDevEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDevEndpointRequest instance.
 */
DeleteDevEndpointRequestPrivate::DeleteDevEndpointRequestPrivate(
    const DeleteDevEndpointRequestPrivate &other, DeleteDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
