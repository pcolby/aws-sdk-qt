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

#include "getfederationtokenrequest.h"
#include "getfederationtokenrequest_p.h"
#include "getfederationtokenresponse.h"
#include "stsrequest_p.h"

namespace AWS {
namespace STS {

/**
 * @class  GetFederationTokenRequest
 *
 * @brief  Implements STS GetFederationToken requests.
 *
 * @see    STSClient::getFederationToken
 */

/**
 * @brief  Constructs a new GetFederationTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFederationTokenRequest::GetFederationTokenRequest(const GetFederationTokenRequest &other)
    : STSRequest(new GetFederationTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFederationTokenRequest object.
 */
GetFederationTokenRequest::GetFederationTokenRequest()
    : STSRequest(new GetFederationTokenRequestPrivate(STSRequest::GetFederationTokenAction, this))
{

}

bool GetFederationTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFederationTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFederationTokenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  STSClient::send
 */
AwsAbstractResponse * GetFederationTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetFederationTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFederationTokenRequestPrivate
 *
 * @brief  Private implementation for GetFederationTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFederationTokenRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public GetFederationTokenRequest instance.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const STSRequest::Action action, GetFederationTokenRequest * const q)
    : GetFederationTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFederationTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFederationTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFederationTokenRequest instance.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const GetFederationTokenRequestPrivate &other, GetFederationTokenRequest * const q)
    : GetFederationTokenPrivate(other, q)
{

}

} // namespace STS
} // namespace AWS
