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

#include "updatetimetoliverequest.h"
#include "updatetimetoliverequest_p.h"
#include "updatetimetoliveresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  UpdateTimeToLiveRequest
 *
 * @brief  Implements DynamoDB UpdateTimeToLive requests.
 *
 * @see    DynamoDBClient::updateTimeToLive
 */

/**
 * @brief  Constructs a new UpdateTimeToLiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTimeToLiveRequest::UpdateTimeToLiveRequest(const UpdateTimeToLiveRequest &other)
    : DynamoDBRequest(new UpdateTimeToLiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTimeToLiveRequest object.
 */
UpdateTimeToLiveRequest::UpdateTimeToLiveRequest()
    : DynamoDBRequest(new UpdateTimeToLiveRequestPrivate(DynamoDBRequest::UpdateTimeToLiveAction, this))
{

}

bool UpdateTimeToLiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTimeToLiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTimeToLiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * UpdateTimeToLiveRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTimeToLiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTimeToLiveRequestPrivate
 *
 * @brief  Private implementation for UpdateTimeToLiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTimeToLiveRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UpdateTimeToLiveRequest instance.
 */
UpdateTimeToLiveRequestPrivate::UpdateTimeToLiveRequestPrivate(
    const DynamoDBRequest::Action action, UpdateTimeToLiveRequest * const q)
    : UpdateTimeToLivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTimeToLiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTimeToLiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTimeToLiveRequest instance.
 */
UpdateTimeToLiveRequestPrivate::UpdateTimeToLiveRequestPrivate(
    const UpdateTimeToLiveRequestPrivate &other, UpdateTimeToLiveRequest * const q)
    : UpdateTimeToLivePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
