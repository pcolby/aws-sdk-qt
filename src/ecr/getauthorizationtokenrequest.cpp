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

#include "getauthorizationtokenrequest.h"
#include "getauthorizationtokenrequest_p.h"
#include "getauthorizationtokenresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  GetAuthorizationTokenRequest
 *
 * @brief  Implements ECR GetAuthorizationToken requests.
 *
 * @see    ECRClient::getAuthorizationToken
 */

/**
 * @brief  Constructs a new GetAuthorizationTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAuthorizationTokenResponse::GetAuthorizationTokenResponse(

/**
 * @brief  Constructs a new GetAuthorizationTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAuthorizationTokenRequest::GetAuthorizationTokenRequest(const GetAuthorizationTokenRequest &other)
    : ECRRequest(new GetAuthorizationTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAuthorizationTokenRequest object.
 */
GetAuthorizationTokenRequest::GetAuthorizationTokenRequest()
    : ECRRequest(new GetAuthorizationTokenRequestPrivate(ECRRequest::GetAuthorizationTokenAction, this))
{

}

bool GetAuthorizationTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAuthorizationTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAuthorizationTokenResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * GetAuthorizationTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizationTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAuthorizationTokenRequestPrivate
 *
 * @brief  Private implementation for GetAuthorizationTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizationTokenRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public GetAuthorizationTokenRequest instance.
 */
GetAuthorizationTokenRequestPrivate::GetAuthorizationTokenRequestPrivate(
    const ECRRequest::Action action, GetAuthorizationTokenRequest * const q)
    : GetAuthorizationTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizationTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizationTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAuthorizationTokenRequest instance.
 */
GetAuthorizationTokenRequestPrivate::GetAuthorizationTokenRequestPrivate(
    const GetAuthorizationTokenRequestPrivate &other, GetAuthorizationTokenRequest * const q)
    : GetAuthorizationTokenPrivate(other, q)
{

}
