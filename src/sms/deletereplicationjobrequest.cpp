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

#include "deletereplicationjobrequest.h"
#include "deletereplicationjobrequest_p.h"
#include "deletereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  DeleteReplicationJobRequest
 *
 * @brief  Implements SMS DeleteReplicationJob requests.
 *
 * @see    SMSClient::deleteReplicationJob
 */

/**
 * @brief  Constructs a new DeleteReplicationJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest(const DeleteReplicationJobRequest &other)
    : SMSRequest(new DeleteReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationJobRequest object.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest()
    : SMSRequest(new DeleteReplicationJobRequestPrivate(SMSRequest::DeleteReplicationJobAction, this))
{

}

bool DeleteReplicationJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationJobRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationJobRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationJobRequest instance.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const SMSRequest::Action action, DeleteReplicationJobRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationJobRequest instance.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const DeleteReplicationJobRequestPrivate &other, DeleteReplicationJobRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
