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

#include "creatediscovererrequest.h"
#include "creatediscovererrequest_p.h"
#include "creatediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateDiscovererRequest
 * \brief The CreateDiscovererRequest class provides an interface for Schemas CreateDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDiscovererRequest::CreateDiscovererRequest(const CreateDiscovererRequest &other)
    : SchemasRequest(new CreateDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDiscovererRequest object.
 */
CreateDiscovererRequest::CreateDiscovererRequest()
    : SchemasRequest(new CreateDiscovererRequestPrivate(SchemasRequest::CreateDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new CreateDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::CreateDiscovererRequestPrivate
 * \brief The CreateDiscovererRequestPrivate class provides private implementation for CreateDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
CreateDiscovererRequestPrivate::CreateDiscovererRequestPrivate(
    const SchemasRequest::Action action, CreateDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDiscovererRequest
 * class' copy constructor.
 */
CreateDiscovererRequestPrivate::CreateDiscovererRequestPrivate(
    const CreateDiscovererRequestPrivate &other, CreateDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
