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

#include "getautomationexecutionrequest.h"
#include "getautomationexecutionrequest_p.h"
#include "getautomationexecutionresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetAutomationExecutionRequest
 *
 * @brief  Implements SSM GetAutomationExecution requests.
 *
 * @see    SSMClient::getAutomationExecution
 */

/**
 * @brief  Constructs a new GetAutomationExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAutomationExecutionRequest::GetAutomationExecutionRequest(const GetAutomationExecutionRequest &other)
    : SSMRequest(new GetAutomationExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAutomationExecutionRequest object.
 */
GetAutomationExecutionRequest::GetAutomationExecutionRequest()
    : SSMRequest(new GetAutomationExecutionRequestPrivate(SSMRequest::GetAutomationExecutionAction, this))
{

}

bool GetAutomationExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAutomationExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAutomationExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetAutomationExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetAutomationExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAutomationExecutionRequestPrivate
 *
 * @brief  Private implementation for GetAutomationExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAutomationExecutionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetAutomationExecutionRequest instance.
 */
GetAutomationExecutionRequestPrivate::GetAutomationExecutionRequestPrivate(
    const SSMRequest::Action action, GetAutomationExecutionRequest * const q)
    : GetAutomationExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAutomationExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAutomationExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAutomationExecutionRequest instance.
 */
GetAutomationExecutionRequestPrivate::GetAutomationExecutionRequestPrivate(
    const GetAutomationExecutionRequestPrivate &other, GetAutomationExecutionRequest * const q)
    : GetAutomationExecutionPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
