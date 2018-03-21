/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listkeysrequest.h"
#include "listkeysrequest_p.h"
#include "listkeysresponse.h"
#include "kmsrequest_p.h"

namespace AWS {
namespace KMS {

/**
 * @class  ListKeysRequest
 *
 * @brief  Implements KMS ListKeys requests.
 *
 * @see    KMSClient::listKeys
 */

/**
 * @brief  Constructs a new ListKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListKeysRequest::ListKeysRequest(const ListKeysRequest &other)
    : KMSRequest(new ListKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListKeysRequest object.
 */
ListKeysRequest::ListKeysRequest()
    : KMSRequest(new ListKeysRequestPrivate(KMSRequest::ListKeysAction, this))
{

}

bool ListKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KMSClient::send
 */
AwsAbstractResponse * ListKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListKeysRequestPrivate
 *
 * @brief  Private implementation for ListKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListKeysRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ListKeysRequest instance.
 */
ListKeysRequestPrivate::ListKeysRequestPrivate(
    const KMSRequest::Action action, ListKeysRequest * const q)
    : ListKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListKeysRequest instance.
 */
ListKeysRequestPrivate::ListKeysRequestPrivate(
    const ListKeysRequestPrivate &other, ListKeysRequest * const q)
    : ListKeysPrivate(other, q)
{

}

} // namespace KMS
} // namespace AWS
