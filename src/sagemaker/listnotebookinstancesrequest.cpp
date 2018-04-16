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

#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesrequest_p.h"
#include "listnotebookinstancesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesRequest
 *
 * \brief The ListNotebookInstancesRequest class provides an interface for SageMaker ListNotebookInstances requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::listNotebookInstances
 */

/*!
 * @brief  Constructs a new ListNotebookInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest(const ListNotebookInstancesRequest &other)
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListNotebookInstancesRequest object.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest()
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(SageMakerRequest::ListNotebookInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookInstancesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListNotebookInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNotebookInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstancesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListNotebookInstancesRequestPrivate
 *
 * @brief  Private implementation for ListNotebookInstancesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstancesRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public ListNotebookInstancesRequest instance.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstancesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
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
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
