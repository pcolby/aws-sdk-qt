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

#include "updateschemarequest.h"
#include "updateschemarequest_p.h"
#include "updateschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateSchemaRequest
 * \brief The UpdateSchemaRequest class provides an interface for Schemas UpdateSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateSchema
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSchemaRequest::UpdateSchemaRequest(const UpdateSchemaRequest &other)
    : SchemasRequest(new UpdateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSchemaRequest object.
 */
UpdateSchemaRequest::UpdateSchemaRequest()
    : SchemasRequest(new UpdateSchemaRequestPrivate(SchemasRequest::UpdateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::UpdateSchemaRequestPrivate
 * \brief The UpdateSchemaRequestPrivate class provides private implementation for UpdateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const SchemasRequest::Action action, UpdateSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSchemaRequest
 * class' copy constructor.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const UpdateSchemaRequestPrivate &other, UpdateSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
