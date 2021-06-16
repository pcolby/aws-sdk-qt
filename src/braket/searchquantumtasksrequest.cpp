/*
    Copyright 2013-2021 Paul Colby

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

#include "searchquantumtasksrequest.h"
#include "searchquantumtasksrequest_p.h"
#include "searchquantumtasksresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchQuantumTasksRequest
 * \brief The SearchQuantumTasksRequest class provides an interface for Braket SearchQuantumTasks requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::searchQuantumTasks
 */

/*!
 * Constructs a copy of \a other.
 */
SearchQuantumTasksRequest::SearchQuantumTasksRequest(const SearchQuantumTasksRequest &other)
    : BraketRequest(new SearchQuantumTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchQuantumTasksRequest object.
 */
SearchQuantumTasksRequest::SearchQuantumTasksRequest()
    : BraketRequest(new SearchQuantumTasksRequestPrivate(BraketRequest::SearchQuantumTasksAction, this))
{

}

/*!
 * \reimp
 */
bool SearchQuantumTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchQuantumTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchQuantumTasksRequest::response(QNetworkReply * const reply) const
{
    return new SearchQuantumTasksResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::SearchQuantumTasksRequestPrivate
 * \brief The SearchQuantumTasksRequestPrivate class provides private implementation for SearchQuantumTasksRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchQuantumTasksRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
SearchQuantumTasksRequestPrivate::SearchQuantumTasksRequestPrivate(
    const BraketRequest::Action action, SearchQuantumTasksRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchQuantumTasksRequest
 * class' copy constructor.
 */
SearchQuantumTasksRequestPrivate::SearchQuantumTasksRequestPrivate(
    const SearchQuantumTasksRequestPrivate &other, SearchQuantumTasksRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
