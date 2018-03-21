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

#include "associatekmskeyrequest.h"
#include "associatekmskeyrequest_p.h"
#include "associatekmskeyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  AssociateKmsKeyRequest
 *
 * @brief  Implements CloudWatchLogs AssociateKmsKey requests.
 *
 * @see    CloudWatchLogsClient::associateKmsKey
 */

/**
 * @brief  Constructs a new AssociateKmsKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateKmsKeyResponse::AssociateKmsKeyResponse(

/**
 * @brief  Constructs a new AssociateKmsKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateKmsKeyRequest::AssociateKmsKeyRequest(const AssociateKmsKeyRequest &other)
    : CloudWatchLogsRequest(new AssociateKmsKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateKmsKeyRequest object.
 */
AssociateKmsKeyRequest::AssociateKmsKeyRequest()
    : CloudWatchLogsRequest(new AssociateKmsKeyRequestPrivate(CloudWatchLogsRequest::AssociateKmsKeyAction, this))
{

}

bool AssociateKmsKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateKmsKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateKmsKeyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * AssociateKmsKeyRequest::response(QNetworkReply * const reply) const
{
    return new AssociateKmsKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateKmsKeyRequestPrivate
 *
 * @brief  Private implementation for AssociateKmsKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateKmsKeyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public AssociateKmsKeyRequest instance.
 */
AssociateKmsKeyRequestPrivate::AssociateKmsKeyRequestPrivate(
    const CloudWatchLogsRequest::Action action, AssociateKmsKeyRequest * const q)
    : AssociateKmsKeyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateKmsKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateKmsKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateKmsKeyRequest instance.
 */
AssociateKmsKeyRequestPrivate::AssociateKmsKeyRequestPrivate(
    const AssociateKmsKeyRequestPrivate &other, AssociateKmsKeyRequest * const q)
    : AssociateKmsKeyPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
