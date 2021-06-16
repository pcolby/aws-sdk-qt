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

#include "stopdiscovererrequest.h"
#include "stopdiscovererrequest_p.h"
#include "stopdiscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StopDiscovererRequest
 * \brief The StopDiscovererRequest class provides an interface for Schemas StopDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::stopDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
StopDiscovererRequest::StopDiscovererRequest(const StopDiscovererRequest &other)
    : SchemasRequest(new StopDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDiscovererRequest object.
 */
StopDiscovererRequest::StopDiscovererRequest()
    : SchemasRequest(new StopDiscovererRequestPrivate(SchemasRequest::StopDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool StopDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new StopDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::StopDiscovererRequestPrivate
 * \brief The StopDiscovererRequestPrivate class provides private implementation for StopDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StopDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
StopDiscovererRequestPrivate::StopDiscovererRequestPrivate(
    const SchemasRequest::Action action, StopDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDiscovererRequest
 * class' copy constructor.
 */
StopDiscovererRequestPrivate::StopDiscovererRequestPrivate(
    const StopDiscovererRequestPrivate &other, StopDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
