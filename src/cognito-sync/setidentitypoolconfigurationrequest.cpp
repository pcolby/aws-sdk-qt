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

#include "setidentitypoolconfigurationrequest.h"
#include "setidentitypoolconfigurationrequest_p.h"
#include "setidentitypoolconfigurationresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  SetIdentityPoolConfigurationRequest
 *
 * @brief  Implements CognitoSync SetIdentityPoolConfiguration requests.
 *
 * @see    CognitoSyncClient::setIdentityPoolConfiguration
 */

/**
 * @brief  Constructs a new SetIdentityPoolConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityPoolConfigurationResponse::SetIdentityPoolConfigurationResponse(

/**
 * @brief  Constructs a new SetIdentityPoolConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetIdentityPoolConfigurationRequest::SetIdentityPoolConfigurationRequest(const SetIdentityPoolConfigurationRequest &other)
    : CognitoSyncRequest(new SetIdentityPoolConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetIdentityPoolConfigurationRequest object.
 */
SetIdentityPoolConfigurationRequest::SetIdentityPoolConfigurationRequest()
    : CognitoSyncRequest(new SetIdentityPoolConfigurationRequestPrivate(CognitoSyncRequest::SetIdentityPoolConfigurationAction, this))
{

}

bool SetIdentityPoolConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetIdentityPoolConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetIdentityPoolConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * SetIdentityPoolConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityPoolConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetIdentityPoolConfigurationRequestPrivate
 *
 * @brief  Private implementation for SetIdentityPoolConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolConfigurationRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public SetIdentityPoolConfigurationRequest instance.
 */
SetIdentityPoolConfigurationRequestPrivate::SetIdentityPoolConfigurationRequestPrivate(
    const CognitoSyncRequest::Action action, SetIdentityPoolConfigurationRequest * const q)
    : SetIdentityPoolConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityPoolConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityPoolConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetIdentityPoolConfigurationRequest instance.
 */
SetIdentityPoolConfigurationRequestPrivate::SetIdentityPoolConfigurationRequestPrivate(
    const SetIdentityPoolConfigurationRequestPrivate &other, SetIdentityPoolConfigurationRequest * const q)
    : SetIdentityPoolConfigurationPrivate(other, q)
{

}
