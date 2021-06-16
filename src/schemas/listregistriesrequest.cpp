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

#include "listregistriesrequest.h"
#include "listregistriesrequest_p.h"
#include "listregistriesresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListRegistriesRequest
 * \brief The ListRegistriesRequest class provides an interface for Schemas ListRegistries requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listRegistries
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegistriesRequest::ListRegistriesRequest(const ListRegistriesRequest &other)
    : SchemasRequest(new ListRegistriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegistriesRequest object.
 */
ListRegistriesRequest::ListRegistriesRequest()
    : SchemasRequest(new ListRegistriesRequestPrivate(SchemasRequest::ListRegistriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegistriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegistriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegistriesRequest::response(QNetworkReply * const reply) const
{
    return new ListRegistriesResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListRegistriesRequestPrivate
 * \brief The ListRegistriesRequestPrivate class provides private implementation for ListRegistriesRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListRegistriesRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const SchemasRequest::Action action, ListRegistriesRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegistriesRequest
 * class' copy constructor.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const ListRegistriesRequestPrivate &other, ListRegistriesRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
