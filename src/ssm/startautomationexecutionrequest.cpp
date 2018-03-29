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

#include "startautomationexecutionrequest.h"
#include "startautomationexecutionrequest_p.h"
#include "startautomationexecutionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  StartAutomationExecutionRequest
 *
 * @brief  Implements SSM StartAutomationExecution requests.
 *
 * @see    SSMClient::startAutomationExecution
 */

/**
 * @brief  Constructs a new StartAutomationExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartAutomationExecutionRequest::StartAutomationExecutionRequest(const StartAutomationExecutionRequest &other)
    : SSMRequest(new StartAutomationExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartAutomationExecutionRequest object.
 */
StartAutomationExecutionRequest::StartAutomationExecutionRequest()
    : SSMRequest(new StartAutomationExecutionRequestPrivate(SSMRequest::StartAutomationExecutionAction, this))
{

}

bool StartAutomationExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartAutomationExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartAutomationExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * StartAutomationExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartAutomationExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartAutomationExecutionRequestPrivate
 *
 * @brief  Private implementation for StartAutomationExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartAutomationExecutionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public StartAutomationExecutionRequest instance.
 */
StartAutomationExecutionRequestPrivate::StartAutomationExecutionRequestPrivate(
    const SSMRequest::Action action, StartAutomationExecutionRequest * const q)
    : StartAutomationExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartAutomationExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartAutomationExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartAutomationExecutionRequest instance.
 */
StartAutomationExecutionRequestPrivate::StartAutomationExecutionRequestPrivate(
    const StartAutomationExecutionRequestPrivate &other, StartAutomationExecutionRequest * const q)
    : StartAutomationExecutionPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
