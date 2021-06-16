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

#include "listfiltersrequest.h"
#include "listfiltersrequest_p.h"
#include "listfiltersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListFiltersRequest
 * \brief The ListFiltersRequest class provides an interface for Personalize ListFilters requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListFiltersRequest::ListFiltersRequest(const ListFiltersRequest &other)
    : PersonalizeRequest(new ListFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFiltersRequest object.
 */
ListFiltersRequest::ListFiltersRequest()
    : PersonalizeRequest(new ListFiltersRequestPrivate(PersonalizeRequest::ListFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListFiltersRequestPrivate
 * \brief The ListFiltersRequestPrivate class provides private implementation for ListFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListFiltersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const PersonalizeRequest::Action action, ListFiltersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFiltersRequest
 * class' copy constructor.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const ListFiltersRequestPrivate &other, ListFiltersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
