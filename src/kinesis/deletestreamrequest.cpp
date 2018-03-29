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

#include "deletestreamrequest.h"
#include "deletestreamrequest_p.h"
#include "deletestreamresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/**
 * @class  DeleteStreamRequest
 *
 * @brief  Implements Kinesis DeleteStream requests.
 *
 * @see    KinesisClient::deleteStream
 */

/**
 * @brief  Constructs a new DeleteStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStreamRequest::DeleteStreamRequest(const DeleteStreamRequest &other)
    : KinesisRequest(new DeleteStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStreamRequest object.
 */
DeleteStreamRequest::DeleteStreamRequest()
    : KinesisRequest(new DeleteStreamRequestPrivate(KinesisRequest::DeleteStreamAction, this))
{

}

bool DeleteStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * DeleteStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStreamRequestPrivate
 *
 * @brief  Private implementation for DeleteStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public DeleteStreamRequest instance.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const KinesisRequest::Action action, DeleteStreamRequest * const q)
    : DeleteStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStreamRequest instance.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const DeleteStreamRequestPrivate &other, DeleteStreamRequest * const q)
    : DeleteStreamPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
