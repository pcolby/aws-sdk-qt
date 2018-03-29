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

#include "createcustomactiontyperequest.h"
#include "createcustomactiontyperequest_p.h"
#include "createcustomactiontyperesponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  CreateCustomActionTypeRequest
 *
 * @brief  Implements CodePipeline CreateCustomActionType requests.
 *
 * @see    CodePipelineClient::createCustomActionType
 */

/**
 * @brief  Constructs a new CreateCustomActionTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCustomActionTypeRequest::CreateCustomActionTypeRequest(const CreateCustomActionTypeRequest &other)
    : CodePipelineRequest(new CreateCustomActionTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCustomActionTypeRequest object.
 */
CreateCustomActionTypeRequest::CreateCustomActionTypeRequest()
    : CodePipelineRequest(new CreateCustomActionTypeRequestPrivate(CodePipelineRequest::CreateCustomActionTypeAction, this))
{

}

bool CreateCustomActionTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCustomActionTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCustomActionTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * CreateCustomActionTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomActionTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCustomActionTypeRequestPrivate
 *
 * @brief  Private implementation for CreateCustomActionTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomActionTypeRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public CreateCustomActionTypeRequest instance.
 */
CreateCustomActionTypeRequestPrivate::CreateCustomActionTypeRequestPrivate(
    const CodePipelineRequest::Action action, CreateCustomActionTypeRequest * const q)
    : CreateCustomActionTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCustomActionTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomActionTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCustomActionTypeRequest instance.
 */
CreateCustomActionTypeRequestPrivate::CreateCustomActionTypeRequestPrivate(
    const CreateCustomActionTypeRequestPrivate &other, CreateCustomActionTypeRequest * const q)
    : CreateCustomActionTypePrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
