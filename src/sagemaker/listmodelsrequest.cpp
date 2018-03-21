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

#include "listmodelsrequest.h"
#include "listmodelsrequest_p.h"
#include "listmodelsresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  ListModelsRequest
 *
 * @brief  Implements SageMaker ListModels requests.
 *
 * @see    SageMakerClient::listModels
 */

/**
 * @brief  Constructs a new ListModelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListModelsRequest::ListModelsRequest(const ListModelsRequest &other)
    : SageMakerRequest(new ListModelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListModelsRequest object.
 */
ListModelsRequest::ListModelsRequest()
    : SageMakerRequest(new ListModelsRequestPrivate(SageMakerRequest::ListModelsAction, this))
{

}

bool ListModelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListModelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListModelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * ListModelsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListModelsRequestPrivate
 *
 * @brief  Private implementation for ListModelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListModelsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListModelsRequest instance.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const SageMakerRequest::Action action, ListModelsRequest * const q)
    : ListModelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListModelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListModelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListModelsRequest instance.
 */
ListModelsRequestPrivate::ListModelsRequestPrivate(
    const ListModelsRequestPrivate &other, ListModelsRequest * const q)
    : ListModelsPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
