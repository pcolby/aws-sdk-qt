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

#include "stopautomationexecutionrequest.h"
#include "stopautomationexecutionrequest_p.h"
#include "stopautomationexecutionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  StopAutomationExecutionRequest
 *
 * @brief  Implements SSM StopAutomationExecution requests.
 *
 * @see    SSMClient::stopAutomationExecution
 */

/**
 * @brief  Constructs a new StopAutomationExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopAutomationExecutionRequest::StopAutomationExecutionRequest(const StopAutomationExecutionRequest &other)
    : SSMRequest(new StopAutomationExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopAutomationExecutionRequest object.
 */
StopAutomationExecutionRequest::StopAutomationExecutionRequest()
    : SSMRequest(new StopAutomationExecutionRequestPrivate(SSMRequest::StopAutomationExecutionAction, this))
{

}

bool StopAutomationExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopAutomationExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopAutomationExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAutomationExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StopAutomationExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopAutomationExecutionRequestPrivate
 *
 * @brief  Private implementation for StopAutomationExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopAutomationExecutionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public StopAutomationExecutionRequest instance.
 */
StopAutomationExecutionRequestPrivate::StopAutomationExecutionRequestPrivate(
    const SSMRequest::Action action, StopAutomationExecutionRequest * const q)
    : StopAutomationExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopAutomationExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopAutomationExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopAutomationExecutionRequest instance.
 */
StopAutomationExecutionRequestPrivate::StopAutomationExecutionRequestPrivate(
    const StopAutomationExecutionRequestPrivate &other, StopAutomationExecutionRequest * const q)
    : StopAutomationExecutionPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
