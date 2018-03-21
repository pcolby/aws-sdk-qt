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

#include "lookupdeveloperidentityrequest.h"
#include "lookupdeveloperidentityrequest_p.h"
#include "lookupdeveloperidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  LookupDeveloperIdentityRequest
 *
 * @brief  Implements CognitoIdentity LookupDeveloperIdentity requests.
 *
 * @see    CognitoIdentityClient::lookupDeveloperIdentity
 */

/**
 * @brief  Constructs a new LookupDeveloperIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
LookupDeveloperIdentityRequest::LookupDeveloperIdentityRequest(const LookupDeveloperIdentityRequest &other)
    : CognitoIdentityRequest(new LookupDeveloperIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new LookupDeveloperIdentityRequest object.
 */
LookupDeveloperIdentityRequest::LookupDeveloperIdentityRequest()
    : CognitoIdentityRequest(new LookupDeveloperIdentityRequestPrivate(CognitoIdentityRequest::LookupDeveloperIdentityAction, this))
{

}

bool LookupDeveloperIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an LookupDeveloperIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An LookupDeveloperIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * LookupDeveloperIdentityRequest::response(QNetworkReply * const reply) const
{
    return new LookupDeveloperIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  LookupDeveloperIdentityRequestPrivate
 *
 * @brief  Private implementation for LookupDeveloperIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupDeveloperIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public LookupDeveloperIdentityRequest instance.
 */
LookupDeveloperIdentityRequestPrivate::LookupDeveloperIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, LookupDeveloperIdentityRequest * const q)
    : LookupDeveloperIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new LookupDeveloperIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the LookupDeveloperIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public LookupDeveloperIdentityRequest instance.
 */
LookupDeveloperIdentityRequestPrivate::LookupDeveloperIdentityRequestPrivate(
    const LookupDeveloperIdentityRequestPrivate &other, LookupDeveloperIdentityRequest * const q)
    : LookupDeveloperIdentityPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
