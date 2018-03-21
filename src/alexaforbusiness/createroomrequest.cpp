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

#include "createroomrequest.h"
#include "createroomrequest_p.h"
#include "createroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  CreateRoomRequest
 *
 * @brief  Implements AlexaForBusiness CreateRoom requests.
 *
 * @see    AlexaForBusinessClient::createRoom
 */

/**
 * @brief  Constructs a new CreateRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRoomRequest::CreateRoomRequest(const CreateRoomRequest &other)
    : AlexaForBusinessRequest(new CreateRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRoomRequest object.
 */
CreateRoomRequest::CreateRoomRequest()
    : AlexaForBusinessRequest(new CreateRoomRequestPrivate(AlexaForBusinessRequest::CreateRoomAction, this))
{

}

bool CreateRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * CreateRoomRequest::response(QNetworkReply * const reply) const
{
    return new CreateRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRoomRequestPrivate
 *
 * @brief  Private implementation for CreateRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public CreateRoomRequest instance.
 */
CreateRoomRequestPrivate::CreateRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateRoomRequest * const q)
    : CreateRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRoomRequest instance.
 */
CreateRoomRequestPrivate::CreateRoomRequestPrivate(
    const CreateRoomRequestPrivate &other, CreateRoomRequest * const q)
    : CreateRoomPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
