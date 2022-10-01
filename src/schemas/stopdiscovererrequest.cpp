// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
