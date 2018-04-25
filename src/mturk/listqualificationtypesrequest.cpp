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

#include "listqualificationtypesrequest.h"
#include "listqualificationtypesrequest_p.h"
#include "listqualificationtypesresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationTypesRequest
 * \brief The ListQualificationTypesRequest class provides an interface for MTurk ListQualificationTypes requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest(const ListQualificationTypesRequest &other)
    : MTurkRequest(new ListQualificationTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListQualificationTypesRequest object.
 */
ListQualificationTypesRequest::ListQualificationTypesRequest()
    : MTurkRequest(new ListQualificationTypesRequestPrivate(MTurkRequest::ListQualificationTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListQualificationTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListQualificationTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListQualificationTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListQualificationTypesResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListQualificationTypesRequestPrivate
 * \brief The ListQualificationTypesRequestPrivate class provides private implementation for ListQualificationTypesRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationTypesRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const MTurkRequest::Action action, ListQualificationTypesRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListQualificationTypesRequest
 * class' copy constructor.
 */
ListQualificationTypesRequestPrivate::ListQualificationTypesRequestPrivate(
    const ListQualificationTypesRequestPrivate &other, ListQualificationTypesRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
