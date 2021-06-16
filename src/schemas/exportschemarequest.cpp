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

#include "exportschemarequest.h"
#include "exportschemarequest_p.h"
#include "exportschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ExportSchemaRequest
 * \brief The ExportSchemaRequest class provides an interface for Schemas ExportSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::exportSchema
 */

/*!
 * Constructs a copy of \a other.
 */
ExportSchemaRequest::ExportSchemaRequest(const ExportSchemaRequest &other)
    : SchemasRequest(new ExportSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportSchemaRequest object.
 */
ExportSchemaRequest::ExportSchemaRequest()
    : SchemasRequest(new ExportSchemaRequestPrivate(SchemasRequest::ExportSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool ExportSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportSchemaRequest::response(QNetworkReply * const reply) const
{
    return new ExportSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ExportSchemaRequestPrivate
 * \brief The ExportSchemaRequestPrivate class provides private implementation for ExportSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ExportSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ExportSchemaRequestPrivate::ExportSchemaRequestPrivate(
    const SchemasRequest::Action action, ExportSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportSchemaRequest
 * class' copy constructor.
 */
ExportSchemaRequestPrivate::ExportSchemaRequestPrivate(
    const ExportSchemaRequestPrivate &other, ExportSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
