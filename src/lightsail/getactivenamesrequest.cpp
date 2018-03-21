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

#include "getactivenamesrequest.h"
#include "getactivenamesrequest_p.h"
#include "getactivenamesresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetActiveNamesRequest
 *
 * @brief  Implements Lightsail GetActiveNames requests.
 *
 * @see    LightsailClient::getActiveNames
 */

/**
 * @brief  Constructs a new GetActiveNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetActiveNamesResponse::GetActiveNamesResponse(

/**
 * @brief  Constructs a new GetActiveNamesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetActiveNamesRequest::GetActiveNamesRequest(const GetActiveNamesRequest &other)
    : LightsailRequest(new GetActiveNamesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetActiveNamesRequest object.
 */
GetActiveNamesRequest::GetActiveNamesRequest()
    : LightsailRequest(new GetActiveNamesRequestPrivate(LightsailRequest::GetActiveNamesAction, this))
{

}

bool GetActiveNamesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetActiveNamesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetActiveNamesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetActiveNamesRequest::response(QNetworkReply * const reply) const
{
    return new GetActiveNamesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetActiveNamesRequestPrivate
 *
 * @brief  Private implementation for GetActiveNamesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetActiveNamesRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetActiveNamesRequest instance.
 */
GetActiveNamesRequestPrivate::GetActiveNamesRequestPrivate(
    const LightsailRequest::Action action, GetActiveNamesRequest * const q)
    : GetActiveNamesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetActiveNamesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetActiveNamesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetActiveNamesRequest instance.
 */
GetActiveNamesRequestPrivate::GetActiveNamesRequestPrivate(
    const GetActiveNamesRequestPrivate &other, GetActiveNamesRequest * const q)
    : GetActiveNamesPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
