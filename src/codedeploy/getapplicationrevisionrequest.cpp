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

#include "getapplicationrevisionrequest.h"
#include "getapplicationrevisionrequest_p.h"
#include "getapplicationrevisionresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetApplicationRevisionRequest
 *
 * @brief  Implements CodeDeploy GetApplicationRevision requests.
 *
 * @see    CodeDeployClient::getApplicationRevision
 */

/**
 * @brief  Constructs a new GetApplicationRevisionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApplicationRevisionRequest::GetApplicationRevisionRequest(const GetApplicationRevisionRequest &other)
    : CodeDeployRequest(new GetApplicationRevisionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApplicationRevisionRequest object.
 */
GetApplicationRevisionRequest::GetApplicationRevisionRequest()
    : CodeDeployRequest(new GetApplicationRevisionRequestPrivate(CodeDeployRequest::GetApplicationRevisionAction, this))
{

}

bool GetApplicationRevisionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApplicationRevisionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApplicationRevisionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationRevisionRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationRevisionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApplicationRevisionRequestPrivate
 *
 * @brief  Private implementation for GetApplicationRevisionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationRevisionRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetApplicationRevisionRequest instance.
 */
GetApplicationRevisionRequestPrivate::GetApplicationRevisionRequestPrivate(
    const CodeDeployRequest::Action action, GetApplicationRevisionRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationRevisionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationRevisionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApplicationRevisionRequest instance.
 */
GetApplicationRevisionRequestPrivate::GetApplicationRevisionRequestPrivate(
    const GetApplicationRevisionRequestPrivate &other, GetApplicationRevisionRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
