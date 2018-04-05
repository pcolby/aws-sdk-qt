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

#include "listsecretsrequest.h"
#include "listsecretsrequest_p.h"
#include "listsecretsresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  ListSecretsRequest
 *
 * @brief  Implements SecretsManager ListSecrets requests.
 *
 * @see    SecretsManagerClient::listSecrets
 */

/**
 * @brief  Constructs a new ListSecretsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSecretsRequest::ListSecretsRequest(const ListSecretsRequest &other)
    : SecretsManagerRequest(new ListSecretsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSecretsRequest object.
 */
ListSecretsRequest::ListSecretsRequest()
    : SecretsManagerRequest(new ListSecretsRequestPrivate(SecretsManagerRequest::ListSecretsAction, this))
{

}

bool ListSecretsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSecretsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSecretsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecretsRequest::response(QNetworkReply * const reply) const
{
    return new ListSecretsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSecretsRequestPrivate
 *
 * @brief  Private implementation for ListSecretsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretsRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public ListSecretsRequest instance.
 */
ListSecretsRequestPrivate::ListSecretsRequestPrivate(
    const SecretsManagerRequest::Action action, ListSecretsRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSecretsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSecretsRequest instance.
 */
ListSecretsRequestPrivate::ListSecretsRequestPrivate(
    const ListSecretsRequestPrivate &other, ListSecretsRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
