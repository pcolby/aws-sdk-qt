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

#include "listexperiencesrequest.h"
#include "listexperiencesrequest_p.h"
#include "listexperiencesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperiencesRequest
 * \brief The ListExperiencesRequest class provides an interface for Kendra ListExperiences requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperiences
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperiencesRequest::ListExperiencesRequest(const ListExperiencesRequest &other)
    : KendraRequest(new ListExperiencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperiencesRequest object.
 */
ListExperiencesRequest::ListExperiencesRequest()
    : KendraRequest(new ListExperiencesRequestPrivate(KendraRequest::ListExperiencesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperiencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperiencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperiencesRequest::response(QNetworkReply * const reply) const
{
    return new ListExperiencesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListExperiencesRequestPrivate
 * \brief The ListExperiencesRequestPrivate class provides private implementation for ListExperiencesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperiencesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListExperiencesRequestPrivate::ListExperiencesRequestPrivate(
    const KendraRequest::Action action, ListExperiencesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperiencesRequest
 * class' copy constructor.
 */
ListExperiencesRequestPrivate::ListExperiencesRequestPrivate(
    const ListExperiencesRequestPrivate &other, ListExperiencesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
