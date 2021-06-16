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

#include "listdiscoverersrequest.h"
#include "listdiscoverersrequest_p.h"
#include "listdiscoverersresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListDiscoverersRequest
 * \brief The ListDiscoverersRequest class provides an interface for Schemas ListDiscoverers requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listDiscoverers
 */

/*!
 * Constructs a copy of \a other.
 */
ListDiscoverersRequest::ListDiscoverersRequest(const ListDiscoverersRequest &other)
    : SchemasRequest(new ListDiscoverersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDiscoverersRequest object.
 */
ListDiscoverersRequest::ListDiscoverersRequest()
    : SchemasRequest(new ListDiscoverersRequestPrivate(SchemasRequest::ListDiscoverersAction, this))
{

}

/*!
 * \reimp
 */
bool ListDiscoverersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDiscoverersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDiscoverersRequest::response(QNetworkReply * const reply) const
{
    return new ListDiscoverersResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListDiscoverersRequestPrivate
 * \brief The ListDiscoverersRequestPrivate class provides private implementation for ListDiscoverersRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListDiscoverersRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListDiscoverersRequestPrivate::ListDiscoverersRequestPrivate(
    const SchemasRequest::Action action, ListDiscoverersRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDiscoverersRequest
 * class' copy constructor.
 */
ListDiscoverersRequestPrivate::ListDiscoverersRequestPrivate(
    const ListDiscoverersRequestPrivate &other, ListDiscoverersRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
