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

#include "listsolutionsrequest.h"
#include "listsolutionsrequest_p.h"
#include "listsolutionsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionsRequest
 * \brief The ListSolutionsRequest class provides an interface for Personalize ListSolutions requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSolutionsRequest::ListSolutionsRequest(const ListSolutionsRequest &other)
    : PersonalizeRequest(new ListSolutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSolutionsRequest object.
 */
ListSolutionsRequest::ListSolutionsRequest()
    : PersonalizeRequest(new ListSolutionsRequestPrivate(PersonalizeRequest::ListSolutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSolutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSolutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSolutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSolutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListSolutionsRequestPrivate
 * \brief The ListSolutionsRequestPrivate class provides private implementation for ListSolutionsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListSolutionsRequestPrivate::ListSolutionsRequestPrivate(
    const PersonalizeRequest::Action action, ListSolutionsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSolutionsRequest
 * class' copy constructor.
 */
ListSolutionsRequestPrivate::ListSolutionsRequestPrivate(
    const ListSolutionsRequestPrivate &other, ListSolutionsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
