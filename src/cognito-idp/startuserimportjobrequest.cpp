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

#include "startuserimportjobrequest.h"
#include "startuserimportjobrequest_p.h"
#include "startuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  StartUserImportJobRequest
 *
 * @brief  Implements CognitoIdentityProvider StartUserImportJob requests.
 *
 * @see    CognitoIdentityProviderClient::startUserImportJob
 */

/**
 * @brief  Constructs a new StartUserImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartUserImportJobResponse::StartUserImportJobResponse(

/**
 * @brief  Constructs a new StartUserImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartUserImportJobRequest::StartUserImportJobRequest(const StartUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new StartUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartUserImportJobRequest object.
 */
StartUserImportJobRequest::StartUserImportJobRequest()
    : CognitoIdentityProviderRequest(new StartUserImportJobRequestPrivate(CognitoIdentityProviderRequest::StartUserImportJobAction, this))
{

}

bool StartUserImportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartUserImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartUserImportJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * StartUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartUserImportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartUserImportJobRequestPrivate
 *
 * @brief  Private implementation for StartUserImportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartUserImportJobRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public StartUserImportJobRequest instance.
 */
StartUserImportJobRequestPrivate::StartUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, StartUserImportJobRequest * const q)
    : StartUserImportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartUserImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartUserImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartUserImportJobRequest instance.
 */
StartUserImportJobRequestPrivate::StartUserImportJobRequestPrivate(
    const StartUserImportJobRequestPrivate &other, StartUserImportJobRequest * const q)
    : StartUserImportJobPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
