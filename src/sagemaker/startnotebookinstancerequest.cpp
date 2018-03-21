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

#include "startnotebookinstancerequest.h"
#include "startnotebookinstancerequest_p.h"
#include "startnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  StartNotebookInstanceRequest
 *
 * @brief  Implements SageMaker StartNotebookInstance requests.
 *
 * @see    SageMakerClient::startNotebookInstance
 */

/**
 * @brief  Constructs a new StartNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartNotebookInstanceRequest::StartNotebookInstanceRequest(const StartNotebookInstanceRequest &other)
    : SageMakerRequest(new StartNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartNotebookInstanceRequest object.
 */
StartNotebookInstanceRequest::StartNotebookInstanceRequest()
    : SageMakerRequest(new StartNotebookInstanceRequestPrivate(SageMakerRequest::StartNotebookInstanceAction, this))
{

}

bool StartNotebookInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartNotebookInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * StartNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartNotebookInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for StartNotebookInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public StartNotebookInstanceRequest instance.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, StartNotebookInstanceRequest * const q)
    : StartNotebookInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartNotebookInstanceRequest instance.
 */
StartNotebookInstanceRequestPrivate::StartNotebookInstanceRequestPrivate(
    const StartNotebookInstanceRequestPrivate &other, StartNotebookInstanceRequest * const q)
    : StartNotebookInstancePrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
