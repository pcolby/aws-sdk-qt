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

#include "createconnectionrequest.h"
#include "createconnectionrequest_p.h"
#include "createconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateConnectionRequest
 *
 * @brief  Implements DirectConnect CreateConnection requests.
 *
 * @see    DirectConnectClient::createConnection
 */

/**
 * @brief  Constructs a new CreateConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConnectionResponse::CreateConnectionResponse(

/**
 * @brief  Constructs a new CreateConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConnectionRequest::CreateConnectionRequest(const CreateConnectionRequest &other)
    : DirectConnectRequest(new CreateConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConnectionRequest object.
 */
CreateConnectionRequest::CreateConnectionRequest()
    : DirectConnectRequest(new CreateConnectionRequestPrivate(DirectConnectRequest::CreateConnectionAction, this))
{

}

bool CreateConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConnectionRequestPrivate
 *
 * @brief  Private implementation for CreateConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConnectionRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateConnectionRequest instance.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const DirectConnectRequest::Action action, CreateConnectionRequest * const q)
    : CreateConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConnectionRequest instance.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const CreateConnectionRequestPrivate &other, CreateConnectionRequest * const q)
    : CreateConnectionPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
