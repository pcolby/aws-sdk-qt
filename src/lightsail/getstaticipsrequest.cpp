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

#include "getstaticipsrequest.h"
#include "getstaticipsrequest_p.h"
#include "getstaticipsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetStaticIpsRequest
 *
 * @brief  Implements Lightsail GetStaticIps requests.
 *
 * @see    LightsailClient::getStaticIps
 */

/**
 * @brief  Constructs a new GetStaticIpsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStaticIpsResponse::GetStaticIpsResponse(

/**
 * @brief  Constructs a new GetStaticIpsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStaticIpsRequest::GetStaticIpsRequest(const GetStaticIpsRequest &other)
    : LightsailRequest(new GetStaticIpsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetStaticIpsRequest object.
 */
GetStaticIpsRequest::GetStaticIpsRequest()
    : LightsailRequest(new GetStaticIpsRequestPrivate(LightsailRequest::GetStaticIpsAction, this))
{

}

bool GetStaticIpsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetStaticIpsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStaticIpsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetStaticIpsRequest::response(QNetworkReply * const reply) const
{
    return new GetStaticIpsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetStaticIpsRequestPrivate
 *
 * @brief  Private implementation for GetStaticIpsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetStaticIpsRequest instance.
 */
GetStaticIpsRequestPrivate::GetStaticIpsRequestPrivate(
    const LightsailRequest::Action action, GetStaticIpsRequest * const q)
    : GetStaticIpsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetStaticIpsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStaticIpsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStaticIpsRequest instance.
 */
GetStaticIpsRequestPrivate::GetStaticIpsRequestPrivate(
    const GetStaticIpsRequestPrivate &other, GetStaticIpsRequest * const q)
    : GetStaticIpsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
