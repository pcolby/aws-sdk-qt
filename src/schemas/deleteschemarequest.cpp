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

#include "deleteschemarequest.h"
#include "deleteschemarequest_p.h"
#include "deleteschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteSchemaRequest
 * \brief The DeleteSchemaRequest class provides an interface for Schemas DeleteSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSchemaRequest::DeleteSchemaRequest(const DeleteSchemaRequest &other)
    : SchemasRequest(new DeleteSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSchemaRequest object.
 */
DeleteSchemaRequest::DeleteSchemaRequest()
    : SchemasRequest(new DeleteSchemaRequestPrivate(SchemasRequest::DeleteSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DeleteSchemaRequestPrivate
 * \brief The DeleteSchemaRequestPrivate class provides private implementation for DeleteSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const SchemasRequest::Action action, DeleteSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaRequest
 * class' copy constructor.
 */
DeleteSchemaRequestPrivate::DeleteSchemaRequestPrivate(
    const DeleteSchemaRequestPrivate &other, DeleteSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
