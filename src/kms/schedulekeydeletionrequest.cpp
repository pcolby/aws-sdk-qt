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

#include "schedulekeydeletionrequest.h"
#include "schedulekeydeletionrequest_p.h"
#include "schedulekeydeletionresponse.h"
#include "kmsrequest_p.h"

namespace QtAws {
namespace KMS {

/**
 * @class  ScheduleKeyDeletionRequest
 *
 * @brief  Implements KMS ScheduleKeyDeletion requests.
 *
 * @see    KMSClient::scheduleKeyDeletion
 */

/**
 * @brief  Constructs a new ScheduleKeyDeletionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ScheduleKeyDeletionRequest::ScheduleKeyDeletionRequest(const ScheduleKeyDeletionRequest &other)
    : KMSRequest(new ScheduleKeyDeletionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ScheduleKeyDeletionRequest object.
 */
ScheduleKeyDeletionRequest::ScheduleKeyDeletionRequest()
    : KMSRequest(new ScheduleKeyDeletionRequestPrivate(KMSRequest::ScheduleKeyDeletionAction, this))
{

}

bool ScheduleKeyDeletionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ScheduleKeyDeletionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ScheduleKeyDeletionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KMSClient::send
 */
QtAws::Core::AwsAbstractResponse * ScheduleKeyDeletionRequest::response(QNetworkReply * const reply) const
{
    return new ScheduleKeyDeletionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ScheduleKeyDeletionRequestPrivate
 *
 * @brief  Private implementation for ScheduleKeyDeletionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleKeyDeletionRequestPrivate object.
 *
 * @param  action  KMS action being performed.
 * @param  q       Pointer to this object's public ScheduleKeyDeletionRequest instance.
 */
ScheduleKeyDeletionRequestPrivate::ScheduleKeyDeletionRequestPrivate(
    const KMSRequest::Action action, ScheduleKeyDeletionRequest * const q)
    : ScheduleKeyDeletionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleKeyDeletionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ScheduleKeyDeletionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ScheduleKeyDeletionRequest instance.
 */
ScheduleKeyDeletionRequestPrivate::ScheduleKeyDeletionRequestPrivate(
    const ScheduleKeyDeletionRequestPrivate &other, ScheduleKeyDeletionRequest * const q)
    : ScheduleKeyDeletionPrivate(other, q)
{

}

} // namespace KMS
} // namespace QtAws
