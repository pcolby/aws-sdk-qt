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

#include "deletesecretrequest.h"
#include "deletesecretrequest_p.h"
#include "deletesecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  DeleteSecretRequest
 *
 * @brief  Implements SecretsManager DeleteSecret requests.
 *
 * @see    SecretsManagerClient::deleteSecret
 */

/**
 * @brief  Constructs a new DeleteSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSecretRequest::DeleteSecretRequest(const DeleteSecretRequest &other)
    : SecretsManagerRequest(new DeleteSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSecretRequest object.
 */
DeleteSecretRequest::DeleteSecretRequest()
    : SecretsManagerRequest(new DeleteSecretRequestPrivate(SecretsManagerRequest::DeleteSecretAction, this))
{

}

bool DeleteSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecretRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSecretRequestPrivate
 *
 * @brief  Private implementation for DeleteSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public DeleteSecretRequest instance.
 */
DeleteSecretRequestPrivate::DeleteSecretRequestPrivate(
    const SecretsManagerRequest::Action action, DeleteSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSecretRequest instance.
 */
DeleteSecretRequestPrivate::DeleteSecretRequestPrivate(
    const DeleteSecretRequestPrivate &other, DeleteSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
