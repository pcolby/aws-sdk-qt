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

#include "startloggingrequest.h"
#include "startloggingrequest_p.h"
#include "startloggingresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  StartLoggingRequest
 *
 * @brief  Implements CloudTrail StartLogging requests.
 *
 * @see    CloudTrailClient::startLogging
 */

/**
 * @brief  Constructs a new StartLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartLoggingRequest::StartLoggingRequest(const StartLoggingRequest &other)
    : CloudTrailRequest(new StartLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartLoggingRequest object.
 */
StartLoggingRequest::StartLoggingRequest()
    : CloudTrailRequest(new StartLoggingRequestPrivate(CloudTrailRequest::StartLoggingAction, this))
{

}

bool StartLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartLoggingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLoggingRequest::response(QNetworkReply * const reply) const
{
    return new StartLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartLoggingRequestPrivate
 *
 * @brief  Private implementation for StartLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartLoggingRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public StartLoggingRequest instance.
 */
StartLoggingRequestPrivate::StartLoggingRequestPrivate(
    const CloudTrailRequest::Action action, StartLoggingRequest * const q)
    : StartLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartLoggingRequest instance.
 */
StartLoggingRequestPrivate::StartLoggingRequestPrivate(
    const StartLoggingRequestPrivate &other, StartLoggingRequest * const q)
    : StartLoggingPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
