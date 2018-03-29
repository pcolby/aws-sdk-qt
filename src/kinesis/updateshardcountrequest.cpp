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

#include "updateshardcountrequest.h"
#include "updateshardcountrequest_p.h"
#include "updateshardcountresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  UpdateShardCountRequest
 *
 * @brief  Implements Kinesis UpdateShardCount requests.
 *
 * @see    KinesisClient::updateShardCount
 */

/**
 * @brief  Constructs a new UpdateShardCountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateShardCountRequest::UpdateShardCountRequest(const UpdateShardCountRequest &other)
    : KinesisRequest(new UpdateShardCountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateShardCountRequest object.
 */
UpdateShardCountRequest::UpdateShardCountRequest()
    : KinesisRequest(new UpdateShardCountRequestPrivate(KinesisRequest::UpdateShardCountAction, this))
{

}

bool UpdateShardCountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateShardCountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateShardCountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * UpdateShardCountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateShardCountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateShardCountRequestPrivate
 *
 * @brief  Private implementation for UpdateShardCountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateShardCountRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public UpdateShardCountRequest instance.
 */
UpdateShardCountRequestPrivate::UpdateShardCountRequestPrivate(
    const KinesisRequest::Action action, UpdateShardCountRequest * const q)
    : UpdateShardCountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateShardCountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateShardCountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateShardCountRequest instance.
 */
UpdateShardCountRequestPrivate::UpdateShardCountRequestPrivate(
    const UpdateShardCountRequestPrivate &other, UpdateShardCountRequest * const q)
    : UpdateShardCountPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
