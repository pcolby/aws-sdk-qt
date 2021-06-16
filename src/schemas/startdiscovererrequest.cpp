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

#include "startdiscovererrequest.h"
#include "startdiscovererrequest_p.h"
#include "startdiscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StartDiscovererRequest
 * \brief The StartDiscovererRequest class provides an interface for Schemas StartDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::startDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
StartDiscovererRequest::StartDiscovererRequest(const StartDiscovererRequest &other)
    : SchemasRequest(new StartDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDiscovererRequest object.
 */
StartDiscovererRequest::StartDiscovererRequest()
    : SchemasRequest(new StartDiscovererRequestPrivate(SchemasRequest::StartDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool StartDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new StartDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::StartDiscovererRequestPrivate
 * \brief The StartDiscovererRequestPrivate class provides private implementation for StartDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StartDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
StartDiscovererRequestPrivate::StartDiscovererRequestPrivate(
    const SchemasRequest::Action action, StartDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDiscovererRequest
 * class' copy constructor.
 */
StartDiscovererRequestPrivate::StartDiscovererRequestPrivate(
    const StartDiscovererRequestPrivate &other, StartDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
