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

#include "updatesecretrequest.h"
#include "updatesecretrequest_p.h"
#include "updatesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  UpdateSecretRequest
 *
 * @brief  Implements SecretsManager UpdateSecret requests.
 *
 * @see    SecretsManagerClient::updateSecret
 */

/**
 * @brief  Constructs a new UpdateSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSecretRequest::UpdateSecretRequest(const UpdateSecretRequest &other)
    : SecretsManagerRequest(new UpdateSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSecretRequest object.
 */
UpdateSecretRequest::UpdateSecretRequest()
    : SecretsManagerRequest(new UpdateSecretRequestPrivate(SecretsManagerRequest::UpdateSecretAction, this))
{

}

bool UpdateSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecretRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSecretRequestPrivate
 *
 * @brief  Private implementation for UpdateSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public UpdateSecretRequest instance.
 */
UpdateSecretRequestPrivate::UpdateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, UpdateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSecretRequest instance.
 */
UpdateSecretRequestPrivate::UpdateSecretRequestPrivate(
    const UpdateSecretRequestPrivate &other, UpdateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
