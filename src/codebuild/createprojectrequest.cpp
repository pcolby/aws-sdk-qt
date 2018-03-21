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

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  CreateProjectRequest
 *
 * @brief  Implements CodeBuild CreateProject requests.
 *
 * @see    CodeBuildClient::createProject
 */

/**
 * @brief  Constructs a new CreateProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProjectResponse::CreateProjectResponse(

/**
 * @brief  Constructs a new CreateProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : CodeBuildRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : CodeBuildRequest(new CreateProjectRequestPrivate(CodeBuildRequest::CreateProjectAction, this))
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
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * CreateProjectRequest::response(QNetworkReply * const reply) const
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
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public CreateProjectRequest instance.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CodeBuildRequest::Action action, CreateProjectRequest * const q)
    : CreateProjectPrivate(action, q)
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
    : CreateProjectPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS
