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

#include "putsecretvaluerequest.h"
#include "putsecretvaluerequest_p.h"
#include "putsecretvalueresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  PutSecretValueRequest
 *
 * @brief  Implements SecretsManager PutSecretValue requests.
 *
 * @see    SecretsManagerClient::putSecretValue
 */

/**
 * @brief  Constructs a new PutSecretValueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutSecretValueRequest::PutSecretValueRequest(const PutSecretValueRequest &other)
    : SecretsManagerRequest(new PutSecretValueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutSecretValueRequest object.
 */
PutSecretValueRequest::PutSecretValueRequest()
    : SecretsManagerRequest(new PutSecretValueRequestPrivate(SecretsManagerRequest::PutSecretValueAction, this))
{

}

bool PutSecretValueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutSecretValueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutSecretValueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSecretValueRequest::response(QNetworkReply * const reply) const
{
    return new PutSecretValueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutSecretValueRequestPrivate
 *
 * @brief  Private implementation for PutSecretValueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSecretValueRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public PutSecretValueRequest instance.
 */
PutSecretValueRequestPrivate::PutSecretValueRequestPrivate(
    const SecretsManagerRequest::Action action, PutSecretValueRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutSecretValueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutSecretValueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutSecretValueRequest instance.
 */
PutSecretValueRequestPrivate::PutSecretValueRequestPrivate(
    const PutSecretValueRequestPrivate &other, PutSecretValueRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
