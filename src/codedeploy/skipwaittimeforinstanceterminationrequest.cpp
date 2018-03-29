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

#include "skipwaittimeforinstanceterminationrequest.h"
#include "skipwaittimeforinstanceterminationrequest_p.h"
#include "skipwaittimeforinstanceterminationresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  SkipWaitTimeForInstanceTerminationRequest
 *
 * @brief  Implements CodeDeploy SkipWaitTimeForInstanceTermination requests.
 *
 * @see    CodeDeployClient::skipWaitTimeForInstanceTermination
 */

/**
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SkipWaitTimeForInstanceTerminationRequest::SkipWaitTimeForInstanceTerminationRequest(const SkipWaitTimeForInstanceTerminationRequest &other)
    : CodeDeployRequest(new SkipWaitTimeForInstanceTerminationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationRequest object.
 */
SkipWaitTimeForInstanceTerminationRequest::SkipWaitTimeForInstanceTerminationRequest()
    : CodeDeployRequest(new SkipWaitTimeForInstanceTerminationRequestPrivate(CodeDeployRequest::SkipWaitTimeForInstanceTerminationAction, this))
{

}

bool SkipWaitTimeForInstanceTerminationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SkipWaitTimeForInstanceTerminationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SkipWaitTimeForInstanceTerminationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * SkipWaitTimeForInstanceTerminationRequest::response(QNetworkReply * const reply) const
{
    return new SkipWaitTimeForInstanceTerminationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SkipWaitTimeForInstanceTerminationRequestPrivate
 *
 * @brief  Private implementation for SkipWaitTimeForInstanceTerminationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public SkipWaitTimeForInstanceTerminationRequest instance.
 */
SkipWaitTimeForInstanceTerminationRequestPrivate::SkipWaitTimeForInstanceTerminationRequestPrivate(
    const CodeDeployRequest::Action action, SkipWaitTimeForInstanceTerminationRequest * const q)
    : SkipWaitTimeForInstanceTerminationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SkipWaitTimeForInstanceTerminationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SkipWaitTimeForInstanceTerminationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SkipWaitTimeForInstanceTerminationRequest instance.
 */
SkipWaitTimeForInstanceTerminationRequestPrivate::SkipWaitTimeForInstanceTerminationRequestPrivate(
    const SkipWaitTimeForInstanceTerminationRequestPrivate &other, SkipWaitTimeForInstanceTerminationRequest * const q)
    : SkipWaitTimeForInstanceTerminationPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
