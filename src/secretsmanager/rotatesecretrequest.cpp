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

#include "rotatesecretrequest.h"
#include "rotatesecretrequest_p.h"
#include "rotatesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  RotateSecretRequest
 *
 * @brief  Implements SecretsManager RotateSecret requests.
 *
 * @see    SecretsManagerClient::rotateSecret
 */

/**
 * @brief  Constructs a new RotateSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RotateSecretRequest::RotateSecretRequest(const RotateSecretRequest &other)
    : SecretsManagerRequest(new RotateSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RotateSecretRequest object.
 */
RotateSecretRequest::RotateSecretRequest()
    : SecretsManagerRequest(new RotateSecretRequestPrivate(SecretsManagerRequest::RotateSecretAction, this))
{

}

bool RotateSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RotateSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RotateSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * RotateSecretRequest::response(QNetworkReply * const reply) const
{
    return new RotateSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RotateSecretRequestPrivate
 *
 * @brief  Private implementation for RotateSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RotateSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public RotateSecretRequest instance.
 */
RotateSecretRequestPrivate::RotateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, RotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RotateSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RotateSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RotateSecretRequest instance.
 */
RotateSecretRequestPrivate::RotateSecretRequestPrivate(
    const RotateSecretRequestPrivate &other, RotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
