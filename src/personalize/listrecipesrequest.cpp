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

#include "listrecipesrequest.h"
#include "listrecipesrequest_p.h"
#include "listrecipesresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecipesRequest
 * \brief The ListRecipesRequest class provides an interface for Personalize ListRecipes requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecipes
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecipesRequest::ListRecipesRequest(const ListRecipesRequest &other)
    : PersonalizeRequest(new ListRecipesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecipesRequest object.
 */
ListRecipesRequest::ListRecipesRequest()
    : PersonalizeRequest(new ListRecipesRequestPrivate(PersonalizeRequest::ListRecipesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecipesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecipesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecipesRequest::response(QNetworkReply * const reply) const
{
    return new ListRecipesResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListRecipesRequestPrivate
 * \brief The ListRecipesRequestPrivate class provides private implementation for ListRecipesRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecipesRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListRecipesRequestPrivate::ListRecipesRequestPrivate(
    const PersonalizeRequest::Action action, ListRecipesRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecipesRequest
 * class' copy constructor.
 */
ListRecipesRequestPrivate::ListRecipesRequestPrivate(
    const ListRecipesRequestPrivate &other, ListRecipesRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
