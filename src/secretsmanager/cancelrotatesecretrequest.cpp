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

#include "cancelrotatesecretrequest.h"
#include "cancelrotatesecretrequest_p.h"
#include "cancelrotatesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  CancelRotateSecretRequest
 *
 * @brief  Implements SecretsManager CancelRotateSecret requests.
 *
 * @see    SecretsManagerClient::cancelRotateSecret
 */

/**
 * @brief  Constructs a new CancelRotateSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelRotateSecretRequest::CancelRotateSecretRequest(const CancelRotateSecretRequest &other)
    : SecretsManagerRequest(new CancelRotateSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelRotateSecretRequest object.
 */
CancelRotateSecretRequest::CancelRotateSecretRequest()
    : SecretsManagerRequest(new CancelRotateSecretRequestPrivate(SecretsManagerRequest::CancelRotateSecretAction, this))
{

}

bool CancelRotateSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelRotateSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelRotateSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelRotateSecretRequest::response(QNetworkReply * const reply) const
{
    return new CancelRotateSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelRotateSecretRequestPrivate
 *
 * @brief  Private implementation for CancelRotateSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelRotateSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public CancelRotateSecretRequest instance.
 */
CancelRotateSecretRequestPrivate::CancelRotateSecretRequestPrivate(
    const SecretsManagerRequest::Action action, CancelRotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelRotateSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelRotateSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelRotateSecretRequest instance.
 */
CancelRotateSecretRequestPrivate::CancelRotateSecretRequestPrivate(
    const CancelRotateSecretRequestPrivate &other, CancelRotateSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
