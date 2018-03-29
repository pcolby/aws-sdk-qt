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

#include "updatenotebookinstancelifecycleconfigrequest.h"
#include "updatenotebookinstancelifecycleconfigrequest_p.h"
#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  UpdateNotebookInstanceLifecycleConfigRequest
 *
 * @brief  Implements SageMaker UpdateNotebookInstanceLifecycleConfig requests.
 *
 * @see    SageMakerClient::updateNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNotebookInstanceLifecycleConfigRequest::UpdateNotebookInstanceLifecycleConfigRequest(const UpdateNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigRequest object.
 */
UpdateNotebookInstanceLifecycleConfigRequest::UpdateNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new UpdateNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::UpdateNotebookInstanceLifecycleConfigAction, this))
{

}

bool UpdateNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNotebookInstanceLifecycleConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNotebookInstanceLifecycleConfigRequestPrivate
 *
 * @brief  Private implementation for UpdateNotebookInstanceLifecycleConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public UpdateNotebookInstanceLifecycleConfigRequest instance.
 */
UpdateNotebookInstanceLifecycleConfigRequestPrivate::UpdateNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNotebookInstanceLifecycleConfigRequest instance.
 */
UpdateNotebookInstanceLifecycleConfigRequestPrivate::UpdateNotebookInstanceLifecycleConfigRequestPrivate(
    const UpdateNotebookInstanceLifecycleConfigRequestPrivate &other, UpdateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
