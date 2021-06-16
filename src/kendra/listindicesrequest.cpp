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

#include "listindicesrequest.h"
#include "listindicesrequest_p.h"
#include "listindicesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListIndicesRequest
 * \brief The ListIndicesRequest class provides an interface for kendra ListIndices requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listIndices
 */

/*!
 * Constructs a copy of \a other.
 */
ListIndicesRequest::ListIndicesRequest(const ListIndicesRequest &other)
    : kendraRequest(new ListIndicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIndicesRequest object.
 */
ListIndicesRequest::ListIndicesRequest()
    : kendraRequest(new ListIndicesRequestPrivate(kendraRequest::ListIndicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIndicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIndicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIndicesRequest::response(QNetworkReply * const reply) const
{
    return new ListIndicesResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::ListIndicesRequestPrivate
 * \brief The ListIndicesRequestPrivate class provides private implementation for ListIndicesRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListIndicesRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const kendraRequest::Action action, ListIndicesRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIndicesRequest
 * class' copy constructor.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const ListIndicesRequestPrivate &other, ListIndicesRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
