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

#include "getregionsrequest.h"
#include "getregionsrequest_p.h"
#include "getregionsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetRegionsRequest
 *
 * @brief  Implements Lightsail GetRegions requests.
 *
 * @see    LightsailClient::getRegions
 */

/**
 * @brief  Constructs a new GetRegionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRegionsRequest::GetRegionsRequest(const GetRegionsRequest &other)
    : LightsailRequest(new GetRegionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRegionsRequest object.
 */
GetRegionsRequest::GetRegionsRequest()
    : LightsailRequest(new GetRegionsRequestPrivate(LightsailRequest::GetRegionsAction, this))
{

}

bool GetRegionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRegionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRegionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetRegionsRequest::response(QNetworkReply * const reply) const
{
    return new GetRegionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRegionsRequestPrivate
 *
 * @brief  Private implementation for GetRegionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegionsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetRegionsRequest instance.
 */
GetRegionsRequestPrivate::GetRegionsRequestPrivate(
    const LightsailRequest::Action action, GetRegionsRequest * const q)
    : GetRegionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRegionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRegionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRegionsRequest instance.
 */
GetRegionsRequestPrivate::GetRegionsRequestPrivate(
    const GetRegionsRequestPrivate &other, GetRegionsRequest * const q)
    : GetRegionsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
