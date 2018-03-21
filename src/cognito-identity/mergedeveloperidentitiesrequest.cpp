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

#include "mergedeveloperidentitiesrequest.h"
#include "mergedeveloperidentitiesrequest_p.h"
#include "mergedeveloperidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  MergeDeveloperIdentitiesRequest
 *
 * @brief  Implements CognitoIdentity MergeDeveloperIdentities requests.
 *
 * @see    CognitoIdentityClient::mergeDeveloperIdentities
 */

/**
 * @brief  Constructs a new MergeDeveloperIdentitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest(const MergeDeveloperIdentitiesRequest &other)
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MergeDeveloperIdentitiesRequest object.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest()
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(CognitoIdentityRequest::MergeDeveloperIdentitiesAction, this))
{

}

bool MergeDeveloperIdentitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MergeDeveloperIdentitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MergeDeveloperIdentitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * MergeDeveloperIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new MergeDeveloperIdentitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MergeDeveloperIdentitiesRequestPrivate
 *
 * @brief  Private implementation for MergeDeveloperIdentitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergeDeveloperIdentitiesRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public MergeDeveloperIdentitiesRequest instance.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, MergeDeveloperIdentitiesRequest * const q)
    : MergeDeveloperIdentitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MergeDeveloperIdentitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MergeDeveloperIdentitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MergeDeveloperIdentitiesRequest instance.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const MergeDeveloperIdentitiesRequestPrivate &other, MergeDeveloperIdentitiesRequest * const q)
    : MergeDeveloperIdentitiesPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS
