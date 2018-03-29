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

#include "stopbuildrequest.h"
#include "stopbuildrequest_p.h"
#include "stopbuildresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/**
 * @class  StopBuildRequest
 *
 * @brief  Implements CodeBuild StopBuild requests.
 *
 * @see    CodeBuildClient::stopBuild
 */

/**
 * @brief  Constructs a new StopBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopBuildRequest::StopBuildRequest(const StopBuildRequest &other)
    : CodeBuildRequest(new StopBuildRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopBuildRequest object.
 */
StopBuildRequest::StopBuildRequest()
    : CodeBuildRequest(new StopBuildRequestPrivate(CodeBuildRequest::StopBuildAction, this))
{

}

bool StopBuildRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopBuildResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopBuildResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBuildRequest::response(QNetworkReply * const reply) const
{
    return new StopBuildResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopBuildRequestPrivate
 *
 * @brief  Private implementation for StopBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopBuildRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public StopBuildRequest instance.
 */
StopBuildRequestPrivate::StopBuildRequestPrivate(
    const CodeBuildRequest::Action action, StopBuildRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopBuildRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopBuildRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopBuildRequest instance.
 */
StopBuildRequestPrivate::StopBuildRequestPrivate(
    const StopBuildRequestPrivate &other, StopBuildRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
