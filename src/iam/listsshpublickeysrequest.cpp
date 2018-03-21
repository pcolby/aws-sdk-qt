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

#include "listsshpublickeysrequest.h"
#include "listsshpublickeysrequest_p.h"
#include "listsshpublickeysresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListSSHPublicKeysRequest
 *
 * @brief  Implements IAM ListSSHPublicKeys requests.
 *
 * @see    IAMClient::listSSHPublicKeys
 */

/**
 * @brief  Constructs a new ListSSHPublicKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSSHPublicKeysResponse::ListSSHPublicKeysResponse(

/**
 * @brief  Constructs a new ListSSHPublicKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSSHPublicKeysRequest::ListSSHPublicKeysRequest(const ListSSHPublicKeysRequest &other)
    : IAMRequest(new ListSSHPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSSHPublicKeysRequest object.
 */
ListSSHPublicKeysRequest::ListSSHPublicKeysRequest()
    : IAMRequest(new ListSSHPublicKeysRequestPrivate(IAMRequest::ListSSHPublicKeysAction, this))
{

}

bool ListSSHPublicKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSSHPublicKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSSHPublicKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListSSHPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListSSHPublicKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSSHPublicKeysRequestPrivate
 *
 * @brief  Private implementation for ListSSHPublicKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSSHPublicKeysRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListSSHPublicKeysRequest instance.
 */
ListSSHPublicKeysRequestPrivate::ListSSHPublicKeysRequestPrivate(
    const IAMRequest::Action action, ListSSHPublicKeysRequest * const q)
    : ListSSHPublicKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSSHPublicKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSSHPublicKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSSHPublicKeysRequest instance.
 */
ListSSHPublicKeysRequestPrivate::ListSSHPublicKeysRequestPrivate(
    const ListSSHPublicKeysRequestPrivate &other, ListSSHPublicKeysRequest * const q)
    : ListSSHPublicKeysPrivate(other, q)
{

}
