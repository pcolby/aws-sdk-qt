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

#include "stopuserimportjobrequest.h"
#include "stopuserimportjobrequest_p.h"
#include "stopuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  StopUserImportJobRequest
 *
 * @brief  Implements CognitoIdentityProvider StopUserImportJob requests.
 *
 * @see    CognitoIdentityProviderClient::stopUserImportJob
 */

/**
 * @brief  Constructs a new StopUserImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopUserImportJobResponse::StopUserImportJobResponse(

/**
 * @brief  Constructs a new StopUserImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopUserImportJobRequest::StopUserImportJobRequest(const StopUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new StopUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopUserImportJobRequest object.
 */
StopUserImportJobRequest::StopUserImportJobRequest()
    : CognitoIdentityProviderRequest(new StopUserImportJobRequestPrivate(CognitoIdentityProviderRequest::StopUserImportJobAction, this))
{

}

bool StopUserImportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopUserImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopUserImportJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * StopUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StopUserImportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopUserImportJobRequestPrivate
 *
 * @brief  Private implementation for StopUserImportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopUserImportJobRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public StopUserImportJobRequest instance.
 */
StopUserImportJobRequestPrivate::StopUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, StopUserImportJobRequest * const q)
    : StopUserImportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopUserImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopUserImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopUserImportJobRequest instance.
 */
StopUserImportJobRequestPrivate::StopUserImportJobRequestPrivate(
    const StopUserImportJobRequestPrivate &other, StopUserImportJobRequest * const q)
    : StopUserImportJobPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
