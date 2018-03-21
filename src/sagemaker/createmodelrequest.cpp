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

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  CreateModelRequest
 *
 * @brief  Implements SageMaker CreateModel requests.
 *
 * @see    SageMakerClient::createModel
 */

/**
 * @brief  Constructs a new CreateModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateModelResponse::CreateModelResponse(

/**
 * @brief  Constructs a new CreateModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : SageMakerRequest(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : SageMakerRequest(new CreateModelRequestPrivate(SageMakerRequest::CreateModelAction, this))
{

}

bool CreateModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateModelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * CreateModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateModelRequestPrivate
 *
 * @brief  Private implementation for CreateModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateModelRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreateModelRequest instance.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const SageMakerRequest::Action action, CreateModelRequest * const q)
    : CreateModelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateModelRequest instance.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const CreateModelRequestPrivate &other, CreateModelRequest * const q)
    : CreateModelPrivate(other, q)
{

}
