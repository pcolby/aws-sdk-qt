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

#include "listschemaversionsrequest.h"
#include "listschemaversionsrequest_p.h"
#include "listschemaversionsresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListSchemaVersionsRequest
 * \brief The ListSchemaVersionsRequest class provides an interface for Schemas ListSchemaVersions requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listSchemaVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemaVersionsRequest::ListSchemaVersionsRequest(const ListSchemaVersionsRequest &other)
    : SchemasRequest(new ListSchemaVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemaVersionsRequest object.
 */
ListSchemaVersionsRequest::ListSchemaVersionsRequest()
    : SchemasRequest(new ListSchemaVersionsRequestPrivate(SchemasRequest::ListSchemaVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchemaVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchemaVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchemaVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemaVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListSchemaVersionsRequestPrivate
 * \brief The ListSchemaVersionsRequestPrivate class provides private implementation for ListSchemaVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListSchemaVersionsRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListSchemaVersionsRequestPrivate::ListSchemaVersionsRequestPrivate(
    const SchemasRequest::Action action, ListSchemaVersionsRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchemaVersionsRequest
 * class' copy constructor.
 */
ListSchemaVersionsRequestPrivate::ListSchemaVersionsRequestPrivate(
    const ListSchemaVersionsRequestPrivate &other, ListSchemaVersionsRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
