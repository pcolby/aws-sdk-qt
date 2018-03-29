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

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/**
 * @class  CreateProjectRequest
 *
 * @brief  Implements CodeStar CreateProject requests.
 *
 * @see    CodeStarClient::createProject
 */

/**
 * @brief  Constructs a new CreateProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : CodeStarRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : CodeStarRequest(new CreateProjectRequestPrivate(CodeStarRequest::CreateProjectAction, this))
{

}

bool CreateProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateProjectRequestPrivate
 *
 * @brief  Private implementation for CreateProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProjectRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public CreateProjectRequest instance.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CodeStarRequest::Action action, CreateProjectRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProjectRequest instance.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CreateProjectRequestPrivate &other, CreateProjectRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
