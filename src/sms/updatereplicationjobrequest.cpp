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

#include "updatereplicationjobrequest.h"
#include "updatereplicationjobrequest_p.h"
#include "updatereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  UpdateReplicationJobRequest
 *
 * @brief  Implements SMS UpdateReplicationJob requests.
 *
 * @see    SMSClient::updateReplicationJob
 */

/**
 * @brief  Constructs a new UpdateReplicationJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest(const UpdateReplicationJobRequest &other)
    : SMSRequest(new UpdateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateReplicationJobRequest object.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest()
    : SMSRequest(new UpdateReplicationJobRequestPrivate(SMSRequest::UpdateReplicationJobAction, this))
{

}

bool UpdateReplicationJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateReplicationJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateReplicationJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * UpdateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateReplicationJobRequestPrivate
 *
 * @brief  Private implementation for UpdateReplicationJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReplicationJobRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public UpdateReplicationJobRequest instance.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const SMSRequest::Action action, UpdateReplicationJobRequest * const q)
    : UpdateReplicationJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReplicationJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateReplicationJobRequest instance.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const UpdateReplicationJobRequestPrivate &other, UpdateReplicationJobRequest * const q)
    : UpdateReplicationJobPrivate(other, q)
{

}

} // namespace SMS
} // namespace AWS
