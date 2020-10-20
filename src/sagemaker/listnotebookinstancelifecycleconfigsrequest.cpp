/*
    Copyright 2013-2020 Paul Colby

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

#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsrequest_p.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsRequest
 * \brief The ListNotebookInstanceLifecycleConfigsRequest class provides an interface for SageMaker ListNotebookInstanceLifecycleConfigs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listNotebookInstanceLifecycleConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest(const ListNotebookInstanceLifecycleConfigsRequest &other)
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsRequest object.
 */
ListNotebookInstanceLifecycleConfigsRequest::ListNotebookInstanceLifecycleConfigsRequest()
    : SageMakerRequest(new ListNotebookInstanceLifecycleConfigsRequestPrivate(SageMakerRequest::ListNotebookInstanceLifecycleConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNotebookInstanceLifecycleConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNotebookInstanceLifecycleConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNotebookInstanceLifecycleConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListNotebookInstanceLifecycleConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListNotebookInstanceLifecycleConfigsRequestPrivate
 * \brief The ListNotebookInstanceLifecycleConfigsRequestPrivate class provides private implementation for ListNotebookInstanceLifecycleConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListNotebookInstanceLifecycleConfigsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const SageMakerRequest::Action action, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNotebookInstanceLifecycleConfigsRequest
 * class' copy constructor.
 */
ListNotebookInstanceLifecycleConfigsRequestPrivate::ListNotebookInstanceLifecycleConfigsRequestPrivate(
    const ListNotebookInstanceLifecycleConfigsRequestPrivate &other, ListNotebookInstanceLifecycleConfigsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
