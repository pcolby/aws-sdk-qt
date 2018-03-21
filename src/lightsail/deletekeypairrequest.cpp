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

#include "deletekeypairrequest.h"
#include "deletekeypairrequest_p.h"
#include "deletekeypairresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteKeyPairRequest
 *
 * @brief  Implements Lightsail DeleteKeyPair requests.
 *
 * @see    LightsailClient::deleteKeyPair
 */

/**
 * @brief  Constructs a new DeleteKeyPairResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteKeyPairResponse::DeleteKeyPairResponse(

/**
 * @brief  Constructs a new DeleteKeyPairRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteKeyPairRequest::DeleteKeyPairRequest(const DeleteKeyPairRequest &other)
    : LightsailRequest(new DeleteKeyPairRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteKeyPairRequest object.
 */
DeleteKeyPairRequest::DeleteKeyPairRequest()
    : LightsailRequest(new DeleteKeyPairRequestPrivate(LightsailRequest::DeleteKeyPairAction, this))
{

}

bool DeleteKeyPairRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteKeyPairResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteKeyPairResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteKeyPairRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKeyPairResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteKeyPairRequestPrivate
 *
 * @brief  Private implementation for DeleteKeyPairRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteKeyPairRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteKeyPairRequest instance.
 */
DeleteKeyPairRequestPrivate::DeleteKeyPairRequestPrivate(
    const LightsailRequest::Action action, DeleteKeyPairRequest * const q)
    : DeleteKeyPairPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteKeyPairRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteKeyPairRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteKeyPairRequest instance.
 */
DeleteKeyPairRequestPrivate::DeleteKeyPairRequestPrivate(
    const DeleteKeyPairRequestPrivate &other, DeleteKeyPairRequest * const q)
    : DeleteKeyPairPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
