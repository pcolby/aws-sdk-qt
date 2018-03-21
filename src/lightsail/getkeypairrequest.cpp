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

#include "getkeypairrequest.h"
#include "getkeypairrequest_p.h"
#include "getkeypairresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetKeyPairRequest
 *
 * @brief  Implements Lightsail GetKeyPair requests.
 *
 * @see    LightsailClient::getKeyPair
 */

/**
 * @brief  Constructs a new GetKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetKeyPairResponse::GetKeyPairResponse(

/**
 * @brief  Constructs a new GetKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetKeyPairRequest::GetKeyPairRequest(const GetKeyPairRequest &other)
    : LightsailRequest(new GetKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetKeyPairRequest object.
 */
GetKeyPairRequest::GetKeyPairRequest()
    : LightsailRequest(new GetKeyPairRequestPrivate(LightsailRequest::GetKeyPairAction, this))
{

}

bool GetKeyPairRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetKeyPairResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetKeyPairResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetKeyPairRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyPairResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetKeyPairRequestPrivate
 *
 * @brief  Private implementation for GetKeyPairRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetKeyPairRequest instance.
 */
GetKeyPairRequestPrivate::GetKeyPairRequestPrivate(
    const LightsailRequest::Action action, GetKeyPairRequest * const q)
    : GetKeyPairPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetKeyPairRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetKeyPairRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetKeyPairRequest instance.
 */
GetKeyPairRequestPrivate::GetKeyPairRequestPrivate(
    const GetKeyPairRequestPrivate &other, GetKeyPairRequest * const q)
    : GetKeyPairPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
