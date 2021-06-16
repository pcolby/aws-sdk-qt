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

#include "deletediscovererrequest.h"
#include "deletediscovererrequest_p.h"
#include "deletediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteDiscovererRequest
 * \brief The DeleteDiscovererRequest class provides an interface for Schemas DeleteDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDiscovererRequest::DeleteDiscovererRequest(const DeleteDiscovererRequest &other)
    : SchemasRequest(new DeleteDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDiscovererRequest object.
 */
DeleteDiscovererRequest::DeleteDiscovererRequest()
    : SchemasRequest(new DeleteDiscovererRequestPrivate(SchemasRequest::DeleteDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DeleteDiscovererRequestPrivate
 * \brief The DeleteDiscovererRequestPrivate class provides private implementation for DeleteDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DeleteDiscovererRequestPrivate::DeleteDiscovererRequestPrivate(
    const SchemasRequest::Action action, DeleteDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDiscovererRequest
 * class' copy constructor.
 */
DeleteDiscovererRequestPrivate::DeleteDiscovererRequestPrivate(
    const DeleteDiscovererRequestPrivate &other, DeleteDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
