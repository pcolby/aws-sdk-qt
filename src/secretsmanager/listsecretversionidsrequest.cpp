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

#include "listsecretversionidsrequest.h"
#include "listsecretversionidsrequest_p.h"
#include "listsecretversionidsresponse.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/**
 * @class  ListSecretVersionIdsRequest
 *
 * @brief  Implements SecretsManager ListSecretVersionIds requests.
 *
 * @see    SecretsManagerClient::listSecretVersionIds
 */

/**
 * @brief  Constructs a new ListSecretVersionIdsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSecretVersionIdsRequest::ListSecretVersionIdsRequest(const ListSecretVersionIdsRequest &other)
    : SecretsManagerRequest(new ListSecretVersionIdsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSecretVersionIdsRequest object.
 */
ListSecretVersionIdsRequest::ListSecretVersionIdsRequest()
    : SecretsManagerRequest(new ListSecretVersionIdsRequestPrivate(SecretsManagerRequest::ListSecretVersionIdsAction, this))
{

}

bool ListSecretVersionIdsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSecretVersionIdsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSecretVersionIdsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SecretsManagerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecretVersionIdsRequest::response(QNetworkReply * const reply) const
{
    return new ListSecretVersionIdsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSecretVersionIdsRequestPrivate
 *
 * @brief  Private implementation for ListSecretVersionIdsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretVersionIdsRequestPrivate object.
 *
 * @param  action  SecretsManager action being performed.
 * @param  q       Pointer to this object's public ListSecretVersionIdsRequest instance.
 */
ListSecretVersionIdsRequestPrivate::ListSecretVersionIdsRequestPrivate(
    const SecretsManagerRequest::Action action, ListSecretVersionIdsRequest * const q)
    : SecretsManagerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretVersionIdsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSecretVersionIdsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSecretVersionIdsRequest instance.
 */
ListSecretVersionIdsRequestPrivate::ListSecretVersionIdsRequestPrivate(
    const ListSecretVersionIdsRequestPrivate &other, ListSecretVersionIdsRequest * const q)
    : SecretsManagerRequestPrivate(other, q)
{

}

} // namespace SecretsManager
} // namespace QtAws
