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

#include "createsecretrequest.h"
#include "createsecretrequest_p.h"
#include "createsecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  CreateSecretRequest
 *
 * @brief  Implements SecretsManager CreateSecret requests.
 *
 * @see    SecretsManagerClient::createSecret
 */

/**
 * @brief  Constructs a new CreateSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSecretRequest::CreateSecretRequest(const CreateSecretRequest &other)
    : SecretsManagerRequest(new CreateSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSecretRequest object.
 */
CreateSecretRequest::CreateSecretRequest()
    : SecretsManagerRequest(new CreateSecretRequestPrivate(SecretsManagerRequest::CreateSecretAction, this))
{

}

bool CreateSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSecretRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSecretRequestPrivate
 *
 * @brief  Private implementation for CreateSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public CreateSecretRequest instance.
 */
CreateSecretRequestPrivate::CreateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, CreateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSecretRequest instance.
 */
CreateSecretRequestPrivate::CreateSecretRequestPrivate(
    const CreateSecretRequestPrivate &other, CreateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
