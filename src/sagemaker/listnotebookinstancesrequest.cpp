/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesrequest_p.h"
#include "listnotebookinstancesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesRequest
 * \brief The ListNotebookInstancesRequest class provides an interface for SageMaker ListNotebookInstances requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listNotebookInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookInstancesRequest::ListNotebookInstancesRequest(const ListNotebookInstancesRequest &other)
    : SageMakerRequest(new ListNotebookInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookInstancesRequest object.
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
 * Returns a ListNotebookInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstancesRequestPrivate
 * \brief The ListNotebookInstancesRequestPrivate class provides private implementation for ListNotebookInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstancesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstancesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstancesRequest
 * class' copy constructor.
 */
ListNotebookInstancesRequestPrivate::ListNotebookInstancesRequestPrivate(
    const ListNotebookInstancesRequestPrivate &other, ListNotebookInstancesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
