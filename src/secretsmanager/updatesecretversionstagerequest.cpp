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

#include "updatesecretversionstagerequest.h"
#include "updatesecretversionstagerequest_p.h"
#include "updatesecretversionstageresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  UpdateSecretVersionStageRequest
 *
 * @brief  Implements SecretsManager UpdateSecretVersionStage requests.
 *
 * @see    SecretsManagerClient::updateSecretVersionStage
 */

/**
 * @brief  Constructs a new UpdateSecretVersionStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSecretVersionStageRequest::UpdateSecretVersionStageRequest(const UpdateSecretVersionStageRequest &other)
    : SecretsManagerRequest(new UpdateSecretVersionStageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSecretVersionStageRequest object.
 */
UpdateSecretVersionStageRequest::UpdateSecretVersionStageRequest()
    : SecretsManagerRequest(new UpdateSecretVersionStageRequestPrivate(SecretsManagerRequest::UpdateSecretVersionStageAction, this))
{

}

bool UpdateSecretVersionStageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSecretVersionStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSecretVersionStageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecretVersionStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecretVersionStageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSecretVersionStageRequestPrivate
 *
 * @brief  Private implementation for UpdateSecretVersionStageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretVersionStageRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public UpdateSecretVersionStageRequest instance.
 */
UpdateSecretVersionStageRequestPrivate::UpdateSecretVersionStageRequestPrivate(
    const SecretsManagerRequest::Action action, UpdateSecretVersionStageRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSecretVersionStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecretVersionStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSecretVersionStageRequest instance.
 */
UpdateSecretVersionStageRequestPrivate::UpdateSecretVersionStageRequestPrivate(
    const UpdateSecretVersionStageRequestPrivate &other, UpdateSecretVersionStageRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
