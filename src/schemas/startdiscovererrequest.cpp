// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
