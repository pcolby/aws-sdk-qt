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

#include "createlagrequest.h"
#include "createlagrequest_p.h"
#include "createlagresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateLagRequest
 *
 * @brief  Implements DirectConnect CreateLag requests.
 *
 * @see    DirectConnectClient::createLag
 */

/**
 * @brief  Constructs a new CreateLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLagRequest::CreateLagRequest(const CreateLagRequest &other)
    : DirectConnectRequest(new CreateLagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLagRequest object.
 */
CreateLagRequest::CreateLagRequest()
    : DirectConnectRequest(new CreateLagRequestPrivate(DirectConnectRequest::CreateLagAction, this))
{

}

bool CreateLagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateLagRequest::response(QNetworkReply * const reply) const
{
    return new CreateLagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLagRequestPrivate
 *
 * @brief  Private implementation for CreateLagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateLagRequest instance.
 */
CreateLagRequestPrivate::CreateLagRequestPrivate(
    const DirectConnectRequest::Action action, CreateLagRequest * const q)
    : CreateLagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLagRequest instance.
 */
CreateLagRequestPrivate::CreateLagRequestPrivate(
    const CreateLagRequestPrivate &other, CreateLagRequest * const q)
    : CreateLagPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
