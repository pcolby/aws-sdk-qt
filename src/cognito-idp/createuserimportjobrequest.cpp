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

#include "createuserimportjobrequest.h"
#include "createuserimportjobrequest_p.h"
#include "createuserimportjobresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserImportJobRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateUserImportJob requests.
 *
 * @see    CognitoIdentityProviderClient::createUserImportJob
 */

/**
 * @brief  Constructs a new CreateUserImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserImportJobResponse::CreateUserImportJobResponse(

/**
 * @brief  Constructs a new CreateUserImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserImportJobRequest::CreateUserImportJobRequest(const CreateUserImportJobRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserImportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserImportJobRequest object.
 */
CreateUserImportJobRequest::CreateUserImportJobRequest()
    : CognitoIdentityProviderRequest(new CreateUserImportJobRequestPrivate(CognitoIdentityProviderRequest::CreateUserImportJobAction, this))
{

}

bool CreateUserImportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserImportJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * CreateUserImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserImportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserImportJobRequestPrivate
 *
 * @brief  Private implementation for CreateUserImportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserImportJobRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateUserImportJobRequest instance.
 */
CreateUserImportJobRequestPrivate::CreateUserImportJobRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserImportJobRequest * const q)
    : CreateUserImportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserImportJobRequest instance.
 */
CreateUserImportJobRequestPrivate::CreateUserImportJobRequestPrivate(
    const CreateUserImportJobRequestPrivate &other, CreateUserImportJobRequest * const q)
    : CreateUserImportJobPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
