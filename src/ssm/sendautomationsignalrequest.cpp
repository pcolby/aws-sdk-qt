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

#include "sendautomationsignalrequest.h"
#include "sendautomationsignalrequest_p.h"
#include "sendautomationsignalresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  SendAutomationSignalRequest
 *
 * @brief  Implements SSM SendAutomationSignal requests.
 *
 * @see    SSMClient::sendAutomationSignal
 */

/**
 * @brief  Constructs a new SendAutomationSignalRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendAutomationSignalRequest::SendAutomationSignalRequest(const SendAutomationSignalRequest &other)
    : SSMRequest(new SendAutomationSignalRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendAutomationSignalRequest object.
 */
SendAutomationSignalRequest::SendAutomationSignalRequest()
    : SSMRequest(new SendAutomationSignalRequestPrivate(SSMRequest::SendAutomationSignalAction, this))
{

}

bool SendAutomationSignalRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendAutomationSignalResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendAutomationSignalResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * SendAutomationSignalRequest::response(QNetworkReply * const reply) const
{
    return new SendAutomationSignalResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendAutomationSignalRequestPrivate
 *
 * @brief  Private implementation for SendAutomationSignalRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendAutomationSignalRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public SendAutomationSignalRequest instance.
 */
SendAutomationSignalRequestPrivate::SendAutomationSignalRequestPrivate(
    const SSMRequest::Action action, SendAutomationSignalRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendAutomationSignalRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendAutomationSignalRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendAutomationSignalRequest instance.
 */
SendAutomationSignalRequestPrivate::SendAutomationSignalRequestPrivate(
    const SendAutomationSignalRequestPrivate &other, SendAutomationSignalRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
