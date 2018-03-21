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

#include "createservicespecificcredentialrequest.h"
#include "createservicespecificcredentialrequest_p.h"
#include "createservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateServiceSpecificCredentialRequest
 *
 * @brief  Implements IAM CreateServiceSpecificCredential requests.
 *
 * @see    IAMClient::createServiceSpecificCredential
 */

/**
 * @brief  Constructs a new CreateServiceSpecificCredentialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServiceSpecificCredentialResponse::CreateServiceSpecificCredentialResponse(

/**
 * @brief  Constructs a new CreateServiceSpecificCredentialRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateServiceSpecificCredentialRequest::CreateServiceSpecificCredentialRequest(const CreateServiceSpecificCredentialRequest &other)
    : IAMRequest(new CreateServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateServiceSpecificCredentialRequest object.
 */
CreateServiceSpecificCredentialRequest::CreateServiceSpecificCredentialRequest()
    : IAMRequest(new CreateServiceSpecificCredentialRequestPrivate(IAMRequest::CreateServiceSpecificCredentialAction, this))
{

}

bool CreateServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateServiceSpecificCredentialResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateServiceSpecificCredentialResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceSpecificCredentialResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateServiceSpecificCredentialRequestPrivate
 *
 * @brief  Private implementation for CreateServiceSpecificCredentialRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceSpecificCredentialRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateServiceSpecificCredentialRequest instance.
 */
CreateServiceSpecificCredentialRequestPrivate::CreateServiceSpecificCredentialRequestPrivate(
    const IAMRequest::Action action, CreateServiceSpecificCredentialRequest * const q)
    : CreateServiceSpecificCredentialPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceSpecificCredentialRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceSpecificCredentialRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateServiceSpecificCredentialRequest instance.
 */
CreateServiceSpecificCredentialRequestPrivate::CreateServiceSpecificCredentialRequestPrivate(
    const CreateServiceSpecificCredentialRequestPrivate &other, CreateServiceSpecificCredentialRequest * const q)
    : CreateServiceSpecificCredentialPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
