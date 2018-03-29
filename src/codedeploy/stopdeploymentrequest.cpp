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

#include "stopdeploymentrequest.h"
#include "stopdeploymentrequest_p.h"
#include "stopdeploymentresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  StopDeploymentRequest
 *
 * @brief  Implements CodeDeploy StopDeployment requests.
 *
 * @see    CodeDeployClient::stopDeployment
 */

/**
 * @brief  Constructs a new StopDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopDeploymentRequest::StopDeploymentRequest(const StopDeploymentRequest &other)
    : CodeDeployRequest(new StopDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopDeploymentRequest object.
 */
StopDeploymentRequest::StopDeploymentRequest()
    : CodeDeployRequest(new StopDeploymentRequestPrivate(CodeDeployRequest::StopDeploymentAction, this))
{

}

bool StopDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopDeploymentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * StopDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StopDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopDeploymentRequestPrivate
 *
 * @brief  Private implementation for StopDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDeploymentRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public StopDeploymentRequest instance.
 */
StopDeploymentRequestPrivate::StopDeploymentRequestPrivate(
    const CodeDeployRequest::Action action, StopDeploymentRequest * const q)
    : StopDeploymentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopDeploymentRequest instance.
 */
StopDeploymentRequestPrivate::StopDeploymentRequestPrivate(
    const StopDeploymentRequestPrivate &other, StopDeploymentRequest * const q)
    : StopDeploymentPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
