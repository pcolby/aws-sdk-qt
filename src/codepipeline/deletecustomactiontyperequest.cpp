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

#include "deletecustomactiontyperequest.h"
#include "deletecustomactiontyperequest_p.h"
#include "deletecustomactiontyperesponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  DeleteCustomActionTypeRequest
 *
 * @brief  Implements CodePipeline DeleteCustomActionType requests.
 *
 * @see    CodePipelineClient::deleteCustomActionType
 */

/**
 * @brief  Constructs a new DeleteCustomActionTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomActionTypeResponse::DeleteCustomActionTypeResponse(

/**
 * @brief  Constructs a new DeleteCustomActionTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCustomActionTypeRequest::DeleteCustomActionTypeRequest(const DeleteCustomActionTypeRequest &other)
    : CodePipelineRequest(new DeleteCustomActionTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCustomActionTypeRequest object.
 */
DeleteCustomActionTypeRequest::DeleteCustomActionTypeRequest()
    : CodePipelineRequest(new DeleteCustomActionTypeRequestPrivate(CodePipelineRequest::DeleteCustomActionTypeAction, this))
{

}

bool DeleteCustomActionTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCustomActionTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCustomActionTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * DeleteCustomActionTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomActionTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCustomActionTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteCustomActionTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomActionTypeRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public DeleteCustomActionTypeRequest instance.
 */
DeleteCustomActionTypeRequestPrivate::DeleteCustomActionTypeRequestPrivate(
    const CodePipelineRequest::Action action, DeleteCustomActionTypeRequest * const q)
    : DeleteCustomActionTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomActionTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomActionTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCustomActionTypeRequest instance.
 */
DeleteCustomActionTypeRequestPrivate::DeleteCustomActionTypeRequestPrivate(
    const DeleteCustomActionTypeRequestPrivate &other, DeleteCustomActionTypeRequest * const q)
    : DeleteCustomActionTypePrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
