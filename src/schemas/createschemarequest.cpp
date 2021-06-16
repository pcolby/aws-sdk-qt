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

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateSchemaRequest
 * \brief The CreateSchemaRequest class provides an interface for Schemas CreateSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createSchema
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : SchemasRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : SchemasRequest(new CreateSchemaRequestPrivate(SchemasRequest::CreateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::CreateSchemaRequestPrivate
 * \brief The CreateSchemaRequestPrivate class provides private implementation for CreateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const SchemasRequest::Action action, CreateSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
