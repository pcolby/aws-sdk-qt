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

#include "getsessiontokenrequest.h"
#include "getsessiontokenrequest_p.h"
#include "getsessiontokenresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/**
 * @class  GetSessionTokenRequest
 *
 * @brief  Implements STS GetSessionToken requests.
 *
 * @see    STSClient::getSessionToken
 */

/**
 * @brief  Constructs a new GetSessionTokenRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSessionTokenRequest::GetSessionTokenRequest(const GetSessionTokenRequest &other)
    : STSRequest(new GetSessionTokenRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSessionTokenRequest object.
 */
GetSessionTokenRequest::GetSessionTokenRequest()
    : STSRequest(new GetSessionTokenRequestPrivate(STSRequest::GetSessionTokenAction, this))
{

}

bool GetSessionTokenRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSessionTokenResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSessionTokenResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  STSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSessionTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetSessionTokenResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSessionTokenRequestPrivate
 *
 * @brief  Private implementation for GetSessionTokenRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSessionTokenRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public GetSessionTokenRequest instance.
 */
GetSessionTokenRequestPrivate::GetSessionTokenRequestPrivate(
    const STSRequest::Action action, GetSessionTokenRequest * const q)
    : GetSessionTokenPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSessionTokenRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSessionTokenRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSessionTokenRequest instance.
 */
GetSessionTokenRequestPrivate::GetSessionTokenRequestPrivate(
    const GetSessionTokenRequestPrivate &other, GetSessionTokenRequest * const q)
    : GetSessionTokenPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
