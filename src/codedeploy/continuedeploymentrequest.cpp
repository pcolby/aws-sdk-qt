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

#include "continuedeploymentrequest.h"
#include "continuedeploymentrequest_p.h"
#include "continuedeploymentresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  ContinueDeploymentRequest
 *
 * @brief  Implements CodeDeploy ContinueDeployment requests.
 *
 * @see    CodeDeployClient::continueDeployment
 */

/**
 * @brief  Constructs a new ContinueDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ContinueDeploymentRequest::ContinueDeploymentRequest(const ContinueDeploymentRequest &other)
    : CodeDeployRequest(new ContinueDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ContinueDeploymentRequest object.
 */
ContinueDeploymentRequest::ContinueDeploymentRequest()
    : CodeDeployRequest(new ContinueDeploymentRequestPrivate(CodeDeployRequest::ContinueDeploymentAction, this))
{

}

bool ContinueDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ContinueDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ContinueDeploymentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * ContinueDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new ContinueDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ContinueDeploymentRequestPrivate
 *
 * @brief  Private implementation for ContinueDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ContinueDeploymentRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public ContinueDeploymentRequest instance.
 */
ContinueDeploymentRequestPrivate::ContinueDeploymentRequestPrivate(
    const CodeDeployRequest::Action action, ContinueDeploymentRequest * const q)
    : ContinueDeploymentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ContinueDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ContinueDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ContinueDeploymentRequest instance.
 */
ContinueDeploymentRequestPrivate::ContinueDeploymentRequestPrivate(
    const ContinueDeploymentRequestPrivate &other, ContinueDeploymentRequest * const q)
    : ContinueDeploymentPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
