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

#include "addtagstostreamrequest.h"
#include "addtagstostreamrequest_p.h"
#include "addtagstostreamresponse.h"
#include "kinesisrequest_p.h"

namespace AWS {
namespace Kinesis {

/**
 * @class  AddTagsToStreamRequest
 *
 * @brief  Implements Kinesis AddTagsToStream requests.
 *
 * @see    KinesisClient::addTagsToStream
 */

/**
 * @brief  Constructs a new AddTagsToStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToStreamRequest::AddTagsToStreamRequest(const AddTagsToStreamRequest &other)
    : KinesisRequest(new AddTagsToStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToStreamRequest object.
 */
AddTagsToStreamRequest::AddTagsToStreamRequest()
    : KinesisRequest(new AddTagsToStreamRequestPrivate(KinesisRequest::AddTagsToStreamAction, this))
{

}

bool AddTagsToStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisClient::send
 */
AwsAbstractResponse * AddTagsToStreamRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToStreamRequestPrivate
 *
 * @brief  Private implementation for AddTagsToStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToStreamRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public AddTagsToStreamRequest instance.
 */
AddTagsToStreamRequestPrivate::AddTagsToStreamRequestPrivate(
    const KinesisRequest::Action action, AddTagsToStreamRequest * const q)
    : AddTagsToStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToStreamRequest instance.
 */
AddTagsToStreamRequestPrivate::AddTagsToStreamRequestPrivate(
    const AddTagsToStreamRequestPrivate &other, AddTagsToStreamRequest * const q)
    : AddTagsToStreamPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace AWS
