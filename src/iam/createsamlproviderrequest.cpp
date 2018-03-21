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

#include "createsamlproviderrequest.h"
#include "createsamlproviderrequest_p.h"
#include "createsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateSAMLProviderRequest
 *
 * @brief  Implements IAM CreateSAMLProvider requests.
 *
 * @see    IAMClient::createSAMLProvider
 */

/**
 * @brief  Constructs a new CreateSAMLProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSAMLProviderResponse::CreateSAMLProviderResponse(

/**
 * @brief  Constructs a new CreateSAMLProviderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSAMLProviderRequest::CreateSAMLProviderRequest(const CreateSAMLProviderRequest &other)
    : IAMRequest(new CreateSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSAMLProviderRequest object.
 */
CreateSAMLProviderRequest::CreateSAMLProviderRequest()
    : IAMRequest(new CreateSAMLProviderRequestPrivate(IAMRequest::CreateSAMLProviderAction, this))
{

}

bool CreateSAMLProviderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSAMLProviderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSAMLProviderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateSAMLProviderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSAMLProviderRequestPrivate
 *
 * @brief  Private implementation for CreateSAMLProviderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSAMLProviderRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateSAMLProviderRequest instance.
 */
CreateSAMLProviderRequestPrivate::CreateSAMLProviderRequestPrivate(
    const IAMRequest::Action action, CreateSAMLProviderRequest * const q)
    : CreateSAMLProviderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSAMLProviderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSAMLProviderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSAMLProviderRequest instance.
 */
CreateSAMLProviderRequestPrivate::CreateSAMLProviderRequestPrivate(
    const CreateSAMLProviderRequestPrivate &other, CreateSAMLProviderRequest * const q)
    : CreateSAMLProviderPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
