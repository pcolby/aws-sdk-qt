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

#include "getdeploymentrequest.h"
#include "getdeploymentrequest_p.h"
#include "getdeploymentresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetDeploymentRequest
 *
 * @brief  Implements CodeDeploy GetDeployment requests.
 *
 * @see    CodeDeployClient::getDeployment
 */

/**
 * @brief  Constructs a new GetDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentRequest::GetDeploymentRequest(const GetDeploymentRequest &other)
    : CodeDeployRequest(new GetDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentRequest object.
 */
GetDeploymentRequest::GetDeploymentRequest()
    : CodeDeployRequest(new GetDeploymentRequestPrivate(CodeDeployRequest::GetDeploymentAction, this))
{

}

bool GetDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetDeploymentRequest instance.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const CodeDeployRequest::Action action, GetDeploymentRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentRequest instance.
 */
GetDeploymentRequestPrivate::GetDeploymentRequestPrivate(
    const GetDeploymentRequestPrivate &other, GetDeploymentRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
