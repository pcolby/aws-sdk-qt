// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatediscovererrequest.h"
#include "updatediscovererrequest_p.h"
#include "updatediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateDiscovererRequest
 * \brief The UpdateDiscovererRequest class provides an interface for Schemas UpdateDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDiscovererRequest::UpdateDiscovererRequest(const UpdateDiscovererRequest &other)
    : SchemasRequest(new UpdateDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDiscovererRequest object.
 */
UpdateDiscovererRequest::UpdateDiscovererRequest()
    : SchemasRequest(new UpdateDiscovererRequestPrivate(SchemasRequest::UpdateDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::UpdateDiscovererRequestPrivate
 * \brief The UpdateDiscovererRequestPrivate class provides private implementation for UpdateDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
UpdateDiscovererRequestPrivate::UpdateDiscovererRequestPrivate(
    const SchemasRequest::Action action, UpdateDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDiscovererRequest
 * class' copy constructor.
 */
UpdateDiscovererRequestPrivate::UpdateDiscovererRequestPrivate(
    const UpdateDiscovererRequestPrivate &other, UpdateDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
