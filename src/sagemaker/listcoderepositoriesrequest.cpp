/*
    Copyright 2013-2019 Paul Colby

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

#include "listcoderepositoriesrequest.h"
#include "listcoderepositoriesrequest_p.h"
#include "listcoderepositoriesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesRequest
 * \brief The ListCodeRepositoriesRequest class provides an interface for SageMaker ListCodeRepositories requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listCodeRepositories
 */

/*!
 * Constructs a copy of \a other.
 */
ListCodeRepositoriesRequest::ListCodeRepositoriesRequest(const ListCodeRepositoriesRequest &other)
    : SageMakerRequest(new ListCodeRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCodeRepositoriesRequest object.
 */
ListCodeRepositoriesRequest::ListCodeRepositoriesRequest()
    : SageMakerRequest(new ListCodeRepositoriesRequestPrivate(SageMakerRequest::ListCodeRepositoriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCodeRepositoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCodeRepositoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCodeRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListCodeRepositoriesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListCodeRepositoriesRequestPrivate
 * \brief The ListCodeRepositoriesRequestPrivate class provides private implementation for ListCodeRepositoriesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCodeRepositoriesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListCodeRepositoriesRequestPrivate::ListCodeRepositoriesRequestPrivate(
    const SageMakerRequest::Action action, ListCodeRepositoriesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCodeRepositoriesRequest
 * class' copy constructor.
 */
ListCodeRepositoriesRequestPrivate::ListCodeRepositoriesRequestPrivate(
    const ListCodeRepositoriesRequestPrivate &other, ListCodeRepositoriesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
