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
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListIndicesRequest
 * \brief The ListIndicesRequest class provides an interface for Kendra ListIndices requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listIndices
 */

/*!
 * Constructs a copy of \a other.
 */
ListIndicesRequest::ListIndicesRequest(const ListIndicesRequest &other)
    : KendraRequest(new ListIndicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIndicesRequest object.
 */
ListIndicesRequest::ListIndicesRequest()
    : KendraRequest(new ListIndicesRequestPrivate(KendraRequest::ListIndicesAction, this))
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
 * \class QtAws::Kendra::ListIndicesRequestPrivate
 * \brief The ListIndicesRequestPrivate class provides private implementation for ListIndicesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListIndicesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const KendraRequest::Action action, ListIndicesRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
