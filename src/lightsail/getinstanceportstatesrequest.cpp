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

#include "getinstanceportstatesrequest.h"
#include "getinstanceportstatesrequest_p.h"
#include "getinstanceportstatesresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstancePortStatesRequest
 *
 * @brief  Implements Lightsail GetInstancePortStates requests.
 *
 * @see    LightsailClient::getInstancePortStates
 */

/**
 * @brief  Constructs a new GetInstancePortStatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstancePortStatesRequest::GetInstancePortStatesRequest(const GetInstancePortStatesRequest &other)
    : LightsailRequest(new GetInstancePortStatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstancePortStatesRequest object.
 */
GetInstancePortStatesRequest::GetInstancePortStatesRequest()
    : LightsailRequest(new GetInstancePortStatesRequestPrivate(LightsailRequest::GetInstancePortStatesAction, this))
{

}

bool GetInstancePortStatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstancePortStatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstancePortStatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstancePortStatesRequest::response(QNetworkReply * const reply) const
{
    return new GetInstancePortStatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstancePortStatesRequestPrivate
 *
 * @brief  Private implementation for GetInstancePortStatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancePortStatesRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstancePortStatesRequest instance.
 */
GetInstancePortStatesRequestPrivate::GetInstancePortStatesRequestPrivate(
    const LightsailRequest::Action action, GetInstancePortStatesRequest * const q)
    : GetInstancePortStatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancePortStatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstancePortStatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstancePortStatesRequest instance.
 */
GetInstancePortStatesRequestPrivate::GetInstancePortStatesRequestPrivate(
    const GetInstancePortStatesRequestPrivate &other, GetInstancePortStatesRequest * const q)
    : GetInstancePortStatesPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
