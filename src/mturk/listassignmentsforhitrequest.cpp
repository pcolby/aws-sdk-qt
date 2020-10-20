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

#include "listassignmentsforhitrequest.h"
#include "listassignmentsforhitrequest_p.h"
#include "listassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITRequest
 * \brief The ListAssignmentsForHITRequest class provides an interface for MTurk ListAssignmentsForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listAssignmentsForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest(const ListAssignmentsForHITRequest &other)
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAssignmentsForHITRequest object.
 */
ListAssignmentsForHITRequest::ListAssignmentsForHITRequest()
    : MTurkRequest(new ListAssignmentsForHITRequestPrivate(MTurkRequest::ListAssignmentsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool ListAssignmentsForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAssignmentsForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new ListAssignmentsForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITRequestPrivate
 * \brief The ListAssignmentsForHITRequestPrivate class provides private implementation for ListAssignmentsForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListAssignmentsForHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAssignmentsForHITRequest
 * class' copy constructor.
 */
ListAssignmentsForHITRequestPrivate::ListAssignmentsForHITRequestPrivate(
    const ListAssignmentsForHITRequestPrivate &other, ListAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
