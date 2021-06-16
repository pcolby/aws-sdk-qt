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

#include "getdiscoveredschemarequest.h"
#include "getdiscoveredschemarequest_p.h"
#include "getdiscoveredschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaRequest
 * \brief The GetDiscoveredSchemaRequest class provides an interface for Schemas GetDiscoveredSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getDiscoveredSchema
 */

/*!
 * Constructs a copy of \a other.
 */
GetDiscoveredSchemaRequest::GetDiscoveredSchemaRequest(const GetDiscoveredSchemaRequest &other)
    : SchemasRequest(new GetDiscoveredSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDiscoveredSchemaRequest object.
 */
GetDiscoveredSchemaRequest::GetDiscoveredSchemaRequest()
    : SchemasRequest(new GetDiscoveredSchemaRequestPrivate(SchemasRequest::GetDiscoveredSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool GetDiscoveredSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDiscoveredSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDiscoveredSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetDiscoveredSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaRequestPrivate
 * \brief The GetDiscoveredSchemaRequestPrivate class provides private implementation for GetDiscoveredSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetDiscoveredSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
GetDiscoveredSchemaRequestPrivate::GetDiscoveredSchemaRequestPrivate(
    const SchemasRequest::Action action, GetDiscoveredSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDiscoveredSchemaRequest
 * class' copy constructor.
 */
GetDiscoveredSchemaRequestPrivate::GetDiscoveredSchemaRequestPrivate(
    const GetDiscoveredSchemaRequestPrivate &other, GetDiscoveredSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
