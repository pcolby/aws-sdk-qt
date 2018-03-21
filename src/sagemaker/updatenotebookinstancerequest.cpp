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

#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstancerequest_p.h"
#include "updatenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  UpdateNotebookInstanceRequest
 *
 * @brief  Implements SageMaker UpdateNotebookInstance requests.
 *
 * @see    SageMakerClient::updateNotebookInstance
 */

/**
 * @brief  Constructs a new UpdateNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotebookInstanceResponse::UpdateNotebookInstanceResponse(

/**
 * @brief  Constructs a new UpdateNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest(const UpdateNotebookInstanceRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNotebookInstanceRequest object.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest()
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(SageMakerRequest::UpdateNotebookInstanceAction, this))
{

}

bool UpdateNotebookInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNotebookInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * UpdateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateNotebookInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public UpdateNotebookInstanceRequest instance.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceRequest * const q)
    : UpdateNotebookInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNotebookInstanceRequest instance.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const UpdateNotebookInstanceRequestPrivate &other, UpdateNotebookInstanceRequest * const q)
    : UpdateNotebookInstancePrivate(other, q)
{

}
