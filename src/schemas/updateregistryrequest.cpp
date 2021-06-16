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

#include "updateregistryrequest.h"
#include "updateregistryrequest_p.h"
#include "updateregistryresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateRegistryRequest
 * \brief The UpdateRegistryRequest class provides an interface for Schemas UpdateRegistry requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRegistryRequest::UpdateRegistryRequest(const UpdateRegistryRequest &other)
    : SchemasRequest(new UpdateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRegistryRequest object.
 */
UpdateRegistryRequest::UpdateRegistryRequest()
    : SchemasRequest(new UpdateRegistryRequestPrivate(SchemasRequest::UpdateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::UpdateRegistryRequestPrivate
 * \brief The UpdateRegistryRequestPrivate class provides private implementation for UpdateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateRegistryRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const SchemasRequest::Action action, UpdateRegistryRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegistryRequest
 * class' copy constructor.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const UpdateRegistryRequestPrivate &other, UpdateRegistryRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
