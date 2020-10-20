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

#include "listsolutionversionsrequest.h"
#include "listsolutionversionsrequest_p.h"
#include "listsolutionversionsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionVersionsRequest
 * \brief The ListSolutionVersionsRequest class provides an interface for Personalize ListSolutionVersions requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSolutionVersionsRequest::ListSolutionVersionsRequest(const ListSolutionVersionsRequest &other)
    : PersonalizeRequest(new ListSolutionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSolutionVersionsRequest object.
 */
ListSolutionVersionsRequest::ListSolutionVersionsRequest()
    : PersonalizeRequest(new ListSolutionVersionsRequestPrivate(PersonalizeRequest::ListSolutionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSolutionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSolutionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSolutionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSolutionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListSolutionVersionsRequestPrivate
 * \brief The ListSolutionVersionsRequestPrivate class provides private implementation for ListSolutionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionVersionsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListSolutionVersionsRequestPrivate::ListSolutionVersionsRequestPrivate(
    const PersonalizeRequest::Action action, ListSolutionVersionsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSolutionVersionsRequest
 * class' copy constructor.
 */
ListSolutionVersionsRequestPrivate::ListSolutionVersionsRequestPrivate(
    const ListSolutionVersionsRequestPrivate &other, ListSolutionVersionsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
