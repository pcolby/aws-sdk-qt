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

#include "updateconnectionrequest.h"
#include "updateconnectionrequest_p.h"
#include "updateconnectionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  UpdateConnectionRequest
 *
 * @brief  Implements Glue UpdateConnection requests.
 *
 * @see    GlueClient::updateConnection
 */

/**
 * @brief  Constructs a new UpdateConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConnectionRequest::UpdateConnectionRequest(const UpdateConnectionRequest &other)
    : GlueRequest(new UpdateConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConnectionRequest object.
 */
UpdateConnectionRequest::UpdateConnectionRequest()
    : GlueRequest(new UpdateConnectionRequestPrivate(GlueRequest::UpdateConnectionAction, this))
{

}

bool UpdateConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConnectionRequestPrivate
 *
 * @brief  Private implementation for UpdateConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateConnectionRequest instance.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const GlueRequest::Action action, UpdateConnectionRequest * const q)
    : UpdateConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConnectionRequest instance.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const UpdateConnectionRequestPrivate &other, UpdateConnectionRequest * const q)
    : UpdateConnectionPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
