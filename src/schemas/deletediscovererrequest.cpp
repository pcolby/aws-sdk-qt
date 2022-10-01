// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
