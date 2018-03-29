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

#include "getidentitypoolconfigurationrequest.h"
#include "getidentitypoolconfigurationrequest_p.h"
#include "getidentitypoolconfigurationresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  GetIdentityPoolConfigurationRequest
 *
 * @brief  Implements CognitoSync GetIdentityPoolConfiguration requests.
 *
 * @see    CognitoSyncClient::getIdentityPoolConfiguration
 */

/**
 * @brief  Constructs a new GetIdentityPoolConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIdentityPoolConfigurationRequest::GetIdentityPoolConfigurationRequest(const GetIdentityPoolConfigurationRequest &other)
    : CognitoSyncRequest(new GetIdentityPoolConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIdentityPoolConfigurationRequest object.
 */
GetIdentityPoolConfigurationRequest::GetIdentityPoolConfigurationRequest()
    : CognitoSyncRequest(new GetIdentityPoolConfigurationRequestPrivate(CognitoSyncRequest::GetIdentityPoolConfigurationAction, this))
{

}

bool GetIdentityPoolConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIdentityPoolConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIdentityPoolConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityPoolConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityPoolConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIdentityPoolConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetIdentityPoolConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolConfigurationRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public GetIdentityPoolConfigurationRequest instance.
 */
GetIdentityPoolConfigurationRequestPrivate::GetIdentityPoolConfigurationRequestPrivate(
    const CognitoSyncRequest::Action action, GetIdentityPoolConfigurationRequest * const q)
    : GetIdentityPoolConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityPoolConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIdentityPoolConfigurationRequest instance.
 */
GetIdentityPoolConfigurationRequestPrivate::GetIdentityPoolConfigurationRequestPrivate(
    const GetIdentityPoolConfigurationRequestPrivate &other, GetIdentityPoolConfigurationRequest * const q)
    : GetIdentityPoolConfigurationPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
