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

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::ListDataSourcesRequest
 * \brief The ListDataSourcesRequest class provides an interface for kendra ListDataSources requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::listDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : kendraRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : kendraRequest(new ListDataSourcesRequestPrivate(kendraRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::ListDataSourcesRequestPrivate
 * \brief The ListDataSourcesRequestPrivate class provides private implementation for ListDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a ListDataSourcesRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const kendraRequest::Action action, ListDataSourcesRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
