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

#include "getinstanceaccessrequest.h"
#include "getinstanceaccessrequest_p.h"
#include "getinstanceaccessresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  GetInstanceAccessRequest
 *
 * @brief  Implements GameLift GetInstanceAccess requests.
 *
 * @see    GameLiftClient::getInstanceAccess
 */

/**
 * @brief  Constructs a new GetInstanceAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceAccessResponse::GetInstanceAccessResponse(

/**
 * @brief  Constructs a new GetInstanceAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceAccessRequest::GetInstanceAccessRequest(const GetInstanceAccessRequest &other)
    : GameLiftRequest(new GetInstanceAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceAccessRequest object.
 */
GetInstanceAccessRequest::GetInstanceAccessRequest()
    : GameLiftRequest(new GetInstanceAccessRequestPrivate(GameLiftRequest::GetInstanceAccessAction, this))
{

}

bool GetInstanceAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceAccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * GetInstanceAccessRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceAccessRequestPrivate
 *
 * @brief  Private implementation for GetInstanceAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceAccessRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public GetInstanceAccessRequest instance.
 */
GetInstanceAccessRequestPrivate::GetInstanceAccessRequestPrivate(
    const GameLiftRequest::Action action, GetInstanceAccessRequest * const q)
    : GetInstanceAccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceAccessRequest instance.
 */
GetInstanceAccessRequestPrivate::GetInstanceAccessRequestPrivate(
    const GetInstanceAccessRequestPrivate &other, GetInstanceAccessRequest * const q)
    : GetInstanceAccessPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
