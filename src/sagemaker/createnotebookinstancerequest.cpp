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

#include "createnotebookinstancerequest.h"
#include "createnotebookinstancerequest_p.h"
#include "createnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  CreateNotebookInstanceRequest
 *
 * @brief  Implements SageMaker CreateNotebookInstance requests.
 *
 * @see    SageMakerClient::createNotebookInstance
 */

/**
 * @brief  Constructs a new CreateNotebookInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest(const CreateNotebookInstanceRequest &other)
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNotebookInstanceRequest object.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest()
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(SageMakerRequest::CreateNotebookInstanceAction, this))
{

}

bool CreateNotebookInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNotebookInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNotebookInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * CreateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotebookInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNotebookInstanceRequestPrivate
 *
 * @brief  Private implementation for CreateNotebookInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreateNotebookInstanceRequest instance.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, CreateNotebookInstanceRequest * const q)
    : CreateNotebookInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNotebookInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNotebookInstanceRequest instance.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const CreateNotebookInstanceRequestPrivate &other, CreateNotebookInstanceRequest * const q)
    : CreateNotebookInstancePrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
