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

#include "getdisksrequest.h"
#include "getdisksrequest_p.h"
#include "getdisksresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDisksRequest
 *
 * @brief  Implements Lightsail GetDisks requests.
 *
 * @see    LightsailClient::getDisks
 */

/**
 * @brief  Constructs a new GetDisksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDisksResponse::GetDisksResponse(

/**
 * @brief  Constructs a new GetDisksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDisksRequest::GetDisksRequest(const GetDisksRequest &other)
    : LightsailRequest(new GetDisksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDisksRequest object.
 */
GetDisksRequest::GetDisksRequest()
    : LightsailRequest(new GetDisksRequestPrivate(LightsailRequest::GetDisksAction, this))
{

}

bool GetDisksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDisksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDisksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetDisksRequest::response(QNetworkReply * const reply) const
{
    return new GetDisksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDisksRequestPrivate
 *
 * @brief  Private implementation for GetDisksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDisksRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetDisksRequest instance.
 */
GetDisksRequestPrivate::GetDisksRequestPrivate(
    const LightsailRequest::Action action, GetDisksRequest * const q)
    : GetDisksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDisksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDisksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDisksRequest instance.
 */
GetDisksRequestPrivate::GetDisksRequestPrivate(
    const GetDisksRequestPrivate &other, GetDisksRequest * const q)
    : GetDisksPrivate(other, q)
{

}
