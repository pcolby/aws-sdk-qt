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

#include "registerapplicationrevisionrequest.h"
#include "registerapplicationrevisionrequest_p.h"
#include "registerapplicationrevisionresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  RegisterApplicationRevisionRequest
 *
 * @brief  Implements CodeDeploy RegisterApplicationRevision requests.
 *
 * @see    CodeDeployClient::registerApplicationRevision
 */

/**
 * @brief  Constructs a new RegisterApplicationRevisionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterApplicationRevisionResponse::RegisterApplicationRevisionResponse(

/**
 * @brief  Constructs a new RegisterApplicationRevisionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterApplicationRevisionRequest::RegisterApplicationRevisionRequest(const RegisterApplicationRevisionRequest &other)
    : CodeDeployRequest(new RegisterApplicationRevisionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterApplicationRevisionRequest object.
 */
RegisterApplicationRevisionRequest::RegisterApplicationRevisionRequest()
    : CodeDeployRequest(new RegisterApplicationRevisionRequestPrivate(CodeDeployRequest::RegisterApplicationRevisionAction, this))
{

}

bool RegisterApplicationRevisionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterApplicationRevisionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterApplicationRevisionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * RegisterApplicationRevisionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterApplicationRevisionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterApplicationRevisionRequestPrivate
 *
 * @brief  Private implementation for RegisterApplicationRevisionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterApplicationRevisionRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public RegisterApplicationRevisionRequest instance.
 */
RegisterApplicationRevisionRequestPrivate::RegisterApplicationRevisionRequestPrivate(
    const CodeDeployRequest::Action action, RegisterApplicationRevisionRequest * const q)
    : RegisterApplicationRevisionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterApplicationRevisionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterApplicationRevisionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterApplicationRevisionRequest instance.
 */
RegisterApplicationRevisionRequestPrivate::RegisterApplicationRevisionRequestPrivate(
    const RegisterApplicationRevisionRequestPrivate &other, RegisterApplicationRevisionRequest * const q)
    : RegisterApplicationRevisionPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
