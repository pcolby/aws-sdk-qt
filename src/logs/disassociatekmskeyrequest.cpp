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

#include "disassociatekmskeyrequest.h"
#include "disassociatekmskeyrequest_p.h"
#include "disassociatekmskeyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DisassociateKmsKeyRequest
 *
 * @brief  Implements CloudWatchLogs DisassociateKmsKey requests.
 *
 * @see    CloudWatchLogsClient::disassociateKmsKey
 */

/**
 * @brief  Constructs a new DisassociateKmsKeyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateKmsKeyRequest::DisassociateKmsKeyRequest(const DisassociateKmsKeyRequest &other)
    : CloudWatchLogsRequest(new DisassociateKmsKeyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateKmsKeyRequest object.
 */
DisassociateKmsKeyRequest::DisassociateKmsKeyRequest()
    : CloudWatchLogsRequest(new DisassociateKmsKeyRequestPrivate(CloudWatchLogsRequest::DisassociateKmsKeyAction, this))
{

}

bool DisassociateKmsKeyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateKmsKeyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateKmsKeyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateKmsKeyRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateKmsKeyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateKmsKeyRequestPrivate
 *
 * @brief  Private implementation for DisassociateKmsKeyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateKmsKeyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DisassociateKmsKeyRequest instance.
 */
DisassociateKmsKeyRequestPrivate::DisassociateKmsKeyRequestPrivate(
    const CloudWatchLogsRequest::Action action, DisassociateKmsKeyRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateKmsKeyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateKmsKeyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateKmsKeyRequest instance.
 */
DisassociateKmsKeyRequestPrivate::DisassociateKmsKeyRequestPrivate(
    const DisassociateKmsKeyRequestPrivate &other, DisassociateKmsKeyRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
