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

#include "listexperienceentitiesrequest.h"
#include "listexperienceentitiesrequest_p.h"
#include "listexperienceentitiesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesRequest
 * \brief The ListExperienceEntitiesRequest class provides an interface for Kendra ListExperienceEntities requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperienceEntities
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperienceEntitiesRequest::ListExperienceEntitiesRequest(const ListExperienceEntitiesRequest &other)
    : KendraRequest(new ListExperienceEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperienceEntitiesRequest object.
 */
ListExperienceEntitiesRequest::ListExperienceEntitiesRequest()
    : KendraRequest(new ListExperienceEntitiesRequestPrivate(KendraRequest::ListExperienceEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperienceEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperienceEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperienceEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListExperienceEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesRequestPrivate
 * \brief The ListExperienceEntitiesRequestPrivate class provides private implementation for ListExperienceEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperienceEntitiesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListExperienceEntitiesRequestPrivate::ListExperienceEntitiesRequestPrivate(
    const KendraRequest::Action action, ListExperienceEntitiesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperienceEntitiesRequest
 * class' copy constructor.
 */
ListExperienceEntitiesRequestPrivate::ListExperienceEntitiesRequestPrivate(
    const ListExperienceEntitiesRequestPrivate &other, ListExperienceEntitiesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
