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

#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesrequest_p.h"
#include "listnotebookinstancesresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  ListNotebookInstancesRequest
 *
 * @brief  Implements SageMaker ListNotebookInstances requests.
 *
 * @see    SageMakerClient::listNotebookInstances
 */

/**
 * @brief  Constructs a new ListNotebookInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNotebookInstancesResponse::ListNotebookInstancesResponse(

/**
 * @brief  Constructs a new ListNotebookInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest(const ListNotebookInstancesRequest &other)
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListNotebookInstancesRequest object.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest()
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(SageMakerRequest::ListNotebookInstancesAction, this))
{

}

bool ListNotebookInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListNotebookInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNotebookInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * ListNotebookInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListNotebookInstancesRequestPrivate
 *
 * @brief  Private implementation for ListNotebookInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstancesRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListNotebookInstancesRequest instance.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstancesRequest * const q)
    : ListNotebookInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNotebookInstancesRequest instance.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const ListNotebookInstancesRequestPrivate &other, ListNotebookInstancesRequest * const q)
    : ListNotebookInstancesPrivate(other, q)
{

}
