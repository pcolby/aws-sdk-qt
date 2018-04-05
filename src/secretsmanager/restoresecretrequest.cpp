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

#include "restoresecretrequest.h"
#include "restoresecretrequest_p.h"
#include "restoresecretresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  RestoreSecretRequest
 *
 * @brief  Implements SecretsManager RestoreSecret requests.
 *
 * @see    SecretsManagerClient::restoreSecret
 */

/**
 * @brief  Constructs a new RestoreSecretRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreSecretRequest::RestoreSecretRequest(const RestoreSecretRequest &other)
    : SecretsManagerRequest(new RestoreSecretRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreSecretRequest object.
 */
RestoreSecretRequest::RestoreSecretRequest()
    : SecretsManagerRequest(new RestoreSecretRequestPrivate(SecretsManagerRequest::RestoreSecretAction, this))
{

}

bool RestoreSecretRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreSecretResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreSecretResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreSecretRequest::response(QNetworkReply * const reply) const
{
    return new RestoreSecretResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreSecretRequestPrivate
 *
 * @brief  Private implementation for RestoreSecretRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreSecretRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public RestoreSecretRequest instance.
 */
RestoreSecretRequestPrivate::RestoreSecretRequestPrivate(
    const SecretsManagerRequest::Action action, RestoreSecretRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreSecretRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreSecretRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreSecretRequest instance.
 */
RestoreSecretRequestPrivate::RestoreSecretRequestPrivate(
    const RestoreSecretRequestPrivate &other, RestoreSecretRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
