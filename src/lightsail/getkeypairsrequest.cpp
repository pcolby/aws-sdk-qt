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

#include "getkeypairsrequest.h"
#include "getkeypairsrequest_p.h"
#include "getkeypairsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetKeyPairsRequest
 *
 * @brief  Implements Lightsail GetKeyPairs requests.
 *
 * @see    LightsailClient::getKeyPairs
 */

/**
 * @brief  Constructs a new GetKeyPairsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyPairsResponse::GetKeyPairsResponse(

/**
 * @brief  Constructs a new GetKeyPairsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetKeyPairsRequest::GetKeyPairsRequest(const GetKeyPairsRequest &other)
    : LightsailRequest(new GetKeyPairsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetKeyPairsRequest object.
 */
GetKeyPairsRequest::GetKeyPairsRequest()
    : LightsailRequest(new GetKeyPairsRequestPrivate(LightsailRequest::GetKeyPairsAction, this))
{

}

bool GetKeyPairsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetKeyPairsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetKeyPairsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetKeyPairsRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyPairsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetKeyPairsRequestPrivate
 *
 * @brief  Private implementation for GetKeyPairsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetKeyPairsRequest instance.
 */
GetKeyPairsRequestPrivate::GetKeyPairsRequestPrivate(
    const LightsailRequest::Action action, GetKeyPairsRequest * const q)
    : GetKeyPairsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetKeyPairsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetKeyPairsRequest instance.
 */
GetKeyPairsRequestPrivate::GetKeyPairsRequestPrivate(
    const GetKeyPairsRequestPrivate &other, GetKeyPairsRequest * const q)
    : GetKeyPairsPrivate(other, q)
{

}
