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

#include "createinterconnectrequest.h"
#include "createinterconnectrequest_p.h"
#include "createinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  CreateInterconnectRequest
 *
 * @brief  Implements DirectConnect CreateInterconnect requests.
 *
 * @see    DirectConnectClient::createInterconnect
 */

/**
 * @brief  Constructs a new CreateInterconnectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInterconnectRequest::CreateInterconnectRequest(const CreateInterconnectRequest &other)
    : DirectConnectRequest(new CreateInterconnectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateInterconnectRequest object.
 */
CreateInterconnectRequest::CreateInterconnectRequest()
    : DirectConnectRequest(new CreateInterconnectRequestPrivate(DirectConnectRequest::CreateInterconnectAction, this))
{

}

bool CreateInterconnectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateInterconnectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInterconnectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new CreateInterconnectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateInterconnectRequestPrivate
 *
 * @brief  Private implementation for CreateInterconnectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInterconnectRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateInterconnectRequest instance.
 */
CreateInterconnectRequestPrivate::CreateInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, CreateInterconnectRequest * const q)
    : CreateInterconnectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateInterconnectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInterconnectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInterconnectRequest instance.
 */
CreateInterconnectRequestPrivate::CreateInterconnectRequestPrivate(
    const CreateInterconnectRequestPrivate &other, CreateInterconnectRequest * const q)
    : CreateInterconnectPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
