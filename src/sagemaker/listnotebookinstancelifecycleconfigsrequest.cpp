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

#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsrequest_p.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  ListNotebookInstanceLifecycleConfigsRequest
 *
 * @brief  Implements SageMaker ListNotebookInstanceLifecycleConfigs requests.
 *
 * @see    SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/**
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNotebookInstanceLifecycleConfigsResponse::ListNotebookInstanceLifecycleConfigsResponse(

/**
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest(const ListNotebookInstanceLifecycleConfigsRequest &other)
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequest object.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest()
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(SageMakerRequest::ListNotebookInstanceLifecycleConfigsAction, this))
{

}

bool ListNotebookInstanceLifecycleConfigsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListNotebookInstanceLifecycleConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNotebookInstanceLifecycleConfigsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * ListNotebookInstanceLifecycleConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstanceLifecycleConfigsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListNotebookInstanceLifecycleConfigsRequestPrivate
 *
 * @brief  Private implementation for ListNotebookInstanceLifecycleConfigsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListNotebookInstanceLifecycleConfigsRequest instance.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : ListNotebookInstanceLifecycleConfigsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstanceLifecycleConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstanceLifecycleConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNotebookInstanceLifecycleConfigsRequest instance.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const ListNotebookInstanceLifecycleConfigsRequestPrivate &other, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : ListNotebookInstanceLifecycleConfigsPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
